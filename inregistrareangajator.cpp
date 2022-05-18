#include "inregistrareangajator.h"
#include "ui_inregistrareangajator.h"
#include "FactoryUser.h"
#include <qMessageBox>
#include "Admin.h"
#include "parser.h"

InregistrareAngajator::InregistrareAngajator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InregistrareAngajator)
{
    ui->setupUi(this);
    
}

InregistrareAngajator::~InregistrareAngajator()
{
    delete ui;
}

void InregistrareAngajator::inregistreaza_angajator(std::vector<std::string>v,Client&client)
{
    Admin* admin = new Admin();
    admin->registerNewUser(v,client);
    delete admin;
}

void InregistrareAngajator::on_pushButton_inregistrare_clicked()
{
    std::vector<std::string> v,w;
    v.push_back("1");
    string email = ui->lineEdit_email->text().toStdString();
    string parola = ui->lineEdit_parola->text().toStdString();
    string companie = ui->lineEdit_companie->text().toStdString();

    if (email == "" || parola == "" || companie == "")
    {
        QMessageBox::warning(this, "Eroare", "Toate campurile sunt obligatorii!");
    }
    else
    {
        v.clear();
        v.push_back("5");
        v.push_back(email);

        Client client;
        QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

        client.trimite_mesaj(str);
        str=client.primire_mesaj();
        std::string s=str.toStdString();

         //punem datele userului intr-un vector
         w=parser::getInstance().unparse_string(s,'/');

         if(w[0].find("Email luat")!=std::string::npos)
         {
             QMessageBox::warning(this, "Eroare", "Emailul este deja inregistrat!");
             exit(-1);
         }
         else

         {
             v.clear();
             v.push_back("1");
             v.push_back(email);
             v.push_back(parola);
             v.push_back(companie);
             v.push_back("2");
             this->inregistreaza_angajator(v,client);
         }
    }

    
}


void InregistrareAngajator::on_pushButton_inregistrare_2_clicked()
{
    hide();
    fereastra_login = new MainWindow();
    fereastra_login->show();
}

