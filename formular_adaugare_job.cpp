#include "formular_adaugare_job.h"
#include "ui_formular_adaugare_job.h"
#include "parser.h"
#include <qMessageBox>

formular_adaugare_job::formular_adaugare_job(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formular_adaugare_job)
{
    ui->setupUi(this);
}

void formular_adaugare_job::trimitere_job(Client&client,std::vector<std::string>v)
{
    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

    client.trimite_mesaj(str);
}

formular_adaugare_job::~formular_adaugare_job()
{
    delete ui;
}

void formular_adaugare_job::on_pushButton_salvare_clicked()
{
    std::vector<std::string>v;
    Client client;

    v.push_back("8");
    std::string domeniu,functie,angajator,judet,oras,program;
    domeniu=ui->lineEdit_domeniu->text().toStdString();
    v.push_back(domeniu);
    functie=ui->lineEdit_functie->text().toStdString();
    v.push_back(functie);
    angajator=ui->lineEdit_angajator->text().toStdString();
    v.push_back(angajator);
    judet=ui->lineEdit_judet->text().toStdString();
    v.push_back(judet);
    oras=ui->lineEdit_oras->text().toStdString();
    v.push_back(oras);
    program=ui->lineEdit_program->text().toStdString();
    v.push_back(program);

    if(program.find("-")==std::string::npos)

        QMessageBox::warning(this, "Eroare", "Va rugam sa respectati formatul!");


    else if (domeniu == "" || functie == "" || angajator == "" || judet=="" || oras==""|| program=="")

        QMessageBox::warning(this, "Eroare", "Toate campurile sunt obligatorii!");

    else  this->trimitere_job(client,v);

}

