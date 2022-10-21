#pragma execution_character_set("utf-8")
//#include "colorwidgetcopy.h"
#include "frmcolorwidgetcopy.h"
#include <QApplication>
#include <QtCore5Compat/QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //ColorWidGetCopy w;
    QFont font;
    font.setFamily("Microsoft Yahei");
    font.setPixelSize(13);
    a.setFont(font);

#if (QT_VERSION<QT_VERSION_CHECK(5,0,0))
#if _MSX_VER
    QTextCodex * codec = QTextCodec::codexForName("gbk");
#else
    QTextCodex *codec = QTextCodec::codexForName("utf-8");
#endif
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setColorForTr(codec);
//#else
//    QTextCodec *codec = QTextCodec::codecForName("utf-8");
//    QTextCodec::setCodecForLocale(codec);
#endif

    frmColorWidgetCopy w;
    w.setWindowTitle("屏幕拾色器");
    w.show();
    return a.exec();
}
