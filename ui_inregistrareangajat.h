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
    QLineEdit *lineEdit_prenume;
    QLabel *label_prenume;
    QLineEdit *lineEdit_parola;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_nume;
    QLabel *label_nume;
    QLabel *label_parola;
    QLabel *label_email;
    QLabel *label;
    QPushButton *pushButton_inregistrare;
    QPushButton *pushButton_inregistrare_2;

    void setupUi(QDialog *InregistrareAngajat)
    {
        if (InregistrareAngajat->objectName().isEmpty())
            InregistrareAngajat->setObjectName(QString::fromUtf8("InregistrareAngajat"));
        InregistrareAngajat->resize(431, 550);
        InregistrareAngajat->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        lineEdit_prenume = new QLineEdit(InregistrareAngajat);
        lineEdit_prenume->setObjectName(QString::fromUtf8("lineEdit_prenume"));
        lineEdit_prenume->setGeometry(QRect(230, 280, 161, 26));
        lineEdit_prenume->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_prenume = new QLabel(InregistrareAngajat);
        label_prenume->setObjectName(QString::fromUtf8("label_prenume"));
        label_prenume->setGeometry(QRect(264, 240, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("New Roman"));
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        label_prenume->setFont(font);
        label_prenume->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_prenume->setAlignment(Qt::AlignCenter);
        lineEdit_parola = new QLineEdit(InregistrareAngajat);
        lineEdit_parola->setObjectName(QString::fromUtf8("lineEdit_parola"));
        lineEdit_parola->setGeometry(QRect(100, 170, 221, 26));
        lineEdit_parola->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit_email = new QLineEdit(InregistrareAngajat);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(100, 70, 221, 26));
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit_nume = new QLineEdit(InregistrareAngajat);
        lineEdit_nume->setObjectName(QString::fromUtf8("lineEdit_nume"));
        lineEdit_nume->setGeometry(QRect(20, 280, 161, 26));
        lineEdit_nume->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_nume = new QLabel(InregistrareAngajat);
        label_nume->setObjectName(QString::fromUtf8("label_nume"));
        label_nume->setGeometry(QRect(52, 240, 91, 31));
        label_nume->setFont(font);
        label_nume->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_nume->setAlignment(Qt::AlignCenter);
        label_parola = new QLabel(InregistrareAngajat);
        label_parola->setObjectName(QString::fromUtf8("label_parola"));
        label_parola->setGeometry(QRect(160, 130, 91, 31));
        label_parola->setFont(font);
        label_parola->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_parola->setAlignment(Qt::AlignCenter);
        label_email = new QLabel(InregistrareAngajat);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setGeometry(QRect(160, 30, 91, 31));
        label_email->setFont(font);
        label_email->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email->setAlignment(Qt::AlignCenter);
        label = new QLabel(InregistrareAngajat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 450, 171, 61));
        label->setPixmap(QPixmap(QString::fromUtf8("../PROIECT/logo_mic.png")));
        pushButton_inregistrare = new QPushButton(InregistrareAngajat);
        pushButton_inregistrare->setObjectName(QString::fromUtf8("pushButton_inregistrare"));
        pushButton_inregistrare->setGeometry(QRect(150, 340, 120, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("New Roman"));
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_inregistrare->setFont(font1);
        pushButton_inregistrare->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_inregistrare->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 52, 111);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        pushButton_inregistrare_2 = new QPushButton(InregistrareAngajat);
        pushButton_inregistrare_2->setObjectName(QString::fromUtf8("pushButton_inregistrare_2"));
        pushButton_inregistrare_2->setGeometry(QRect(135, 390, 150, 40));
        pushButton_inregistrare_2->setFont(font1);
        pushButton_inregistrare_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_inregistrare_2->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 52, 111);\n"
"color: white;\n"
"font-size: 15px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));

        retranslateUi(InregistrareAngajat);

        QMetaObject::connectSlotsByName(InregistrareAngajat);
    } // setupUi

    void retranslateUi(QDialog *InregistrareAngajat)
    {
        InregistrareAngajat->setWindowTitle(QCoreApplication::translate("InregistrareAngajat", "Dialog", nullptr));
        label_prenume->setText(QCoreApplication::translate("InregistrareAngajat", "Prenume", nullptr));
        label_nume->setText(QCoreApplication::translate("InregistrareAngajat", "Nume", nullptr));
        label_parola->setText(QCoreApplication::translate("InregistrareAngajat", "Parol\304\203", nullptr));
        label_email->setText(QCoreApplication::translate("InregistrareAngajat", "Email", nullptr));
        label->setText(QString());
        pushButton_inregistrare->setText(QCoreApplication::translate("InregistrareAngajat", "\303\216nregistrare", nullptr));
        pushButton_inregistrare_2->setText(QCoreApplication::translate("InregistrareAngajat", "Ave\310\233i deja cont?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InregistrareAngajat: public Ui_InregistrareAngajat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INREGISTRAREANGAJAT_H
