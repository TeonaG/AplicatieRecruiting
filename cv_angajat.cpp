#include "cv_angajat.h"
#include "ui_cv_angajat.h"

CV_Angajat::CV_Angajat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CV_Angajat)
{
    ui->setupUi(this);
    ui->pushButton_modificare->show();
    ui->pushButton_salvare->hide();

    //trimitem o metoda prin care solicitam citirea datelor din cv-ul angajatului
   
}

CV_Angajat::~CV_Angajat()
{
    delete ui;
}
