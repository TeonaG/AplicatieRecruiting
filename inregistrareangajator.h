#pragma once
#ifndef INREGISTRAREANGAJATOR_H
#define INREGISTRAREANGAJATOR_H
#include <QDialog>
#include "tipuri_autentificare.h"
#include "mainwindow.h"

namespace Ui {
class InregistrareAngajator;
}

class InregistrareAngajator : public QDialog
{
    Q_OBJECT

public:
    explicit InregistrareAngajator(QWidget *parent = nullptr);
    ~InregistrareAngajator();
    void inregistreaza_angajator(std::vector<std::string>);

private slots:
    void on_pushButton_inregistrare_clicked();

    void on_pushButton_inregistrare_2_clicked();

private:
    Ui::InregistrareAngajator *ui;
    tipuri_autentificare* tipuri_autentif;
    MainWindow* fereastra_login;
};

#endif // INREGISTRAREANGAJATOR_H

//pentru filtru: combo box
