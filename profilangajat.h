#ifndef PROFILANGAJAT_H
#define PROFILANGAJAT_H

#include <QDialog>

namespace Ui {
class profilAngajat;
}

class profilAngajat : public QDialog
{
    Q_OBJECT

public:
    explicit profilAngajat(QWidget *parent = nullptr);
    ~profilAngajat();

private:
    Ui::profilAngajat *ui;
};

#endif // PROFILANGAJAT_H
