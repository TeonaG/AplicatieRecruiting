#include "tipuri_autentificare.h"
#include "ui_tipuri_autentificare.h"
#include "mainwindow.h"

tipuri_autentificare::tipuri_autentificare(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tipuri_autentificare)
{
    ui->setupUi(this);
}

tipuri_autentificare::~tipuri_autentificare()
{
    delete ui;
}

void tipuri_autentificare::on_pushButton_angajat_clicked()
{
    hide();
    fereastra_conectare=new MainWindow(this,3);
    fereastra_conectare->show();
}


void tipuri_autentificare::on_pushButton_angajator_clicked()
{
    hide();
    fereastra_conectare=new MainWindow(this,2);
    fereastra_conectare->show();
}




void tipuri_autentificare::on_pushButton_admin_clicked()
{
    hide();
    fereastra_conectare=new MainWindow(this,1);
    fereastra_conectare->show();
}

