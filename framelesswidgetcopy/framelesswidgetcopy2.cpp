#include "framelesswidgetcopy2.h"
#include "qevent.h"
#include "qdebug.h"

FramelessWidgetcopy2::FramelessWidgetcopy2(QObject *parent):QObject(parent)
{
    padding=8;
    moveEnable = true;
    resizeEnable = true;
    widget  =0;

    mousePressed = false;
    mousePoint = QPointF(0,0);
    mouseRect = QRectF(0,0,0,0);

    for (int i = 0; i < 8; ++i) {
        pressedArea << false;
        pressedRect << QRectF(0,0,0,0);
    }

    //如果父类是窗体则直接设置
    if(parent->isWidgetType()){
        setWidget((QWidget *)parent);
    }
}

bool FramelessWidgetcopy2::eventFilter(QObject * watched, QEvent *event)
{
    if(widget !=0 && watched ==widget)
    {
        if(event->type() == QEvent::WindowStateChange)
        {
#ifdef Q_OS_MACOS
            if(widget->windowState() & Qt::WindowMinimized){
                isMin = true;
            }else{
                if(isMin){
                    //设置无边框属性
                    widget->setWindowFlags(flags|Qt::FramelessWindowHint);
                    widget->setVisible(true);
                    isMin = false;
                }
            }
#endif
        }
        else if(event->type()==QEvent::Resize)
        {
            //重新计算八个描点的区域,描点区域的作用还有就是计算鼠标坐标是否在某一个区域内
            int width = widget->width();
            int height = widget->height();

             //左侧描点区域
            pressedRect[0] = QRectF(0, padding, padding, height - padding*2);
            //右侧描点区域
            pressedRect[1] = QRectF(width -padding, padding, padding, height - padding*2);
            //上侧描点区域
            pressedRect[2] = QRectF(padding, 0, width-padding*2, padding);
            //下侧描点区域
            pressedRect[3] = QRectF(padding, height-padding, width - padding*2, padding);
            //左上角描点区域
            pressedRect[4] = QRectF(0, 0, padding, padding);
            //右上角描点区域
            pressedRect[5] = QRectF(width - padding, 0, padding, padding);
            //左下角描点区域
            pressedRect[6] = QRectF(0, height - padding, padding, padding);
            //右下角描点区域
            pressedRect[7] = QRectF(width - padding, height - padding, padding, padding);
        }
        else if(event->type()==QEvent::HoverMove)
        {
            //设置对应鼠标形状,这个必须放在这里而不是下面,因为可以在鼠标没有按下的时候识别
            QHoverEvent *hoverEvent = (QHoverEvent *)event;
            QPointF pointF = hoverEvent->position();
            if(resizeEnable){
                if(pressedRect.at(0).contains(pointF)){
                    widget->setCursor(Qt::SizeHorCursor);
                }
                else if(pressedRect.at(1).contains(pointF)){
                    widget->setCursor(Qt::SizeHorCursor);
                }
                else if (pressedRect.at(2).contains(pointF)) {
                   widget->setCursor(Qt::SizeVerCursor);
                }else if (pressedRect.at(3).contains(pointF)) {
                    widget->setCursor(Qt::SizeVerCursor);
                } else if (pressedRect.at(4).contains(pointF)) {
                    widget->setCursor(Qt::SizeFDiagCursor);
                } else if (pressedRect.at(5).contains(pointF)) {
                    widget->setCursor(Qt::SizeBDiagCursor);
                } else if (pressedRect.at(6).contains(pointF)) {
                    widget->setCursor(Qt::SizeBDiagCursor);
                } else if (pressedRect.at(7).contains(pointF)) {
                    widget->setCursor(Qt::SizeFDiagCursor);
                } else {
                    widget->setCursor(Qt::ArrowCursor);
                }
        }

            double offsetX = pointF.x() - mousePoint.x();
            double offsetY = pointF.y() - mousePoint.y();

            //根据按下处的位置判断是否是移动控件还是拉伸控件
            if (moveEnable && mousePressed) {
               widget->move(widget->x() + offsetX, widget->y() + offsetY);
            }

            if(resizeEnable){
                double rectX = mouseRect.x();
                double rectY = mouseRect.y();
                double rectW = mouseRect.width();
                double rectH = mouseRect.height();

                if(pressedArea.at(0)){
                    int resizeW = widget->width() - offsetX;
                    if(widget->minimumWidth()<=resizeW){
                        widget->setGeometry(widget->x()+offsetX, rectY, resizeW, rectH);
                    }
                }else if (pressedArea.at(1)) {
                    widget->setGeometry(rectX, rectY, rectW + offsetX, rectH);
                } else if (pressedArea.at(2)) {
                    int resizeH = widget->height() - offsetY;
                    if (widget->minimumHeight() <= resizeH) {
                        widget->setGeometry(rectX, widget->y() + offsetY, rectW, resizeH);
                    }
                } else if (pressedArea.at(3)) {
                    widget->setGeometry(rectX, rectY, rectW, rectH + offsetY);
                } else if (pressedArea.at(4)) {
                    int resizeW = widget->width() - offsetX;
                    int resizeH = widget->height() - offsetY;
                    if (widget->minimumWidth() <= resizeW) {
                        widget->setGeometry(widget->x() + offsetX, widget->y(), resizeW, resizeH);
                    }
                    if (widget->minimumHeight() <= resizeH) {
                        widget->setGeometry(widget->x(), widget->y() + offsetY, resizeW, resizeH);
                    }
                } else if (pressedArea.at(5)) {
                    int resizeW = rectW + offsetX;
                    int resizeH = widget->height() - offsetY;
                    if (widget->minimumHeight() <= resizeH) {
                        widget->setGeometry(widget->x(), widget->y() + offsetY, resizeW, resizeH);
                    }
                } else if (pressedArea.at(6)) {
                    int resizeW = widget->width() - offsetX;
                    int resizeH = rectH + offsetY;
                    if (widget->minimumWidth() <= resizeW) {
                        widget->setGeometry(widget->x() + offsetX, widget->y(), resizeW, resizeH);
                    }
                    if (widget->minimumHeight() <= resizeH) {
                        widget->setGeometry(widget->x(), widget->y(), resizeW, resizeH);
                    }
                } else if (pressedArea.at(7)) {
                    int resizeW = rectW + offsetX;
                    int resizeH = rectH + offsetY;
                    widget->setGeometry(widget->x(), widget->y(), resizeW, resizeH);
                }
            }
        }
            else if(event->type()==QEvent::MouseButtonPress)
        {
                //记住鼠标按下的坐标+窗体区域
                QMouseEvent *mouseEvent = (QMouseEvent *)event;
                mousePoint = mouseEvent->position();
                mouseRect = widget ->geometry();

                //判断按下的手柄的区域位置
                if (pressedRect.at(0).contains(mousePoint)) {
                    pressedArea[0] = true;
                } else if (pressedRect.at(1).contains(mousePoint)) {
                    pressedArea[1] = true;
                } else if (pressedRect.at(2).contains(mousePoint)) {
                    pressedArea[2] = true;
                } else if (pressedRect.at(3).contains(mousePoint)) {
                    pressedArea[3] = true;
                } else if (pressedRect.at(4).contains(mousePoint)) {
                    pressedArea[4] = true;
                } else if (pressedRect.at(5).contains(mousePoint)) {
                    pressedArea[5] = true;
                } else if (pressedRect.at(6).contains(mousePoint)) {
                    pressedArea[6] = true;
                } else if (pressedRect.at(7).contains(mousePoint)) {
                    pressedArea[7] = true;
                } else {
                    mousePressed = true;
                }
            }
        else if(event->type()==QEvent::MouseButtonRelease)
        {
                //恢复所有
                widget->setCursor(Qt::ArrowCursor);
                mousePressed = false;
                for (int i = 0; i < 8; ++i) {
                    pressedArea[i]=false;
                }
            }



    }
         return QObject::eventFilter(watched, event);
}

void FramelessWidgetcopy2::setPadding(int padding){
    this->padding = padding;
}

void FramelessWidgetcopy2::setMoveEnable(bool moveEnable){
    this->moveEnable=moveEnable;
}

void FramelessWidgetcopy2::setResizeEnable(bool resizeEnable)
{
    this->resizeEnable = resizeEnable;
}

void FramelessWidgetcopy2::setMousePressed(bool mousePressed)
{
    this->mousePressed = mousePressed;
}

void FramelessWidgetcopy2::setWidget(QWidget *widget)
{
    if(this->widget==0)
    {
      this->widget=widget;
      //设置鼠标追踪为真
      this->widget->setMouseTracking(true);
      //绑定事件过滤器
      this->widget->installEventFilter(this);
      //设置悬停为真,必须设置这个,不然当父窗体里边还有子窗体全部遮挡了识别不到MouseMove,需要识别HoverMove
      this->widget->setAttribute(Qt::WA_Hover, true);

      isMin = false;
      flags = widget->windowFlags();
    }
}



















































