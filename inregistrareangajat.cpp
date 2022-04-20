#include "inregistrareangajat.h"
#include "ui_inregistrareangajat.h"

InregistrareAngajat::InregistrareAngajat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InregistrareAngajat)
{
    ui->setupUi(this);
}

InregistrareAngajat::~InregistrareAngajat()
{
    delete ui;
}

void InregistrareAngajat::on_pushButton_5_clicked()
{
    hide();
    profilangajat=new profilAngajat();
    profilangajat->show();
}

