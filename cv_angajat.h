#ifndef CV_ANGAJAT_H
#define CV_ANGAJAT_H

#include <QDialog>

namespace Ui {
class CV_Angajat;
}

class CV_Angajat : public QDialog
{
    Q_OBJECT

public:
    explicit CV_Angajat(QWidget *parent = nullptr);
    ~CV_Angajat();

private:
    Ui::CV_Angajat *ui;
};

#endif // CV_ANGAJAT_H
