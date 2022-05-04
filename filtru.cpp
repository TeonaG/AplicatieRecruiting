#include "filtru.h"
#include "ui_filtru.h"

filtru::filtru(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filtru)
{
    ui->setupUi(this);
}

filtru::~filtru()
{
    delete ui;
}

