#include "lanyourself.h"
#include <QApplication>
#include "verbunden.h"
#include "search.h"
#include "configeditor.h"

int main(int argc, char *argv[])
{
    Configeditor *ss = new Configeditor("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/test.txt");

    ss->openf();
    ss->read();
    //ss->createConfig();
    ss->edit("enable","true");
    ss->edit("ip","localhost");
    ss->write();
    ss->closef();
    QApplication a(argc, argv);

   // QString bn, rn, pw;

    //Verbunden v;
    //v.show();
    LanYourself w;
    //w.p_bn = &bn;
    w.show();

    //w.close();
    return a.exec();
}
