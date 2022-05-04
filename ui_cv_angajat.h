/********************************************************************************
** Form generated from reading UI file 'cv_angajat.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CV_ANGAJAT_H
#define UI_CV_ANGAJAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CV_Angajat
{
public:
    QLabel *label_email_16;
    QLabel *label_email_9;
    QLineEdit *lineEdit_judet;
    QLineEdit *lineEdit_loc_studii;
    QLabel *label_email_17;
    QLineEdit *lineEdit_loc;
    QLineEdit *lineEdit_prenume;
    QLineEdit *lineEdit_adresa;
    QLineEdit *lineEdit_email;
    QLabel *label_email_13;
    QLineEdit *lineEdit_perioada_inceput_experienta;
    QLabel *label_email_6;
    QLabel *label_email_3;
    QLineEdit *lineEdit_institutie;
    QLabel *label_email_5;
    QLineEdit *lineEdit_oras;
    QLineEdit *lineEdit_perioada_inceput_experienta_2;
    QPushButton *pushButton_modificare;
    QLineEdit *lineEdit_studii;
    QLabel *label_email_14;
    QLabel *label_email_15;
    QLabel *label_email_19;
    QLabel *label_email;
    QLabel *label_email_12;
    QLineEdit *lineEdit_nume;
    QLineEdit *lineEdit_angajator;
    QLabel *label_email_20;
    QLineEdit *lineEdit_perioada_sfarsit_studii;
    QLabel *label_email_11;
    QLabel *label_email_18;
    QLabel *label_email_2;
    QLabel *label_email_4;
    QLineEdit *lineEdit_nr_tel;
    QLineEdit *lineEdit_perioada_inceput_studii;
    QLabel *label;
    QLineEdit *lineEdit_functia_ocupata;
    QLabel *label_oras;
    QLabel *label_email_10;
    QLabel *label_email_7;
    QLineEdit *lineEdit_data_nastere;
    QLabel *label_email_8;
    QPushButton *pushButton_salvare;

    void setupUi(QDialog *CV_Angajat)
    {
        if (CV_Angajat->objectName().isEmpty())
            CV_Angajat->setObjectName(QString::fromUtf8("CV_Angajat"));
        CV_Angajat->resize(1490, 685);
        CV_Angajat->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        label_email_16 = new QLabel(CV_Angajat);
        label_email_16->setObjectName(QString::fromUtf8("label_email_16"));
        label_email_16->setGeometry(QRect(1020, 90, 141, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("New Roman"));
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        label_email_16->setFont(font);
        label_email_16->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_16->setAlignment(Qt::AlignCenter);
        label_email_9 = new QLabel(CV_Angajat);
        label_email_9->setObjectName(QString::fromUtf8("label_email_9"));
        label_email_9->setGeometry(QRect(520, 40, 201, 31));
        label_email_9->setFont(font);
        label_email_9->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_9->setAlignment(Qt::AlignCenter);
        lineEdit_judet = new QLineEdit(CV_Angajat);
        lineEdit_judet->setObjectName(QString::fromUtf8("lineEdit_judet"));
        lineEdit_judet->setGeometry(QRect(20, 400, 200, 28));
        lineEdit_judet->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit_loc_studii = new QLineEdit(CV_Angajat);
        lineEdit_loc_studii->setObjectName(QString::fromUtf8("lineEdit_loc_studii"));
        lineEdit_loc_studii->setGeometry(QRect(790, 130, 200, 28));
        lineEdit_loc_studii->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_email_17 = new QLabel(CV_Angajat);
        label_email_17->setObjectName(QString::fromUtf8("label_email_17"));
        label_email_17->setGeometry(QRect(1240, 90, 141, 31));
        label_email_17->setFont(font);
        label_email_17->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_17->setAlignment(Qt::AlignCenter);
        lineEdit_loc = new QLineEdit(CV_Angajat);
        lineEdit_loc->setObjectName(QString::fromUtf8("lineEdit_loc"));
        lineEdit_loc->setGeometry(QRect(1270, 130, 200, 28));
        lineEdit_loc->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit_prenume = new QLineEdit(CV_Angajat);
        lineEdit_prenume->setObjectName(QString::fromUtf8("lineEdit_prenume"));
        lineEdit_prenume->setGeometry(QRect(280, 120, 200, 28));
        lineEdit_prenume->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit_adresa = new QLineEdit(CV_Angajat);
        lineEdit_adresa->setObjectName(QString::fromUtf8("lineEdit_adresa"));
        lineEdit_adresa->setGeometry(QRect(20, 320, 461, 28));
        lineEdit_adresa->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit_email = new QLineEdit(CV_Angajat);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(280, 210, 200, 28));
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_email_13 = new QLabel(CV_Angajat);
        label_email_13->setObjectName(QString::fromUtf8("label_email_13"));
        label_email_13->setGeometry(QRect(510, 280, 141, 31));
        label_email_13->setFont(font);
        label_email_13->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_13->setAlignment(Qt::AlignCenter);
        lineEdit_perioada_inceput_experienta = new QLineEdit(CV_Angajat);
        lineEdit_perioada_inceput_experienta->setObjectName(QString::fromUtf8("lineEdit_perioada_inceput_experienta"));
        lineEdit_perioada_inceput_experienta->setGeometry(QRect(1020, 320, 200, 28));
        lineEdit_perioada_inceput_experienta->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_email_6 = new QLabel(CV_Angajat);
        label_email_6->setObjectName(QString::fromUtf8("label_email_6"));
        label_email_6->setGeometry(QRect(0, 270, 110, 31));
        label_email_6->setFont(font);
        label_email_6->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_6->setAlignment(Qt::AlignCenter);
        label_email_3 = new QLabel(CV_Angajat);
        label_email_3->setObjectName(QString::fromUtf8("label_email_3"));
        label_email_3->setGeometry(QRect(-10, 80, 110, 31));
        label_email_3->setFont(font);
        label_email_3->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_3->setAlignment(Qt::AlignCenter);
        lineEdit_institutie = new QLineEdit(CV_Angajat);
        lineEdit_institutie->setObjectName(QString::fromUtf8("lineEdit_institutie"));
        lineEdit_institutie->setGeometry(QRect(520, 230, 471, 28));
        lineEdit_institutie->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_email_5 = new QLabel(CV_Angajat);
        label_email_5->setObjectName(QString::fromUtf8("label_email_5"));
        label_email_5->setGeometry(QRect(280, 170, 151, 31));
        label_email_5->setFont(font);
        label_email_5->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_5->setAlignment(Qt::AlignCenter);
        lineEdit_oras = new QLineEdit(CV_Angajat);
        lineEdit_oras->setObjectName(QString::fromUtf8("lineEdit_oras"));
        lineEdit_oras->setGeometry(QRect(280, 400, 200, 28));
        lineEdit_oras->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit_perioada_inceput_experienta_2 = new QLineEdit(CV_Angajat);
        lineEdit_perioada_inceput_experienta_2->setObjectName(QString::fromUtf8("lineEdit_perioada_inceput_experienta_2"));
        lineEdit_perioada_inceput_experienta_2->setGeometry(QRect(1270, 320, 200, 28));
        lineEdit_perioada_inceput_experienta_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        pushButton_modificare = new QPushButton(CV_Angajat);
        pushButton_modificare->setObjectName(QString::fromUtf8("pushButton_modificare"));
        pushButton_modificare->setGeometry(QRect(720, 550, 120, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("New Roman"));
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_modificare->setFont(font1);
        pushButton_modificare->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_modificare->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 52, 111);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        lineEdit_studii = new QLineEdit(CV_Angajat);
        lineEdit_studii->setObjectName(QString::fromUtf8("lineEdit_studii"));
        lineEdit_studii->setGeometry(QRect(520, 130, 200, 28));
        lineEdit_studii->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_email_14 = new QLabel(CV_Angajat);
        label_email_14->setObjectName(QString::fromUtf8("label_email_14"));
        label_email_14->setGeometry(QRect(810, 280, 141, 31));
        label_email_14->setFont(font);
        label_email_14->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_14->setAlignment(Qt::AlignCenter);
        label_email_15 = new QLabel(CV_Angajat);
        label_email_15->setObjectName(QString::fromUtf8("label_email_15"));
        label_email_15->setGeometry(QRect(1020, 40, 201, 31));
        label_email_15->setFont(font);
        label_email_15->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_15->setAlignment(Qt::AlignCenter);
        label_email_19 = new QLabel(CV_Angajat);
        label_email_19->setObjectName(QString::fromUtf8("label_email_19"));
        label_email_19->setGeometry(QRect(1270, 280, 141, 31));
        label_email_19->setFont(font);
        label_email_19->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_19->setAlignment(Qt::AlignCenter);
        label_email = new QLabel(CV_Angajat);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setGeometry(QRect(20, 30, 110, 31));
        label_email->setFont(font);
        label_email->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email->setAlignment(Qt::AlignCenter);
        label_email_12 = new QLabel(CV_Angajat);
        label_email_12->setObjectName(QString::fromUtf8("label_email_12"));
        label_email_12->setGeometry(QRect(520, 190, 141, 31));
        label_email_12->setFont(font);
        label_email_12->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_12->setAlignment(Qt::AlignCenter);
        lineEdit_nume = new QLineEdit(CV_Angajat);
        lineEdit_nume->setObjectName(QString::fromUtf8("lineEdit_nume"));
        lineEdit_nume->setGeometry(QRect(20, 120, 200, 28));
        lineEdit_nume->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit_angajator = new QLineEdit(CV_Angajat);
        lineEdit_angajator->setObjectName(QString::fromUtf8("lineEdit_angajator"));
        lineEdit_angajator->setGeometry(QRect(1020, 230, 201, 28));
        lineEdit_angajator->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_email_20 = new QLabel(CV_Angajat);
        label_email_20->setObjectName(QString::fromUtf8("label_email_20"));
        label_email_20->setGeometry(QRect(1020, 280, 141, 31));
        label_email_20->setFont(font);
        label_email_20->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_20->setAlignment(Qt::AlignCenter);
        lineEdit_perioada_sfarsit_studii = new QLineEdit(CV_Angajat);
        lineEdit_perioada_sfarsit_studii->setObjectName(QString::fromUtf8("lineEdit_perioada_sfarsit_studii"));
        lineEdit_perioada_sfarsit_studii->setGeometry(QRect(790, 320, 200, 28));
        lineEdit_perioada_sfarsit_studii->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_email_11 = new QLabel(CV_Angajat);
        label_email_11->setObjectName(QString::fromUtf8("label_email_11"));
        label_email_11->setGeometry(QRect(760, 90, 141, 31));
        label_email_11->setFont(font);
        label_email_11->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_11->setAlignment(Qt::AlignCenter);
        label_email_18 = new QLabel(CV_Angajat);
        label_email_18->setObjectName(QString::fromUtf8("label_email_18"));
        label_email_18->setGeometry(QRect(1000, 190, 141, 31));
        label_email_18->setFont(font);
        label_email_18->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_18->setAlignment(Qt::AlignCenter);
        label_email_2 = new QLabel(CV_Angajat);
        label_email_2->setObjectName(QString::fromUtf8("label_email_2"));
        label_email_2->setGeometry(QRect(270, 80, 110, 31));
        label_email_2->setFont(font);
        label_email_2->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_2->setAlignment(Qt::AlignCenter);
        label_email_4 = new QLabel(CV_Angajat);
        label_email_4->setObjectName(QString::fromUtf8("label_email_4"));
        label_email_4->setGeometry(QRect(10, 170, 171, 31));
        label_email_4->setFont(font);
        label_email_4->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_4->setAlignment(Qt::AlignCenter);
        lineEdit_nr_tel = new QLineEdit(CV_Angajat);
        lineEdit_nr_tel->setObjectName(QString::fromUtf8("lineEdit_nr_tel"));
        lineEdit_nr_tel->setGeometry(QRect(20, 210, 200, 28));
        lineEdit_nr_tel->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lineEdit_perioada_inceput_studii = new QLineEdit(CV_Angajat);
        lineEdit_perioada_inceput_studii->setObjectName(QString::fromUtf8("lineEdit_perioada_inceput_studii"));
        lineEdit_perioada_inceput_studii->setGeometry(QRect(520, 320, 200, 28));
        lineEdit_perioada_inceput_studii->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label = new QLabel(CV_Angajat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(710, 600, 141, 71));
        label->setPixmap(QPixmap(QString::fromUtf8("../PROIECT/logo_mic.png")));
        lineEdit_functia_ocupata = new QLineEdit(CV_Angajat);
        lineEdit_functia_ocupata->setObjectName(QString::fromUtf8("lineEdit_functia_ocupata"));
        lineEdit_functia_ocupata->setGeometry(QRect(1020, 130, 200, 28));
        lineEdit_functia_ocupata->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_oras = new QLabel(CV_Angajat);
        label_oras->setObjectName(QString::fromUtf8("label_oras"));
        label_oras->setGeometry(QRect(270, 360, 151, 31));
        label_oras->setFont(font);
        label_oras->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_oras->setAlignment(Qt::AlignCenter);
        label_email_10 = new QLabel(CV_Angajat);
        label_email_10->setObjectName(QString::fromUtf8("label_email_10"));
        label_email_10->setGeometry(QRect(480, 90, 141, 31));
        label_email_10->setFont(font);
        label_email_10->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_10->setAlignment(Qt::AlignCenter);
        label_email_7 = new QLabel(CV_Angajat);
        label_email_7->setObjectName(QString::fromUtf8("label_email_7"));
        label_email_7->setGeometry(QRect(-30, 360, 141, 31));
        label_email_7->setFont(font);
        label_email_7->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_7->setAlignment(Qt::AlignCenter);
        lineEdit_data_nastere = new QLineEdit(CV_Angajat);
        lineEdit_data_nastere->setObjectName(QString::fromUtf8("lineEdit_data_nastere"));
        lineEdit_data_nastere->setGeometry(QRect(20, 490, 200, 28));
        lineEdit_data_nastere->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label_email_8 = new QLabel(CV_Angajat);
        label_email_8->setObjectName(QString::fromUtf8("label_email_8"));
        label_email_8->setGeometry(QRect(0, 450, 141, 31));
        label_email_8->setFont(font);
        label_email_8->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"border-radius: 10px;\n"
"font: Times New Roman;\n"
"font-size: 18px;"));
        label_email_8->setAlignment(Qt::AlignCenter);
        pushButton_salvare = new QPushButton(CV_Angajat);
        pushButton_salvare->setObjectName(QString::fromUtf8("pushButton_salvare"));
        pushButton_salvare->setGeometry(QRect(720, 550, 120, 40));
        pushButton_salvare->setFont(font1);
        pushButton_salvare->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_salvare->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 52, 111);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));

        retranslateUi(CV_Angajat);

        QMetaObject::connectSlotsByName(CV_Angajat);
    } // setupUi

    void retranslateUi(QDialog *CV_Angajat)
    {
        CV_Angajat->setWindowTitle(QCoreApplication::translate("CV_Angajat", "Dialog", nullptr));
        label_email_16->setText(QCoreApplication::translate("CV_Angajat", "Func\310\233ia ocupat\304\203:", nullptr));
        label_email_9->setText(QCoreApplication::translate("CV_Angajat", "Educa\310\233ie \310\231i calific\304\203ri", nullptr));
        label_email_17->setText(QCoreApplication::translate("CV_Angajat", "Domeniu:", nullptr));
        label_email_13->setText(QCoreApplication::translate("CV_Angajat", "Perioada: de la", nullptr));
        label_email_6->setText(QCoreApplication::translate("CV_Angajat", "Adres\304\203:", nullptr));
        label_email_3->setText(QCoreApplication::translate("CV_Angajat", "Nume:", nullptr));
        label_email_5->setText(QCoreApplication::translate("CV_Angajat", "Adres\304\203 de email:", nullptr));
        pushButton_modificare->setText(QCoreApplication::translate("CV_Angajat", "Modific\304\203", nullptr));
        label_email_14->setText(QCoreApplication::translate("CV_Angajat", "Perioada: p\303\242n\304\203 la", nullptr));
        label_email_15->setText(QCoreApplication::translate("CV_Angajat", "Experien\310\233\304\203 profesional\304\203", nullptr));
        label_email_19->setText(QCoreApplication::translate("CV_Angajat", "Perioada: p\303\242n\304\203 la", nullptr));
        label_email->setText(QCoreApplication::translate("CV_Angajat", "Personal", nullptr));
        label_email_12->setText(QCoreApplication::translate("CV_Angajat", "Institu\310\233ie/Centru:", nullptr));
        label_email_20->setText(QCoreApplication::translate("CV_Angajat", "Perioada: de la", nullptr));
        label_email_11->setText(QCoreApplication::translate("CV_Angajat", "Locul:", nullptr));
        label_email_18->setText(QCoreApplication::translate("CV_Angajat", "Angajator:", nullptr));
        label_email_2->setText(QCoreApplication::translate("CV_Angajat", "Prenume:", nullptr));
        label_email_4->setText(QCoreApplication::translate("CV_Angajat", "Num\304\203r de telefon:", nullptr));
        label->setText(QString());
        label_oras->setText(QCoreApplication::translate("CV_Angajat", "Ora\310\231/Localitate", nullptr));
        label_email_10->setText(QCoreApplication::translate("CV_Angajat", "Studii:", nullptr));
        label_email_7->setText(QCoreApplication::translate("CV_Angajat", "Jude\310\233", nullptr));
        lineEdit_data_nastere->setText(QString());
        label_email_8->setText(QCoreApplication::translate("CV_Angajat", "Data na\310\231terii", nullptr));
        pushButton_salvare->setText(QCoreApplication::translate("CV_Angajat", "Salvare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CV_Angajat: public Ui_CV_Angajat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CV_ANGAJAT_H
