#ifndef ADAUGARE_RECENZIE_H
#define ADAUGARE_RECENZIE_H

#include <QDialog>

namespace Ui {
class adaugare_recenzie;
}

class adaugare_recenzie : public QDialog
{
    Q_OBJECT

public:
    explicit adaugare_recenzie(QWidget *parent = nullptr,std::string id_angajator="");
    ~adaugare_recenzie();

private slots:
    void on_pushButton_trimite_clicked();

private:
    Ui::adaugare_recenzie *ui;
    std::string id_angajator;
};

#endif // ADAUGARE_RECENZIE_H
