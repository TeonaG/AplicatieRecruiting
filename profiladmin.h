#ifndef PROFILADMIN_H
#define PROFILADMIN_H
#include "IUser.h"
#include <QDialog>

namespace Ui {
class profiladmin;
}

class profiladmin : public QDialog
{
    Q_OBJECT

public:
    explicit profiladmin(QWidget *parent = nullptr,IUser*user=nullptr);
    ~profiladmin();

private:
    Ui::profiladmin *ui;
    IUser* user;
};

#endif // PROFILADMIN_H
