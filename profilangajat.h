#ifndef PROFILANGAJAT_H
#define PROFILANGAJAT_H
#include "IUser.h"
#include "cv_angajat.h"
#include "filtru.h"
#include <QDialog>

namespace Ui {
class profilAngajat;
}

class profilAngajat : public QDialog
{
    Q_OBJECT

public:
    explicit profilAngajat(QWidget *parent = nullptr,int id_cv=0);
    ~profilAngajat();

private slots:
    void on_pushButton_oferte_clicked();

    void on_pushButton_cv_clicked();

private:
    Ui::profilAngajat *ui;
    int id_cv;
    CV_Angajat* cv_angajat;
    filtru*oferte_munca;
};

#endif // PROFILANGAJAT_H
