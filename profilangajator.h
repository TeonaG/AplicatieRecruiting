#ifndef PROFILANGAJATOR_H
#define PROFILANGAJATOR_H
#include "IUser.h"
#include <QDialog>
#include "formular_adaugare_job.h"

namespace Ui {
class profilangajator;
}

class profilangajator : public QDialog
{
    Q_OBJECT

public:
    explicit profilangajator(QWidget *parent = nullptr,IUser*user=nullptr);
    ~profilangajator();

private slots:
    void on_pushButton_adauga_job_clicked();

private:
    Ui::profilangajator *ui;
    IUser* user;
    formular_adaugare_job*formular;
};

#endif // PROFILANGAJATOR_H
