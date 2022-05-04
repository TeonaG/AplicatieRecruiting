#ifndef INREGISTRAREANGAJAT_H
#define INREGISTRAREANGAJAT_H
#include "IUser.h"
#include <QDialog>
#include "tipuri_autentificare.h"
#include "mainwindow.h"
namespace Ui {
class InregistrareAngajat;
}

class InregistrareAngajat : public QDialog
{
    Q_OBJECT

public:
    explicit InregistrareAngajat(QWidget *parent = nullptr);
    ~InregistrareAngajat();
    void inregistreaza_angajat(std::vector<std::string>);

private slots:
    void on_pushButton_inregistrare_clicked();

    void on_pushButton_inregistrare_2_clicked();

private:
    Ui::InregistrareAngajat *ui;
    tipuri_autentificare*tipuri_autentif;
    MainWindow* fereastra_login;
};

#endif // INREGISTRAREANGAJAT_H
