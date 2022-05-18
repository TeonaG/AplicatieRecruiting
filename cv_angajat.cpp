#include "cv_angajat.h"
#include "ui_cv_angajat.h"
#include "client.h"
#include "parser.h"

CV_Angajat::CV_Angajat(QWidget *parent,std::string id) :
    QDialog(parent),
    ui(new Ui::CV_Angajat), id_cv(id)
{
    ui->setupUi(this);

    //trimitem o metoda prin care solicitam citirea datelor din cv-ul angajatului
    //ne vom folosi de id-ul cv-ului (identic cu id-ul angajatului)
    std::vector<std::string> v=citire_info_cv();
    this->completare_date(v);
}

std::vector<std::string>CV_Angajat::citire_info_cv()
{
    std::vector<std::string> v,w;
    v.push_back("6");
    v.push_back(id_cv);

    Client client;
    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    std::string s=str.toStdString();

    w=parser::getInstance().unparse_string(s,'/');
    return w;
}

void CV_Angajat::completare_date(std::vector<std::string>v)
{
    ui->label_nume->setText(QString::fromStdString(v[0]));
    ui->label_prenume->setText(QString::fromStdString(v[1]));
    ui->label_nr_tel->setText(QString::fromStdString(v[2]));
    ui->label_email_9->setText(QString::fromStdString(v[3]));
    ui->label_adresa->setText(QString::fromStdString(v[4]));
    ui->label_judet->setText(QString::fromStdString(v[5]));
    ui->label_oras->setText(QString::fromStdString(v[6]));
    ui->label_data_nastere->setText(QString::fromStdString(v[7]));
    ui->label_studii->setText(QString::fromStdString(v[8]));
    ui->label_loc_studii->setText(QString::fromStdString(v[9]));
    ui->label_institutie->setText(QString::fromStdString(v[10]));
    ui->label_per_start_studii->setText(QString::fromStdString(v[11]));
    ui->label_final_studii->setText(QString::fromStdString(v[12]));
    ui->label_functie->setText(QString::fromStdString(v[13]));
    ui->label_domeniu->setText(QString::fromStdString(v[14]));
    ui->label_angajator->setText(QString::fromStdString(v[15]));
    ui->label_per_start_exp->setText(QString::fromStdString(v[16]));
    ui->label_per_final_exp->setText(QString::fromStdString(v[17]));
}


CV_Angajat::~CV_Angajat()
{
    delete ui;
}


void CV_Angajat::on_pushButton_modificare_clicked()
{
    hide();
    cv=new cv_de_modificat(this,id_cv);
    cv->show();
}

