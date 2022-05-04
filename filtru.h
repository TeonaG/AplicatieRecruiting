#ifndef FILTRU_H
#define FILTRU_H

#include <QDialog>

namespace Ui {
class filtru;
}

class filtru : public QDialog
{
    Q_OBJECT

public:
    explicit filtru(QWidget *parent = nullptr);
    ~filtru();

private slots:

private:
    Ui::filtru *ui;
};

#endif // FILTRU_H
