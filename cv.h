#ifndef CV_H
#define CV_H

#include <QDialog>

namespace Ui {
class CV;
}

class CV : public QDialog
{
    Q_OBJECT

public:
    explicit CV(QWidget *parent = nullptr);
    ~CV();

private:
    Ui::CV *ui;
};

#endif // CV_H
