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
    ui->lineEdit_parola->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::vector<std::string> MainWindow::verificare_email_parola(Client&client)
{
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

    w=this->verificare_email_parola(client);

    if (w[0].find("Date incorecte")!=std::string::npos) //daca perechea nu exista
    {
        QMessageBox::warning(this, "Eroare", "Email sau parola incorecte!");
    }
  else
    {
        //w va fi de forma nume,prenume etc. luate din baza de date

        v.clear();
        v.push_back("3");
        v.push_back(email);
        v.push_back(parola);
        v.push_back(r);

        //avem nevoie de datele userului pentru a crea profilul acestuia
        //daca rolul este 1 sau 3 am nevoie de nume,prenume, iar daca rolul este 2,am nevoie de numele companiei

        QString str=QString::fromStdString(parser::getInstance().parse_string(v,'/'));

        client.trimite_mesaj(str);
        str=client.primire_mesaj();
        std::string s=str.toStdString();

        //punem datele userului intr-un vector
         w.clear();
         w=parser::getInstance().unparse_string(s,'/');

          v.clear();
          v.push_back(email);
          v.push_back(parola);

        if (rol == 1)
       {
            hide();
            v.push_back(w[0]);
            v.push_back(w[1]);
            IUser* user = FactoryUser::createUserAdmin(v);
            user->setUserID(w[2]);
            profil_admin = new profiladmin(this, user);
            this->profil_admin->show();
       }
        else if (rol == 2)
        {
            hide();
            v.push_back(w[0]);
            IUser* user = FactoryUser::createAngajator(v);
            user->setUserID(w[1]);
            profil_angajator = new profilangajator(this, user);
            this->profil_angajator->show();
        }
        else if (rol == 3)
        {
            hide();
            v.push_back(w[0]);
            v.push_back(w[1]);
            IUser* user = FactoryUser::createUserAngajat(v);
            user->setUserID(w[2]);
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


void MainWindow::on_pushButton_afisare_clicked()
{
    ui->lineEdit_parola->setEchoMode(QLineEdit::Normal);
}

