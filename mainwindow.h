#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <qMessageBox>
#include <vector>
#include "profiladmin.h"
#include "profilangajator.h"
#include "profilangajat.h"
#include "client.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr,int r=0);
    ~MainWindow();
    void logare_user();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_afisare_clicked();

private:
    Ui::MainWindow *ui;
    int rol;
    profiladmin* profil_admin;
    profilAngajat* profil_angajat;
    profilangajator* profil_angajator;
    std::vector<std::string> verificare_email_parola(Client&);
};
#endif // MAINWINDOW_H
