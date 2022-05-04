#include "cv_angajat.h"
#include "ui_cv_angajat.h"
#include "client.h"
#include "parser.h"

CV_Angajat::CV_Angajat(QWidget *parent,int id_cv) :
    QDialog(parent),
    ui(new Ui::CV_Angajat), id_cv(id_cv)
{
    ui->setupUi(this);
    ui->pushButton_modificare->show();
    ui->pushButton_salvare->hide();

    //trimitem o metoda prin care solicitam citirea datelor din cv-ul angajatului
    //ne vom folosi de id-ul cv-ului (identic cu id-ul angajatului)





}

void CV_Angajat::citire_info_cv()
{
    std::vector<std::string> v,w;
    v.push_back("6");
    v.push_back(std::to_string(id_cv));

    Client client;
    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    std::string s=str.toStdString();

    w=parser::getInstance().unparse_string(s,'/');


}

CV_Angajat::~CV_Angajat()
{
    delete ui;
}
