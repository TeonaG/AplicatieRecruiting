#include "inregistrareangajator.h"
#include "ui_inregistrareangajator.h"
#include "FactoryUser.h"
#include <qMessageBox>
#include "Admin.h"

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

void InregistrareAngajator::inregistreaza_angajator(std::vector<std::string>v)
{
    Admin* admin = new Admin();
    admin->registerNewUser(v);
    delete admin;
}

void InregistrareAngajator::on_pushButton_inregistrare_clicked()
{
    std::vector<std::string> v;
    v.push_back("1");
    string email = ui->lineEdit_email->text().toStdString();
    string parola = ui->lineEdit_parola->text().toStdString();
    string companie = ui->lineEdit_companie->text().toStdString();
    v.push_back(email);
    v.push_back(parola);
    v.push_back(companie);
    v.push_back("2");

    if (email == "" || parola == "" || companie == "")
    {
        QMessageBox::warning(this, "Eroare", "Toate campurile sunt obligatorii!");
    }
    else
    {
        //aici trebuie verificat daca email-ul sau numele companiei sunt deja existente
        this->inregistreaza_angajator(v);
        hide();
        tipuri_autentif = new tipuri_autentificare(this);
        tipuri_autentif->show();
    }

    
}


void InregistrareAngajator::on_pushButton_inregistrare_2_clicked()
{
    hide();
    fereastra_login = new MainWindow();
    fereastra_login->show();
}

