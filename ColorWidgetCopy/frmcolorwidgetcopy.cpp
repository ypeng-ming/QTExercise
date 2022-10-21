#include "frmcolorwidgetcopy.h"
#include "colorwidgetcopy.h"
//#include "ui_frmcolorwidgetcopy.h"
#include "./ui_frmcolorwidgetcopy.h"

frmColorWidgetCopy::frmColorWidgetCopy(QWidget *parent) : QWidget(parent), ui(new Ui::frmColorWidgetCopy){
    ui->setupUi(this);
}

frmColorWidgetCopy::~frmColorWidgetCopy(){
    delete ui;
}

void frmColorWidgetCopy::on_pushButton_clicked(){
    ColorWidGetCopy::Instance()->show();
}
