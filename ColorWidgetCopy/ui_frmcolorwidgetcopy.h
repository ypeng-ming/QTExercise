/********************************************************************************
** Form generated from reading UI file 'frmcolorwidgetcopy.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCOLORWIDGETCOPY_H
#define UI_FRMCOLORWIDGETCOPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmColorWidgetCopy
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *frmColorWidgetCopy)
    {
        if (frmColorWidgetCopy->objectName().isEmpty())
            frmColorWidgetCopy->setObjectName("frmColorWidgetCopy");
        frmColorWidgetCopy->resize(800, 600);
        pushButton = new QPushButton(frmColorWidgetCopy);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 92, 29));

        retranslateUi(frmColorWidgetCopy);

        QMetaObject::connectSlotsByName(frmColorWidgetCopy);
    } // setupUi

    void retranslateUi(QWidget *frmColorWidgetCopy)
    {
        frmColorWidgetCopy->setWindowTitle(QCoreApplication::translate("frmColorWidgetCopy", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("frmColorWidgetCopy", "\345\274\271\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmColorWidgetCopy: public Ui_frmColorWidgetCopy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCOLORWIDGETCOPY_H
