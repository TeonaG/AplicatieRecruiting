#ifndef PROFILANGAJATOR_H
#define PROFILANGAJATOR_H
#include "IUser.h"
#include <QDialog>

namespace Ui {
class profilangajator;
}

class profilangajator : public QDialog
{
    Q_OBJECT

public:
    explicit profilangajator(QWidget *parent = nullptr,IUser*user=nullptr);
    ~profilangajator();

private:
    Ui::profilangajator *ui;
    IUser* user;
};

#endif // PROFILANGAJATOR_H
