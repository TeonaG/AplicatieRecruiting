/********************************************************************************
** Form generated from reading UI file 'inregistrareangajator.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INREGISTRAREANGAJATOR_H
#define UI_INREGISTRAREANGAJATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InregistrareAngajator
{
public:
    QLineEdit *lineEdit_parola;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QPushButton *pushButton_inregistrare;
    QLabel *label;
    QLabel *label_companie;
    QLabel *label_parola;
    QLineEdit *lineEdit_companie;
    QPushButton *pushButton_inregistrare_2;

    void setupUi(QDialog *InregistrareAngajator)
    {
        if (InregistrareAngajator->objectName().isEmpty())
            InregistrareAngajator->setObjectName(QString::fromUtf8("InregistrareAngajator"));
        InregistrareAngajator->resize(438, 513);
        InregistrareAngajator->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        lineEdit_parola = new QLineEdit(InregistrareAngajator);
        lineEdit_parola->setObjectName(QString::fromUtf8("lineEdit_parola"));
        lineEdit_parola->setGeometry(QRect(110, 160, 221, 26));
        lineEdit_parola->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_email = new QLabel(InregistrareAngajator);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setGeometry(QRect(170, 20, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("New Roman"));
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        label_email->setFont(font);
        label_email->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email->setAlignment(Qt::AlignCenter);
        lineEdit_email = new QLineEdit(InregistrareAngajator);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(110, 60, 221, 26));
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        pushButton_inregistrare = new QPushButton(InregistrareAngajator);
        pushButton_inregistrare->setObjectName(QString::fromUtf8("pushButton_inregistrare"));
        pushButton_inregistrare->setGeometry(QRect(160, 320, 120, 40));
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
        label = new QLabel(InregistrareAngajator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 430, 171, 61));
        label->setPixmap(QPixmap(QString::fromUtf8("../PROIECT/logo_mic.png")));
        label_companie = new QLabel(InregistrareAngajator);
        label_companie->setObjectName(QString::fromUtf8("label_companie"));
        label_companie->setGeometry(QRect(140, 220, 151, 31));
        label_companie->setFont(font);
        label_companie->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_companie->setAlignment(Qt::AlignCenter);
        label_parola = new QLabel(InregistrareAngajator);
        label_parola->setObjectName(QString::fromUtf8("label_parola"));
        label_parola->setGeometry(QRect(170, 120, 91, 31));
        label_parola->setFont(font);
        label_parola->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_parola->setAlignment(Qt::AlignCenter);
        lineEdit_companie = new QLineEdit(InregistrareAngajator);
        lineEdit_companie->setObjectName(QString::fromUtf8("lineEdit_companie"));
        lineEdit_companie->setGeometry(QRect(110, 260, 221, 26));
        lineEdit_companie->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        pushButton_inregistrare_2 = new QPushButton(InregistrareAngajator);
        pushButton_inregistrare_2->setObjectName(QString::fromUtf8("pushButton_inregistrare_2"));
        pushButton_inregistrare_2->setGeometry(QRect(145, 370, 150, 40));
        pushButton_inregistrare_2->setFont(font1);
        pushButton_inregistrare_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_inregistrare_2->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 52, 111);\n"
"color: white;\n"
"font-size: 15px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));

        retranslateUi(InregistrareAngajator);

        QMetaObject::connectSlotsByName(InregistrareAngajator);
    } // setupUi

    void retranslateUi(QDialog *InregistrareAngajator)
    {
        InregistrareAngajator->setWindowTitle(QCoreApplication::translate("InregistrareAngajator", "Dialog", nullptr));
        label_email->setText(QCoreApplication::translate("InregistrareAngajator", "Email", nullptr));
        pushButton_inregistrare->setText(QCoreApplication::translate("InregistrareAngajator", "\303\216nregistrare", nullptr));
        label->setText(QString());
        label_companie->setText(QCoreApplication::translate("InregistrareAngajator", "Nume Companie", nullptr));
        label_parola->setText(QCoreApplication::translate("InregistrareAngajator", "Parol\304\203", nullptr));
        pushButton_inregistrare_2->setText(QCoreApplication::translate("InregistrareAngajator", "Ave\310\233i deja cont?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InregistrareAngajator: public Ui_InregistrareAngajator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INREGISTRAREANGAJATOR_H
