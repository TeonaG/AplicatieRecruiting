#include "profilangajat.h"
#include "ui_profilangajat.h"
#include <QApplication>
#include <QLabel>

profilAngajat::profilAngajat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profilAngajat)
{
    ui->setupUi(this);
  //  ui->label->setText(QString::fromStdString("student"));
}

profilAngajat::~profilAngajat()
{
    delete ui;
}
