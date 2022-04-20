#include "paginapornire.h"
#include "ui_paginapornire.h"
#include "mainwindow.h"
#include "inregistrareangajator.h"

PaginaPornire::PaginaPornire(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PaginaPornire)
{
    ui->setupUi(this);
    ui->cautare_1->setPlaceholderText("Denumire sau firmă");
    ui->cautare_2->setPlaceholderText("Județ sau oraș");

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
     mainwindow=new MainWindow(this);
     mainwindow->show();
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

