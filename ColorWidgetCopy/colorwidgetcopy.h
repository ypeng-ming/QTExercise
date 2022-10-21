#ifndef COLORWIDGETCOPY_H
#define COLORWIDGETCOPY_H

#include <QWidget>

class QGridLayout;
class QVBoxLayout;
class QLabel;
class QLineEdit;

#ifdef quc
class Q_DECL_EXPORT ColorWidGetCopy: public QWidget
#else
class ColorWidGetCopy:public QWidget
#endif
{
    Q_OBJECT
public:
    static ColorWidGetCopy *Instance();
    explicit ColorWidGetCopy(QWidget *parent = 0);
    ~ColorWidGetCopy();

protected :
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private:
    static ColorWidGetCopy *instance;
    QClipboard *cp;
    bool pressed;
    QTimer *timer;

    QGridLayout *gridLayout;
    QVBoxLayout *vertivalLayout;
    QLabel *labelColor;
    QLabel *label;
    QLabel *labelWeb;
    QLabel *labRgb;
    QLineEdit *txtWeb;
    QLabel *labelPoint;
    QLineEdit *txtPoint;

private Q_SLOTS:
    void showColorValue();
};


//QT_BEGIN_NAMESPACE
//namespace Ui { class ColorWidGetCopy; }
//QT_END_NAMESPACE

//class ColorWidGetCopy : public QWidget
//{
//    Q_OBJECT

//public:
//    ColorWidGetCopy(QWidget *parent = nullptr);
//    ~ColorWidGetCopy();

//private:
//    Ui::ColorWidGetCopy *ui;
//};
#endif // COLORWIDGETCOPY_H
