#include "profilangajat.h"
#include "ui_profilangajat.h"
#include <QApplication>
#include <QLabel>

profilAngajat::profilAngajat(QWidget *parent,IUser*u) :
    QDialog(parent),
    ui(new Ui::profilAngajat),user(u)
{
    ui->setupUi(this);
    std::vector<std::string> v = user->getInfoProfil();
    std::string header = "Bine ai venit, " + v[0] + " " + v[1];
    ui->label_welcome->setText(header.c_str());
    ui->label_nume->setText((v[0]+" "+v[1]).c_str());

}

profilAngajat::~profilAngajat()
{
    delete ui;
}

void profilAngajat::on_pushButton_oferte_clicked()
{
    hide();
    this->oferte_munca=new filtru();
    oferte_munca->show();
}

void profilAngajat::on_pushButton_cv_clicked()
{
   //hide();
    cv_angajat = new CV_Angajat();
    cv_angajat->show();
}

