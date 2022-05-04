/********************************************************************************
** Form generated from reading UI file 'paginapornire.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGINAPORNIRE_H
#define UI_PAGINAPORNIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaginaPornire
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_cautare;

    void setupUi(QWidget *PaginaPornire)
    {
        if (PaginaPornire->objectName().isEmpty())
            PaginaPornire->setObjectName(QString::fromUtf8("PaginaPornire"));
        PaginaPornire->resize(1317, 696);
        PaginaPornire->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        pushButton = new QPushButton(PaginaPornire);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1120, 100, 131, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Regular"));
        font.setBold(false);
        font.setItalic(false);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Montserrat Regular;"));
        pushButton_2 = new QPushButton(PaginaPornire);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 380, 285, 65));
        QFont font1;
        font1.setFamily(QString::fromUtf8("New Roman"));
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: rgb(58, 175, 169);\n"
"border-radius: 20px;\n"
"font-size: 22px;\n"
"border: 1.5px rgb(58, 175, 169);\n"
"font: Times New Roman;\n"
"border-style: outset;"));
        pushButton_3 = new QPushButton(PaginaPornire);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 300, 285, 65));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: rgb(58, 175, 169);\n"
"border-color: white;\n"
"borde-width: 2px;\n"
"border-style: inset;\n"
"border-radius: 22px;\n"
"font-size: 22px;\n"
"font: Times New Roman;\n"
"border:1.5px rgb(58, 175, 169);\n"
"border-style: outset;"));
        label_3 = new QLabel(PaginaPornire);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 341, 131));
        label_3->setStyleSheet(QString::fromUtf8("margin-radius: 10px;"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../PROIECT/logo_mare.png")));
        label_4 = new QLabel(PaginaPornire);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(710, 240, 561, 371));
        label_4->setStyleSheet(QString::fromUtf8("margin-radius: 10px;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Teona/Downloads/favpng_recruitment-job-human-resource-flat-design.png")));
        pushButton_4 = new QPushButton(PaginaPornire);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(880, 100, 191, 50));
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));
        pushButton_cautare = new QPushButton(PaginaPornire);
        pushButton_cautare->setObjectName(QString::fromUtf8("pushButton_cautare"));
        pushButton_cautare->setGeometry(QRect(230, 470, 285, 65));
        pushButton_cautare->setFont(font1);
        pushButton_cautare->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cautare->setStyleSheet(QString::fromUtf8("background-color: rgb(9, 52, 111);\n"
"color: white;\n"
"font-size: 20px;\n"
"border-style: outset;\n"
"border-radius: 20px;\n"
"font: Times New Roman;"));

        retranslateUi(PaginaPornire);

        QMetaObject::connectSlotsByName(PaginaPornire);
    } // setupUi

    void retranslateUi(QWidget *PaginaPornire)
    {
        PaginaPornire->setWindowTitle(QCoreApplication::translate("PaginaPornire", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("PaginaPornire", "Autentificare", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PaginaPornire", "Publica\310\233i un loc de munc\304\203", nullptr));
        pushButton_3->setText(QCoreApplication::translate("PaginaPornire", "Publica\310\233i CV-ul dvs", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("PaginaPornire", "\303\216nregistrare", nullptr));
        pushButton_cautare->setText(QCoreApplication::translate("PaginaPornire", "C\304\203utare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaginaPornire: public Ui_PaginaPornire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINAPORNIRE_H
