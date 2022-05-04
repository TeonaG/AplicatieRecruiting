#include "paginapornire.h"
#include "ui_paginapornire.h"
#include "mainwindow.h"
#include "inregistrareangajator.h"
#include "tipuri_autentificare.h"

PaginaPornire::PaginaPornire(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PaginaPornire)
{
    ui->setupUi(this);
}

PaginaPornire::~PaginaPornire()
{
    delete ui;
}

void PaginaPornire::on_pushButton_2_clicked()
{
    hide();
    inreg_angajator=new InregistrareAngajator(this);
    inreg_angajator->show();
}


void PaginaPornire::on_pushButton_clicked()
{
     hide();
     tipuri_autentif=new tipuri_autentificare(this);
     tipuri_autentif->show();
}


void PaginaPornire::on_pushButton_3_clicked()
{
    hide();
    inreg_angajat=new InregistrareAngajat(this);
    inreg_angajat->show();
}


void PaginaPornire::on_pushButton_4_clicked()
{
    hide();
    alegerecont=new AlegereCont(this);
    alegerecont->show();
}


void PaginaPornire::on_pushButton_cautare_clicked()
{
    hide();
    filtru_cautare=new filtru();
    filtru_cautare->show();
}

