#ifndef FRAMELESSWIDGETCOPY_H
#define FRAMELESSWIDGETCOPY_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class framelesswidgetcopy; }
QT_END_NAMESPACE

class framelesswidgetcopy : public QWidget
{
    Q_OBJECT

public:
    framelesswidgetcopy(QWidget *parent = nullptr);
    ~framelesswidgetcopy();

private:
    Ui::framelesswidgetcopy *ui;
};
#endif // FRAMELESSWIDGETCOPY_H
