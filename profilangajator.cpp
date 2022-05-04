#include "profilangajator.h"
#include "ui_profilangajator.h"

profilangajator::profilangajator(QWidget *parent,IUser*u) :
    QDialog(parent),
    ui(new Ui::profilangajator),user(u)
{
    ui->setupUi(this);
    std::vector<std::string> v = user->getInfoProfil();
    std::string header = "Bine ai venit, " + v[0];
    ui->label_welcome->setText(header.c_str());
}

profilangajator::~profilangajator()
{
    delete ui;
}
