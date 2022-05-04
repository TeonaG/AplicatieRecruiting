/********************************************************************************
** Form generated from reading UI file 'profilangajat.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILANGAJAT_H
#define UI_PROFILANGAJAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_profilAngajat
{
public:
    QLabel *label_welcome;
    QPushButton *pushButton_cv;
    QPushButton *pushButton_oferte;
    QLabel *label_3;
    QLabel *label_nume;

    void setupUi(QDialog *profilAngajat)
    {
        if (profilAngajat->objectName().isEmpty())
            profilAngajat->setObjectName(QString::fromUtf8("profilAngajat"));
        profilAngajat->resize(989, 655);
        profilAngajat->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        label_welcome = new QLabel(profilAngajat);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setGeometry(QRect(20, 10, 951, 41));
        QFont font;
        font.setBold(true);
        label_welcome->setFont(font);
        label_welcome->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"font-size: 25px;"));
        pushButton_cv = new QPushButton(profilAngajat);
        pushButton_cv->setObjectName(QString::fromUtf8("pushButton_cv"));
        pushButton_cv->setGeometry(QRect(10, 70, 175, 55));
        QFont font1;
        font1.setFamily(QString::fromUtf8("New Roman"));
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_cv->setFont(font1);
        pushButton_cv->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cv->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        pushButton_oferte = new QPushButton(profilAngajat);
        pushButton_oferte->setObjectName(QString::fromUtf8("pushButton_oferte"));
        pushButton_oferte->setGeometry(QRect(210, 70, 245, 55));
        pushButton_oferte->setFont(font1);
        pushButton_oferte->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_oferte->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        label_3 = new QLabel(profilAngajat);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 150, 161, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"font-size: 25px;"));
        label_nume = new QLabel(profilAngajat);
        label_nume->setObjectName(QString::fromUtf8("label_nume"));
        label_nume->setGeometry(QRect(20, 200, 951, 41));
        label_nume->setFont(font);
        label_nume->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"font-size: 25px;"));

        retranslateUi(profilAngajat);

        QMetaObject::connectSlotsByName(profilAngajat);
    } // setupUi

    void retranslateUi(QDialog *profilAngajat)
    {
        profilAngajat->setWindowTitle(QCoreApplication::translate("profilAngajat", "Dialog", nullptr));
        label_welcome->setText(QCoreApplication::translate("profilAngajat", "Bine ai venit, ", nullptr));
        pushButton_cv->setText(QCoreApplication::translate("profilAngajat", "CV-ul meu", nullptr));
        pushButton_oferte->setText(QCoreApplication::translate("profilAngajat", "Caut\304\203 oferte de munc\304\203", nullptr));
        label_3->setText(QCoreApplication::translate("profilAngajat", "Profilul meu", nullptr));
        label_nume->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class profilAngajat: public Ui_profilAngajat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILANGAJAT_H
