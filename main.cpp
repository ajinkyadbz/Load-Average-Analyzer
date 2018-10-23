#include "main.h"
#include "goku.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    goku *body = new goku();
    body->show();
    return a.exec();
}
