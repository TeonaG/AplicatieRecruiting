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
    QLabel *label_header;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLabel *label_nume;

    void setupUi(QDialog *profilAngajat)
    {
        if (profilAngajat->objectName().isEmpty())
            profilAngajat->setObjectName(QString::fromUtf8("profilAngajat"));
        profilAngajat->resize(989, 655);
        profilAngajat->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        label_header = new QLabel(profilAngajat);
        label_header->setObjectName(QString::fromUtf8("label_header"));
        label_header->setGeometry(QRect(20, 10, 951, 41));
        QFont font;
        font.setBold(true);
        label_header->setFont(font);
        label_header->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"font-size: 25px;"));
        pushButton_4 = new QPushButton(profilAngajat);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 70, 171, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("New Roman"));
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        pushButton_5 = new QPushButton(profilAngajat);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(210, 70, 241, 50));
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
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
        label_header->setText(QCoreApplication::translate("profilAngajat", "Bine ai venit, ", nullptr));
        pushButton_4->setText(QCoreApplication::translate("profilAngajat", "CV-ul meu", nullptr));
        pushButton_5->setText(QCoreApplication::translate("profilAngajat", "Caut\304\203 oferte de munc\304\203", nullptr));
        label_3->setText(QCoreApplication::translate("profilAngajat", "Profilul meu", nullptr));
        label_nume->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class profilAngajat: public Ui_profilAngajat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILANGAJAT_H
