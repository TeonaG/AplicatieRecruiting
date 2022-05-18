/********************************************************************************
** Form generated from reading UI file 'profilangajator.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILANGAJATOR_H
#define UI_PROFILANGAJATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_profilangajator
{
public:
    QLabel *label_welcome;
    QPushButton *pushButton_oferte;
    QPushButton *pushButton_cv;
    QPushButton *pushButton_recenzii;
    QLabel *label_3;
    QPushButton *pushButton_adauga_job;

    void setupUi(QDialog *profilangajator)
    {
        if (profilangajator->objectName().isEmpty())
            profilangajator->setObjectName(QString::fromUtf8("profilangajator"));
        profilangajator->resize(967, 692);
        profilangajator->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        label_welcome = new QLabel(profilangajator);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setGeometry(QRect(20, 10, 951, 41));
        QFont font;
        font.setBold(true);
        label_welcome->setFont(font);
        label_welcome->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"font-size: 25px;"));
        pushButton_oferte = new QPushButton(profilangajator);
        pushButton_oferte->setObjectName(QString::fromUtf8("pushButton_oferte"));
        pushButton_oferte->setGeometry(QRect(20, 60, 181, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("New Roman"));
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_oferte->setFont(font1);
        pushButton_oferte->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_oferte->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        pushButton_cv = new QPushButton(profilangajator);
        pushButton_cv->setObjectName(QString::fromUtf8("pushButton_cv"));
        pushButton_cv->setGeometry(QRect(260, 60, 181, 50));
        pushButton_cv->setFont(font1);
        pushButton_cv->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cv->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        pushButton_recenzii = new QPushButton(profilangajator);
        pushButton_recenzii->setObjectName(QString::fromUtf8("pushButton_recenzii"));
        pushButton_recenzii->setGeometry(QRect(510, 60, 181, 50));
        pushButton_recenzii->setFont(font1);
        pushButton_recenzii->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_recenzii->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        label_3 = new QLabel(profilangajator);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 161, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"font-size: 25px;"));
        pushButton_adauga_job = new QPushButton(profilangajator);
        pushButton_adauga_job->setObjectName(QString::fromUtf8("pushButton_adauga_job"));
        pushButton_adauga_job->setGeometry(QRect(760, 60, 181, 50));
        pushButton_adauga_job->setFont(font1);
        pushButton_adauga_job->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_adauga_job->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 52, 111);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));

        retranslateUi(profilangajator);

        QMetaObject::connectSlotsByName(profilangajator);
    } // setupUi

    void retranslateUi(QDialog *profilangajator)
    {
        profilangajator->setWindowTitle(QCoreApplication::translate("profilangajator", "Dialog", nullptr));
        label_welcome->setText(QCoreApplication::translate("profilangajator", "Bine ai venit, ", nullptr));
        pushButton_oferte->setText(QCoreApplication::translate("profilangajator", "Ofertele noastre", nullptr));
        pushButton_cv->setText(QCoreApplication::translate("profilangajator", "CV-uri primite", nullptr));
        pushButton_recenzii->setText(QCoreApplication::translate("profilangajator", "Recenzii primite", nullptr));
        label_3->setText(QCoreApplication::translate("profilangajator", "Profilul meu", nullptr));
        pushButton_adauga_job->setText(QCoreApplication::translate("profilangajator", "Adaug\304\203 job", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profilangajator: public Ui_profilangajator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILANGAJATOR_H
