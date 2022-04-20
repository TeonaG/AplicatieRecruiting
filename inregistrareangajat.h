#ifndef INREGISTRAREANGAJAT_H
#define INREGISTRAREANGAJAT_H

#include <QDialog>
#include "profilangajat.h"
namespace Ui {
class InregistrareAngajat;
}

class InregistrareAngajat : public QDialog
{
    Q_OBJECT

public:
    explicit InregistrareAngajat(QWidget *parent = nullptr);
    ~InregistrareAngajat();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::InregistrareAngajat *ui;
    profilAngajat*profilangajat;
};

#endif // INREGISTRAREANGAJAT_H
