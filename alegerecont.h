#ifndef ALEGERECONT_H
#define ALEGERECONT_H

#include <QDialog>
#include "inregistrareangajat.h"
#include "inregistrareangajator.h"
#include "IUser.h"

namespace Ui {
class AlegereCont;
}

class AlegereCont : public QDialog
{
    Q_OBJECT

public:
    explicit AlegereCont(QWidget *parent = nullptr);
    ~AlegereCont();

private slots:
    void on_angajator_clicked();

    void on_viitor_angajat_clicked();

private:
    Ui::AlegereCont *ui;
    InregistrareAngajat*inregistrareangajat;
    InregistrareAngajator*inregistrareangajator;
};

#endif // ALEGERECONT_H
