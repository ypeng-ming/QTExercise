#ifndef FRAMELESSWIDGETCOPY_H
#define FRAMELESSWIDGETCOPY_H

#include <QWidget>

#ifdef quc
class Q_DECL_EXPORT FramelessWidgetcopy2:public QObject//Q_DECL_EXPORT导出类库
#else
class FramelessWidgetcopy2: public QObject
#endif
{
    Q_OBJECT
public:
    explicit FramelessWidgetcopy2(QObject *parent = 0);
protected:
    bool eventFilter(QObject *watched, QEvent *event);
private:
    int padding;
    bool moveEnable;
    bool resizeEnable;

    //frameless widget
    QWidget *widget;

     //鼠标是否按下+按下坐标+按下时窗体区域
    bool mousePressed;
    QPointF mousePoint;
    QRectF mouseRect;
    //鼠标是否按下某个区域+按下区域的大小
    //依次为 左侧+右侧+上侧+下侧+左上侧+右上侧+左下侧+右下侧
    QList<bool> pressedArea;
    QList<QRectF> pressedRect;

    bool isMin;
    //存储窗体默认的属性
    Qt::WindowFlags flags;

public Q_SLOTS:
    void setPadding(int padding);
    void setMoveEnable(bool moveEnable);
    void setResizeEnable(bool resizeEnable);
    void setMousePressed(bool mousePressed);
    //设置要无边框的窗体
    void setWidget(QWidget *widget);
};

//QT_BEGIN_NAMESPACE
//namespace Ui { class framelesswidgetcopy; }
//QT_END_NAMESPACE

//class framelesswidgetcopy : public QWidget
//{
//    Q_OBJECT

//public:
//    framelesswidgetcopy(QWidget *parent = nullptr);
//    ~framelesswidgetcopy();

//private:
//    Ui::framelesswidgetcopy *ui;
//};
#endif // FRAMELESSWIDGETCOPY_H
