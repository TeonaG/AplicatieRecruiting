/********************************************************************************
** Form generated from reading UI file 'alegerecont.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALEGERECONT_H
#define UI_ALEGERECONT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AlegereCont
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AlegereCont)
    {
        if (AlegereCont->objectName().isEmpty())
            AlegereCont->setObjectName(QString::fromUtf8("AlegereCont"));
        AlegereCont->resize(453, 412);
        AlegereCont->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 242, 241);"));
        label = new QLabel(AlegereCont);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 330, 151, 71));
        label->setPixmap(QPixmap(QString::fromUtf8("../PROIECT/logo_mic.png")));
        label_2 = new QLabel(AlegereCont);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 40, 201, 41));
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"font-size: 30px;"));
        label_3 = new QLabel(AlegereCont);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 120, 241, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(58, 175, 169);\n"
"font-size: 17px;"));
        pushButton = new QPushButton(AlegereCont);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 180, 245, 45));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font-size: 20px;"));
        pushButton_2 = new QPushButton(AlegereCont);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 240, 245, 45));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 175, 169);\n"
"color: white;\n"
"border-radius: 10px;\n"
"font-size: 20px;"));

        retranslateUi(AlegereCont);

        QMetaObject::connectSlotsByName(AlegereCont);
    } // setupUi

    void retranslateUi(QDialog *AlegereCont)
    {
        AlegereCont->setWindowTitle(QCoreApplication::translate("AlegereCont", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("AlegereCont", "Bine a\310\233i venit!", nullptr));
        label_3->setText(QCoreApplication::translate("AlegereCont", "Alege\310\233i tipul de utilizator", nullptr));
        pushButton->setText(QCoreApplication::translate("AlegereCont", "Angajator", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AlegereCont", "Viitor angajat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlegereCont: public Ui_AlegereCont {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALEGERECONT_H
