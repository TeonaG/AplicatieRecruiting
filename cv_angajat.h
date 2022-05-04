#ifndef CV_ANGAJAT_H
#define CV_ANGAJAT_H
#include <QDialog>
#include "IUser.h"

namespace Ui {
class CV_Angajat;
}

class CV_Angajat : public QDialog
{
    Q_OBJECT

public:
    explicit CV_Angajat(QWidget *parent = nullptr,int id_cv=0);
    ~CV_Angajat();
    void citire_info_cv();

private:
    Ui::CV_Angajat *ui;
    int id_cv;

};

#endif // CV_ANGAJAT_H
