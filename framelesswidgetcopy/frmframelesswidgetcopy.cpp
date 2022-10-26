#pragma execution_characterset("utf-8")
#include "frmframelesswidgetcopy.h"
#include "ui_frmframelesswidgetcopy.h"
#include "qpushbutton.h"
#include "qcheckbox.h"
#include "qdebug.h"
#include "framelesswidgetcopy2.h"

#ifdef Q_CC_MSVC
#endif

frmFramelessWidgetcopy::frmFramelessWidgetcopy(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::frmFramelessWidgetcopy)
{
    ui->setupUi(this);
    this->initForm();
}

frmFramelessWidgetcopy::~frmFramelessWidgetcopy()
{
    delete ui;
}

void frmFramelessWidgetcopy::initForm(){

}

































