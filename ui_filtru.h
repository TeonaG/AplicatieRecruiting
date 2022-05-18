/********************************************************************************
** Form generated from reading UI file 'filtru.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTRU_H
#define UI_FILTRU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_filtru
{
public:
    QLabel *label_5;
    QComboBox *comboBox_angajator;
    QComboBox *comboBox_judet;
    QPushButton *pushButton_cautare;
    QComboBox *comboBox_oras;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_domeniu;
    QLabel *label_3;
    QLabel *label_email;
    QLabel *label_7;
    QComboBox *comboBox_functie;
    QComboBox *comboBox_program_lucru;
    QLabel *label_6;
    QLabel *label_4;

    void setupUi(QDialog *filtru)
    {
        if (filtru->objectName().isEmpty())
            filtru->setObjectName(QString::fromUtf8("filtru"));
        filtru->resize(1141, 692);
        filtru->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        label_5 = new QLabel(filtru);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(450, 340, 200, 35));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"color: white;\n"
"font: Times New Roman;\n"
"font-size: 20px;"));
        label_5->setAlignment(Qt::AlignCenter);
        comboBox_angajator = new QComboBox(filtru);
        comboBox_angajator->setObjectName(QString::fromUtf8("comboBox_angajator"));
        comboBox_angajator->setGeometry(QRect(820, 190, 201, 21));
        comboBox_judet = new QComboBox(filtru);
        comboBox_judet->setObjectName(QString::fromUtf8("comboBox_judet"));
        comboBox_judet->setGeometry(QRect(90, 390, 201, 21));
        pushButton_cautare = new QPushButton(filtru);
        pushButton_cautare->setObjectName(QString::fromUtf8("pushButton_cautare"));
        pushButton_cautare->setGeometry(QRect(410, 470, 285, 65));
        QFont font;
        font.setFamily(QString::fromUtf8("New Roman"));
        font.setBold(false);
        font.setItalic(false);
        pushButton_cautare->setFont(font);
        pushButton_cautare->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cautare->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 52, 111);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        comboBox_oras = new QComboBox(filtru);
        comboBox_oras->setObjectName(QString::fromUtf8("comboBox_oras"));
        comboBox_oras->setGeometry(QRect(450, 390, 201, 21));
        label = new QLabel(filtru);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 140, 200, 35));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"color: white;\n"
"font: Times New Roman;\n"
"font-size: 20px;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(filtru);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 140, 200, 35));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"color: white;\n"
"font: Times New Roman;\n"
"font-size: 20px;"));
        label_2->setAlignment(Qt::AlignCenter);
        comboBox_domeniu = new QComboBox(filtru);
        comboBox_domeniu->setObjectName(QString::fromUtf8("comboBox_domeniu"));
        comboBox_domeniu->setGeometry(QRect(90, 190, 201, 21));
        comboBox_domeniu->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label_3 = new QLabel(filtru);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(820, 140, 200, 35));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"color: white;\n"
"font: Times New Roman;\n"
"font-size: 20px;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_email = new QLabel(filtru);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setGeometry(QRect(390, 20, 320, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("New Roman"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label_email->setFont(font1);
        label_email->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 25px;"));
        label_email->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(filtru);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(480, 570, 161, 101));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../PROIECT/logo_mic.png")));
        comboBox_functie = new QComboBox(filtru);
        comboBox_functie->setObjectName(QString::fromUtf8("comboBox_functie"));
        comboBox_functie->setGeometry(QRect(450, 190, 201, 21));
        comboBox_program_lucru = new QComboBox(filtru);
        comboBox_program_lucru->setObjectName(QString::fromUtf8("comboBox_program_lucru"));
        comboBox_program_lucru->setGeometry(QRect(820, 390, 201, 21));
        label_6 = new QLabel(filtru);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(820, 340, 200, 35));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"color: white;\n"
"font: Times New Roman;\n"
"font-size: 20px;"));
        label_6->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(filtru);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 340, 200, 35));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"color: white;\n"
"font: Times New Roman;\n"
"font-size: 20px;"));
        label_4->setAlignment(Qt::AlignCenter);

        retranslateUi(filtru);

        QMetaObject::connectSlotsByName(filtru);
    } // setupUi

    void retranslateUi(QDialog *filtru)
    {
        filtru->setWindowTitle(QCoreApplication::translate("filtru", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("filtru", "Ora\310\231", nullptr));
        pushButton_cautare->setText(QCoreApplication::translate("filtru", "C\304\203utare", nullptr));
        label->setText(QCoreApplication::translate("filtru", "Domeniu", nullptr));
        label_2->setText(QCoreApplication::translate("filtru", "Func\310\233ie", nullptr));
        label_3->setText(QCoreApplication::translate("filtru", "Angajator", nullptr));
        label_email->setText(QCoreApplication::translate("filtru", "Locuri de munc\304\203", nullptr));
        label_7->setText(QString());
        label_6->setText(QCoreApplication::translate("filtru", "Program de lucru", nullptr));
        label_4->setText(QCoreApplication::translate("filtru", "Jude\310\233", nullptr));
    } // retranslateUi

};

namespace Ui {
    class filtru: public Ui_filtru {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTRU_H
