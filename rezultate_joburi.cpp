#include "rezultate_joburi.h"
#include "ui_rezultate_joburi.h"
#include "parser.h"
#include "client.h"

rezultate_joburi::rezultate_joburi(QWidget *parent,std::vector<std::string> v,std::string id) :
    QDialog(parent),
    ui(new Ui::rezultate_joburi),id_angajat(id)
{
    ui->setupUi(this);
    for(int i=0;i<v.size();i++)
        rezultate.push_back(v[i]);
    this->completare_lista();

}

std::string rezultate_joburi::angajator_id()
{
    std::vector<std::string> v,w;
    v.push_back("11");
    QString str=ui->listWidget->currentItem()->text();
    std::string s=str.toStdString();
    w=parser::getInstance().unparse_string(s,' ');
    v.push_back(w[2]);
    str=QString::fromStdString(s);
    qDebug()<<str;
    str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));
    Client client;
    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    s=str.toStdString();
    w=parser::getInstance().unparse_string(s,'/');
    return w[0];

}

void rezultate_joburi::completare_lista()
{
    for(int i=0;i<rezultate.size();i++)
        ui->listWidget->addItem(QString::fromStdString(rezultate[i]));
}

rezultate_joburi::~rezultate_joburi()
{
    delete ui;
}


void rezultate_joburi::on_pushButton_modificare_clicked()
{
   /* std::string s=this->angajator_id();
    Client client;
    std::vector<std::string> v;
    v.push_back("12");
    v.push_back(s);
    v.push_back(this->id_angajat);
    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));
    client.trimite_mesaj(str);
    */
}



void rezultate_joburi::on_pushButton_recenzie_clicked()
{
     std::string s=this->angajator_id();
     recenzii=new adaugare_recenzie(this,s);
     recenzii->show();
}

