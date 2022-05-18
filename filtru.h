#ifndef FILTRU_H
#define FILTRU_H
#include <vector>
#include <string>
#include <QDialog>
#include "client.h"
#include "parser.h"
#include "rezultate_joburi.h"

namespace Ui {
class filtru;
}

class filtru : public QDialog
{
    Q_OBJECT

public:
    explicit filtru(QWidget *parent = nullptr,std::string id_angajat="");
    std::vector<std::string> domenii(Client&);
    std::vector<std::string> functii(Client&);
    std::vector<std::string> angajatori(Client&);
    std::vector<std::string> judete(Client&);
    std::vector<std::string> orase(Client&);
    std::vector<std::string> programe_lucru(Client&);
    std::vector<std::string> rezultate_cautare(std::vector<std::string>);
    ~filtru();

private slots:

    void on_pushButton_cautare_clicked();

private:
    Ui::filtru *ui;
    rezultate_joburi*rezultate;
    std::string id_angajat;
};

#endif // FILTRU_H
