#ifndef PAGINAPORNIRE_H
#define PAGINAPORNIRE_H

#include <QWidget>
#include "mainwindow.h"
#include "inregistrareangajator.h"
#include "inregistrareangajat.h"
#include "alegerecont.h"

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

private:
    Ui::PaginaPornire *ui;
    MainWindow*mainwindow;
    InregistrareAngajator*inreg_angajator;
    InregistrareAngajat*inreg_angajat;
    AlegereCont*alegerecont;
};

#endif // PAGINAPORNIRE_H
