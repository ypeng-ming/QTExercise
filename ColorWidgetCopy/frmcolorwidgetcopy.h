#ifndef FRMCOLORWIDGETCOPY_H
#define FRMCOLORWIDGETCOPY_H

#include <QWidget>
namespace Ui {
class frmColorWidgetCopy;
}

class frmColorWidgetCopy:public QWidget{
    Q_OBJECT

public :
    explicit frmColorWidgetCopy(QWidget *parent = 0);
    ~frmColorWidgetCopy();

private slots:
    void on_pushButton_clicked();

private:
    Ui::frmColorWidgetCopy *ui;
};

#endif//FRMCOLORWIDGETCOPY_H
