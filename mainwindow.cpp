//login window
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmessagebox.h>
#include "FactoryUser.h"
#include "client.h"
#include "parser.h"

MainWindow::MainWindow(QWidget *parent,int r)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),rol(r)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::vector<std::string> MainWindow::verificare_email_parola()
{
    Client client;
    std::string email = ui->lineEdit_email->text().toStdString();
    std::string parola = ui->lineEdit_parola->text().toStdString();
    std::string r = std::to_string(rol);
    std::vector<std::string> v,w;
    v.push_back("2");
    v.push_back(email);
    v.push_back(parola);
    v.push_back(r); //verificam daca perechea email-parola exista in tabelul r

    QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

    client.trimite_mesaj(str);
    str=client.primire_mesaj();
    std::string s=str.toStdString();

    w=parser::getInstance().unparse_string(s,'/');
    return w;
}

void MainWindow::logare_user()
{
    Client client;
    std::string email = ui->lineEdit_email->text().toStdString();
    std::string parola = ui->lineEdit_parola->text().toStdString();
    std::string r = std::to_string(rol);
    std::vector<std::string> v,w;

    w=this->verificare_email_parola();

    if (w[0].find("Date incorecte")!=std::string::npos) //daca perechea nu exista
    {
        QMessageBox::warning(this, "Eroare", "Email sau parola incorecte!");
    }
  else
    {
        hide();
        //w va fi de forma 1,nume,prenume etc. luate din baza de date
        v.clear();

        v.push_back("5");
        v.push_back(email);
        v.push_back(parola);
        //avem nevoie de datele userului pentru a crea profilul acestuia

        QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

        client.trimite_mesaj(str);
        str=client.primire_mesaj();
        std::string s=str.toStdString();

        //punem datele userului intr-un vector
         w=parser::getInstance().unparse_string(s,'/');

          v.clear();
          v.push_back(email);
          v.push_back(parola);

        if (rol == 1)
       {
            v.push_back(w[0]);
            v.push_back(w[1]);
            IUser* user = FactoryUser::createUserAdmin(v);
            profil_admin = new profiladmin(this, user);
            this->profil_admin->show();
       }
        else if (rol == 2)
        {
            v.push_back(w[0]);
            IUser* user = FactoryUser::createAngajator(v);
            profil_angajator = new profilangajator(this, user);
            this->profil_angajator->show();
        }
        else if (rol == 3)
        {
            v.push_back(w[0]);
            v.push_back(w[1]);

            IUser* user = FactoryUser::createUserAngajat(v);
            profil_angajat = new profilAngajat(this, user);
            this->profil_angajat->show();
        }
    }

}


void MainWindow::on_pushButton_login_clicked()
{

    QString email=ui->lineEdit_email->text();
    QString parola=ui->lineEdit_parola->text();

    if (email == "" || parola == "")
        QMessageBox::warning(this, "Eroare", "Toate campurile sunt obligatorii!");
    else
        this->logare_user();

}

