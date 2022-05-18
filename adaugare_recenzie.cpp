#include "adaugare_recenzie.h"
#include "ui_adaugare_recenzie.h"
#include "client.h"
#include "parser.h"

adaugare_recenzie::adaugare_recenzie(QWidget *parent,std::string id) :
    QDialog(parent),
    ui(new Ui::adaugare_recenzie),id_angajator(id)
{
    ui->setupUi(this);
}

adaugare_recenzie::~adaugare_recenzie()
{
    delete ui;
}

void adaugare_recenzie::on_pushButton_trimite_clicked()
{
    std::vector<std::string> v;
    v.push_back("13");
    std::string nota,comentariu;
    nota=ui->lineEdit_nota->text().toStdString();
    comentariu=ui->lineEdit_comentariu->text().toStdString();
    v.push_back(nota);
    v.push_back(comentariu);
    v.push_back(id_angajator);
    Client client;
    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));
    client.trimite_mesaj(str);
}

