#include "profiladmin.h"
#include "ui_profiladmin.h"

profiladmin::profiladmin(QWidget *parent,IUser*u) :
    QDialog(parent),
    ui(new Ui::profiladmin),user(u)
{
    ui->setupUi(this);
    std::vector<std::string> v;
    v = u->getInfoProfil();
    std::string header = "Bine ai venit, " + v[0] + " " + v[1];
    ui->label_welcome->setText(header.c_str());


}

profiladmin::~profiladmin()
{
    delete ui;
}
