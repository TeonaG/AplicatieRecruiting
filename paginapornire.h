#ifndef PAGINAPORNIRE_H
#define PAGINAPORNIRE_H

#include <QWidget>
#include "mainwindow.h"
#include "inregistrareangajator.h"
#include "inregistrareangajat.h"
#include "alegerecont.h"
#include "tipuri_autentificare.h"
#include "filtru.h"


namespace Ui {
class PaginaPornire;
}

class PaginaPornire : public QWidget
{
    Q_OBJECT

public:
    explicit PaginaPornire(QWidget *parent = nullptr);
    ~PaginaPornire();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_cautare_clicked();

private:
    Ui::PaginaPornire *ui;
    MainWindow*mainwindow;
    InregistrareAngajator*inreg_angajator;
    InregistrareAngajat*inreg_angajat;
    AlegereCont*alegerecont;
    tipuri_autentificare*tipuri_autentif;
    filtru*filtru_cautare;
};

#endif // PAGINAPORNIRE_H
