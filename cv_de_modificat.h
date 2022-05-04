#ifndef CV_DE_MODIFICAT_H
#define CV_DE_MODIFICAT_H

#include <QDialog>

namespace Ui {
class cv_de_modificat;
}

class cv_de_modificat : public QDialog
{
    Q_OBJECT

public:
    explicit cv_de_modificat(QWidget *parent = nullptr);
    ~cv_de_modificat();

private:
    Ui::cv_de_modificat *ui;
};

#endif // CV_DE_MODIFICAT_H
