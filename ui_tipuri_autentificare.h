/********************************************************************************
** Form generated from reading UI file 'tipuri_autentificare.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPURI_AUTENTIFICARE_H
#define UI_TIPURI_AUTENTIFICARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tipuri_autentificare
{
public:
    QLabel *label;
    QPushButton *pushButton_angajat;
    QPushButton *pushButton_angajator;
    QPushButton *pushButton_admin;

    void setupUi(QDialog *tipuri_autentificare)
    {
        if (tipuri_autentificare->objectName().isEmpty())
            tipuri_autentificare->setObjectName(QString::fromUtf8("tipuri_autentificare"));
        tipuri_autentificare->resize(570, 424);
        tipuri_autentificare->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        label = new QLabel(tipuri_autentificare);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 60, 241, 131));
        label->setPixmap(QPixmap(QString::fromUtf8("../PROIECT/logo_mare.png")));
        pushButton_angajat = new QPushButton(tipuri_autentificare);
        pushButton_angajat->setObjectName(QString::fromUtf8("pushButton_angajat"));
        pushButton_angajat->setGeometry(QRect(150, 220, 280, 45));
        QFont font;
        font.setBold(true);
        pushButton_angajat->setFont(font);
        pushButton_angajat->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_angajat->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font-size: 20px;"));
        pushButton_angajator = new QPushButton(tipuri_autentificare);
        pushButton_angajator->setObjectName(QString::fromUtf8("pushButton_angajator"));
        pushButton_angajator->setGeometry(QRect(150, 280, 280, 45));
        pushButton_angajator->setFont(font);
        pushButton_angajator->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_angajator->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font-size: 20px;"));
        pushButton_admin = new QPushButton(tipuri_autentificare);
        pushButton_admin->setObjectName(QString::fromUtf8("pushButton_admin"));
        pushButton_admin->setGeometry(QRect(150, 340, 280, 45));
        pushButton_admin->setFont(font);
        pushButton_admin->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_admin->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font-size: 20px;"));

        retranslateUi(tipuri_autentificare);

        QMetaObject::connectSlotsByName(tipuri_autentificare);
    } // setupUi

    void retranslateUi(QDialog *tipuri_autentificare)
    {
        tipuri_autentificare->setWindowTitle(QCoreApplication::translate("tipuri_autentificare", "Dialog", nullptr));
        label->setText(QString());
        pushButton_angajat->setText(QCoreApplication::translate("tipuri_autentificare", "Autentificare ca Angajat", nullptr));
        pushButton_angajator->setText(QCoreApplication::translate("tipuri_autentificare", "Autentificare ca Angajator", nullptr));
        pushButton_admin->setText(QCoreApplication::translate("tipuri_autentificare", "Autentificare ca Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tipuri_autentificare: public Ui_tipuri_autentificare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPURI_AUTENTIFICARE_H
