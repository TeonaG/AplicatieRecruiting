#ifndef FORMULAR_ADAUGARE_JOB_H
#define FORMULAR_ADAUGARE_JOB_H
#include <QDialog>
#include "client.h"

namespace Ui {
class formular_adaugare_job;
}

class formular_adaugare_job : public QDialog
{
    Q_OBJECT

public:
    explicit formular_adaugare_job(QWidget *parent = nullptr);
    void trimitere_job(Client&,std::vector<std::string>);
    ~formular_adaugare_job();

private slots:
    void on_pushButton_salvare_clicked();

private:
    Ui::formular_adaugare_job *ui;
};

#endif // FORMULAR_ADAUGARE_JOB_H
