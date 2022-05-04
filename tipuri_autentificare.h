#ifndef TIPURI_AUTENTIFICARE_H
#define TIPURI_AUTENTIFICARE_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class tipuri_autentificare;
}

class tipuri_autentificare : public QDialog
{
    Q_OBJECT

public:
    explicit tipuri_autentificare(QWidget *parent = nullptr);
    ~tipuri_autentificare();

private slots:
    void on_pushButton_angajat_clicked();

    void on_pushButton_angajator_clicked();

    void on_pushButton_admin_clicked();

private:
    Ui::tipuri_autentificare *ui;
    MainWindow*fereastra_conectare;
};

#endif // TIPURI_AUTENTIFICARE_H
