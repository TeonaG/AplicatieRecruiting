#include "cv_de_modificat.h"
#include "ui_cv_de_modificat.h"
#include "parser.h"
#include "client.h"

cv_de_modificat::cv_de_modificat(QWidget *parent,std::string id) :
    QDialog(parent),
    ui(new Ui::cv_de_modificat),id_cv(id)
{
    ui->setupUi(this);
}

cv_de_modificat::~cv_de_modificat()
{
    delete ui;
}

void cv_de_modificat::on_pushButton_salvare_clicked()
{
    std::vector<std::string> v;
    std::string cv=id_cv;

    v.push_back("7");
    std::string detalii;
    detalii=ui->lineEdit_nume->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_prenume->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_nr_tel->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_email->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_adresa->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_judet->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_oras->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_data_nastere->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_studii->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_loc_studii->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_institutie->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_perioada_inceput_studii->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_perioada_sfarsit_studii->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_functia_ocupata->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_loc->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_angajator->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_perioada_inceput_experienta->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    detalii=ui->lineEdit_perioada_inceput_experienta_2->text().toStdString();
    if(detalii=="") detalii=" ";
    v.push_back(detalii);

    v.push_back(cv);

    Client client;
    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));
qDebug()<<str;

    client.trimite_mesaj(str);
}

