#include "mainwindow.h"
#include "paginapornire.h"
#include <QApplication>
#include "inregistrareangajator.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaginaPornire p;
    p.show();
    return a.exec();
}
