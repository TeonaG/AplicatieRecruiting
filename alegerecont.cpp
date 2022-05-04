#include "alegerecont.h"
#include "ui_alegerecont.h"

AlegereCont::AlegereCont(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlegereCont)
{
    ui->setupUi(this);
}

AlegereCont::~AlegereCont()
{
    delete ui;
}

void AlegereCont::on_angajator_clicked()
{
    hide();
    inregistrareangajator=new InregistrareAngajator(this);
    inregistrareangajator->show();
}



void AlegereCont::on_viitor_angajat_clicked()
{
    hide();
    inregistrareangajat=new InregistrareAngajat(this);
    inregistrareangajat->show();
}

