/********************************************************************************
** Form generated from reading UI file 'frmframelesswidgetcopy.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMFRAMELESSWIDGETCOPY_H
#define UI_FRMFRAMELESSWIDGETCOPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmFramelessWidgetcopy
{
public:
    QWidget *widget;
    QPushButton *btnDialog;
    QPushButton *btnWidget;
    QPushButton *btnMainWindow;
    QPushButton *pushButton;

    void setupUi(QWidget *frmFramelessWidgetcopy)
    {
        if (frmFramelessWidgetcopy->objectName().isEmpty())
            frmFramelessWidgetcopy->setObjectName("frmFramelessWidgetcopy");
        frmFramelessWidgetcopy->resize(800, 600);
        widget = new QWidget(frmFramelessWidgetcopy);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 491, 30));
        btnDialog = new QPushButton(widget);
        btnDialog->setObjectName("btnDialog");
        btnDialog->setGeometry(QRect(180, 0, 92, 29));
        btnWidget = new QPushButton(widget);
        btnWidget->setObjectName("btnWidget");
        btnWidget->setGeometry(QRect(280, 0, 92, 29));
        btnMainWindow = new QPushButton(widget);
        btnMainWindow->setObjectName("btnMainWindow");
        btnMainWindow->setGeometry(QRect(390, 0, 92, 29));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 0, 92, 29));

        retranslateUi(frmFramelessWidgetcopy);

        QMetaObject::connectSlotsByName(frmFramelessWidgetcopy);
    } // setupUi

    void retranslateUi(QWidget *frmFramelessWidgetcopy)
    {
        frmFramelessWidgetcopy->setWindowTitle(QCoreApplication::translate("frmFramelessWidgetcopy", "form", nullptr));
        btnDialog->setText(QCoreApplication::translate("frmFramelessWidgetcopy", "Dialog", nullptr));
        btnWidget->setText(QCoreApplication::translate("frmFramelessWidgetcopy", "Widget", nullptr));
        btnMainWindow->setText(QCoreApplication::translate("frmFramelessWidgetcopy", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("frmFramelessWidgetcopy", "\345\274\271\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmFramelessWidgetcopy: public Ui_frmFramelessWidgetcopy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMFRAMELESSWIDGETCOPY_H
