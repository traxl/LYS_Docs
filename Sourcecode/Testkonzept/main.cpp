#include "lanyourself.h"
#include <QApplication>
#include "verbunden.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   // QString bn, rn, pw;

    Verbunden v;
    v.show();
    LanYourself w;
    //w.p_bn = &bn;
    w.show();

    //w.close();




    return a.exec();
}
