#ifndef FRAMELESSWIDGETCOPY_H
#define FRAMELESSWIDGETCOPY_H

#include <QWidget>
class FramelessWidgetcopy2;

QT_BEGIN_NAMESPACE
namespace Ui { class frmFramelessWidgetcopy; }
QT_END_NAMESPACE

class frmFramelessWidgetcopy : public QWidget
{
    Q_OBJECT

public:
    explicit frmFramelessWidgetcopy(QWidget *parent = nullptr);
    ~frmFramelessWidgetcopy();

private:
    Ui::frmFramelessWidgetcopy *ui;
    QWidget *widget;
    FramelessWidgetcopy2 *framelesscopy;

private slots:
    void initForm();
    void initWidget(QWidget *w);
    void on_pushButton_clicked();
    void stateChanged1(int arg1);
    void stateChanged2(int arg1);
    void buttonClicked();
};
#endif // FRAMELESSWIDGETCOPY_H
