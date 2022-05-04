#include "inregistrareangajat.h"
#include "ui_inregistrareangajat.h"
#include "Admin.h"
#include <qMessageBox>
#include "client.h"
#include "parser.h"

InregistrareAngajat::InregistrareAngajat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InregistrareAngajat)
{
    ui->setupUi(this);
}

InregistrareAngajat::~InregistrareAngajat()
{
    delete ui;
}

void InregistrareAngajat::inregistreaza_angajat(std::vector<std::string>v)
{
    Admin* admin = new Admin();
    admin->registerNewUser(v);
    delete admin;
}

void InregistrareAngajat::on_pushButton_inregistrare_clicked()
{
    std::vector<std::string> v,w;
    v.push_back("1");
    string email = ui->lineEdit_email->text().toStdString();
    string parola = ui->lineEdit_parola->text().toStdString();
    string nume = ui->lineEdit_nume->text().toStdString();
    string prenume = ui->lineEdit_prenume->text().toStdString();
    v.push_back(email);
    v.push_back(parola);
    v.push_back(nume);
    v.push_back(prenume);
    v.push_back("3");

    if (email == "" || parola == "" || nume == "" || prenume=="")
    {
        QMessageBox::warning(this, "Eroare", "Toate campurile sunt obligatorii!");
        exit(-1);
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
         this->inregistreaza_angajat(v);
    }

    hide();
    tipuri_autentif = new tipuri_autentificare(this);
    tipuri_autentif->show();
}


void InregistrareAngajat::on_pushButton_inregistrare_2_clicked()
{
    hide();
    fereastra_login = new MainWindow();
    fereastra_login->show();
}

