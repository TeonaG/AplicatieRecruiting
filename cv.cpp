#include "cv.h"
#include "ui_cv.h"

CV::CV(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CV)
{
    ui->setupUi(this);
}

CV::~CV()
{
    delete ui;
}
