#include "framelesswidgetcopy.h"
#include "./ui_framelesswidgetcopy.h"

framelesswidgetcopy::framelesswidgetcopy(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::framelesswidgetcopy)
{
    ui->setupUi(this);
}

framelesswidgetcopy::~framelesswidgetcopy()
{
    delete ui;
}

