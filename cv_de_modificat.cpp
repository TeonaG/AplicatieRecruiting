#include "cv_de_modificat.h"
#include "ui_cv_de_modificat.h"

cv_de_modificat::cv_de_modificat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cv_de_modificat)
{
    ui->setupUi(this);
}

cv_de_modificat::~cv_de_modificat()
{
    delete ui;
}
