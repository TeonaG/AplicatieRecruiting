#ifndef REZULTATE_JOBURI_H
#define REZULTATE_JOBURI_H

#include <QDialog>
#include "adaugare_recenzie.h"

namespace Ui {
class rezultate_joburi;
}

class rezultate_joburi : public QDialog
{
    Q_OBJECT

public:
    explicit rezultate_joburi(QWidget *parent = nullptr,std::vector<std::string> v=std::vector<std::string>(),std::string id_angajat="");
    std::string angajator_id();
    ~rezultate_joburi();

private slots:
    void on_pushButton_modificare_clicked();

    void on_pushButton_recenzie_clicked();

private:
    Ui::rezultate_joburi *ui;
    std::vector<std::string> rezultate;
    void completare_lista();
    std::string id_angajat;
    adaugare_recenzie*recenzii;
};

#endif // REZULTATE_JOBURI_H
