#include "filtru.h"
#include "ui_filtru.h"

filtru::filtru(QWidget *parent,std::string id) :
    QDialog(parent),
    ui(new Ui::filtru),id_angajat(id)
{
    ui->setupUi(this);
    Client client;
    std::vector<std::string> v;
    v=this->domenii(client);
    ui->comboBox_domeniu->addItem(" ");
    for(int i=0;i<v.size();i++)
        ui->comboBox_domeniu->addItem(QString::fromStdString(v[i]));

    v=this->functii(client);
    ui->comboBox_functie->addItem(" ");
    for(int i=0;i<v.size();i++)
        ui->comboBox_functie->addItem(QString::fromStdString(v[i]));

    v=this->angajatori(client);
    ui->comboBox_angajator->addItem(" ");
    for(int i=0;i<v.size();i++)
        ui->comboBox_angajator->addItem(QString::fromStdString(v[i]));

    v=this->judete(client);
     ui->comboBox_judet->addItem(" ");
    for(int i=0;i<v.size();i++)
        ui->comboBox_judet->addItem(QString::fromStdString(v[i]));

    v=this->orase(client);
     ui->comboBox_oras->addItem(" ");
    for(int i=0;i<v.size();i++)
        ui->comboBox_oras->addItem(QString::fromStdString(v[i]));

    v=this->programe_lucru(client);
     ui->comboBox_program_lucru->addItem(" ");
    for(int i=0;i<v.size();i++)
        ui->comboBox_program_lucru->addItem(QString::fromStdString(v[i]));
}

filtru::~filtru()
{
    delete ui;
}

std::vector<std::string> filtru::domenii(Client&client)
{
    std::vector<std::string> v,w;
    v.push_back("9");
    v.push_back("domenii");

    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    std::string s=str.toStdString();

    w=parser::getInstance().unparse_string(s,'/');
    return w;
}

std::vector<std::string> filtru::functii(Client&client)
{
    std::vector<std::string> v,w;
    v.push_back("9");
    v.push_back("functii");

    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    std::string s=str.toStdString();

    w=parser::getInstance().unparse_string(s,'/');
    return w;
}

std::vector<std::string> filtru::angajatori(Client&client)
{
    std::vector<std::string> v,w;
    v.push_back("9");
    v.push_back("angajatori");

    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    std::string s=str.toStdString();

    w=parser::getInstance().unparse_string(s,'/');
    return w;
}

std::vector<std::string> filtru::judete(Client&client)
{
    std::vector<std::string> v,w;
    v.push_back("9");
    v.push_back("judete");

    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    std::string s=str.toStdString();

    w=parser::getInstance().unparse_string(s,'/');
    return w;
}


std::vector<std::string> filtru::orase(Client&client)
{
    std::vector<std::string> v,w;
    v.push_back("9");
    v.push_back("orase");

    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    std::string s=str.toStdString();

    w=parser::getInstance().unparse_string(s,'/');
    return w;
}


std::vector<std::string> filtru::programe_lucru(Client&client)
{
    std::vector<std::string> v,w;
    v.push_back("9");
    v.push_back("programe_lucru");

    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    std::string s=str.toStdString();

    w=parser::getInstance().unparse_string(s,'/');
    return w;
}

std::vector<std::string> filtru::rezultate_cautare(std::vector<std::string> v)
{
    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));
    Client client;
    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    std::string s=str.toStdString();
    std::vector<std::string> w;
    w=parser::getInstance().unparse_string(s,'/');
    return w;
}

void filtru::on_pushButton_cautare_clicked()
{
    std::vector<std::string> v,w;
    v.push_back("10");

    std::string s;
    s=ui->comboBox_domeniu->currentText().toStdString();
    v.push_back(s);

    s=ui->comboBox_functie->currentText().toStdString();
    v.push_back(s);

    s=ui->comboBox_angajator->currentText().toStdString();
    v.push_back(s);

    s=ui->comboBox_judet->currentText().toStdString();
    v.push_back(s);

    s=ui->comboBox_oras->currentText().toStdString();
    v.push_back(s);

    s=ui->comboBox_program_lucru->currentText().toStdString();
    v.push_back(s);

   w=this->rezultate_cautare(v);
   rezultate=new rezultate_joburi(this,w,id_angajat);
   rezultate->show();


}

