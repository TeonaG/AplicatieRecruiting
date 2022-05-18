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
    explicit cv_de_modificat(QWidget *parent = nullptr,std::string id_cv="");
    ~cv_de_modificat();

private slots:
    void on_pushButton_salvare_clicked();

private:
    Ui::cv_de_modificat *ui;
    std::string id_cv;
};

#endif // CV_DE_MODIFICAT_H
