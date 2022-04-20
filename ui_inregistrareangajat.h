/********************************************************************************
** Form generated from reading UI file 'inregistrareangajat.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INREGISTRAREANGAJAT_H
#define UI_INREGISTRAREANGAJAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InregistrareAngajat
{
public:
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;

    void setupUi(QDialog *InregistrareAngajat)
    {
        if (InregistrareAngajat->objectName().isEmpty())
            InregistrareAngajat->setObjectName(QString::fromUtf8("InregistrareAngajat"));
        InregistrareAngajat->resize(418, 468);
        InregistrareAngajat->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        lineEdit_2 = new QLineEdit(InregistrareAngajat);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 280, 161, 26));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_2 = new QLabel(InregistrareAngajat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 240, 91, 31));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_4 = new QLineEdit(InregistrareAngajat);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 170, 221, 26));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit_3 = new QLineEdit(InregistrareAngajat);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 70, 221, 26));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit = new QLineEdit(InregistrareAngajat);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 280, 161, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        pushButton_5 = new QPushButton(InregistrareAngajat);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(150, 330, 120, 40));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 52, 111);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        label_3 = new QLabel(InregistrareAngajat);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 240, 91, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(InregistrareAngajat);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 130, 91, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(InregistrareAngajat);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 30, 91, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_5->setAlignment(Qt::AlignCenter);
        label = new QLabel(InregistrareAngajat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 390, 171, 61));
        label->setPixmap(QPixmap(QString::fromUtf8("../PROIECT/logo_mic.png")));

        retranslateUi(InregistrareAngajat);

        QMetaObject::connectSlotsByName(InregistrareAngajat);
    } // setupUi

    void retranslateUi(QDialog *InregistrareAngajat)
    {
        InregistrareAngajat->setWindowTitle(QCoreApplication::translate("InregistrareAngajat", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("InregistrareAngajat", "Prenume", nullptr));
        pushButton_5->setText(QCoreApplication::translate("InregistrareAngajat", "\303\216nregistrare", nullptr));
        label_3->setText(QCoreApplication::translate("InregistrareAngajat", "Nume", nullptr));
        label_4->setText(QCoreApplication::translate("InregistrareAngajat", "Parola", nullptr));
        label_5->setText(QCoreApplication::translate("InregistrareAngajat", "Email", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InregistrareAngajat: public Ui_InregistrareAngajat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INREGISTRAREANGAJAT_H
