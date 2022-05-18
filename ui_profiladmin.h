/********************************************************************************
** Form generated from reading UI file 'profiladmin.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILADMIN_H
#define UI_PROFILADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_profiladmin
{
public:
    QLabel *label_welcome;
    QLabel *label_3;
    QLabel *label_nume;

    void setupUi(QDialog *profiladmin)
    {
        if (profiladmin->objectName().isEmpty())
            profiladmin->setObjectName(QString::fromUtf8("profiladmin"));
        profiladmin->resize(979, 625);
        profiladmin->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        label_welcome = new QLabel(profiladmin);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setGeometry(QRect(10, 10, 951, 41));
        QFont font;
        font.setBold(true);
        label_welcome->setFont(font);
        label_welcome->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"font-size: 25px;"));
        label_3 = new QLabel(profiladmin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 130, 161, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"font-size: 25px;"));
        label_nume = new QLabel(profiladmin);
        label_nume->setObjectName(QString::fromUtf8("label_nume"));
        label_nume->setGeometry(QRect(10, 170, 861, 51));

        retranslateUi(profiladmin);

        QMetaObject::connectSlotsByName(profiladmin);
    } // setupUi

    void retranslateUi(QDialog *profiladmin)
    {
        profiladmin->setWindowTitle(QCoreApplication::translate("profiladmin", "Dialog", nullptr));
        label_welcome->setText(QCoreApplication::translate("profiladmin", "Bine ai venit, ", nullptr));
        label_3->setText(QCoreApplication::translate("profiladmin", "Profilul meu", nullptr));
        label_nume->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class profiladmin: public Ui_profiladmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILADMIN_H
