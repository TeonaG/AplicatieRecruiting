//login window
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmessagebox.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{

    QString email=ui->lineEdit_email->text();
    QString parola=ui->lineEdit_password->text();


    if(email=="teona" && parola=="123")
       { QMessageBox::information(this,"Login","V-ati autentificat cu succes!");

        hide();

    }
    else
        QMessageBox::warning(this,"Login","Eroare la autentificare!");

}

