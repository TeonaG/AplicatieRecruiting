#ifndef CV_ANGAJAT_H
#define CV_ANGAJAT_H
#include <QDialog>
#include "IUser.h"
#include "cv_de_modificat.h"

namespace Ui {
class CV_Angajat;
}

class CV_Angajat : public QDialog
{
    Q_OBJECT

public:
    explicit CV_Angajat(QWidget *parent = nullptr,std::string id=" ");
    ~CV_Angajat();
    std::vector<std::string> citire_info_cv();
    void completare_date(std::vector<std::string>);

private slots:

    void on_pushButton_modificare_clicked();

private:
    Ui::CV_Angajat *ui;
    std::string id_cv;
    cv_de_modificat*cv;
};

#endif // CV_ANGAJAT_H
