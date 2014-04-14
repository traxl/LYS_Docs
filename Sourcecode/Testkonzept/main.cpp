#include "lanyourself.h"
#include <QApplication>
#include "verbunden.h"
#include "search.h"
#include "configeditor.h"

int main(int argc, char *argv[])
{
    Configeditor *ss = new Configeditor("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/lan.cfg");

    ss->openf();
    ss->read();
    ss->edit("fscp","listen_on","0.0.0.0:12000");
    ss->edit("fscp","contact","10.0.104.144:12000");
    ss->edit("tap_adapter","ipv4_address_prefix_length","9.0.0.1/24");
    ss->edit("tap_adapter","dhcp_proxy_enabled","yes");
    ss->edit("tap_adapter","dhcp_server_ipv4_address_prefix_length","9.0.0.0/24");
    ss->edit("security","signature_certificate_file","D:\Other\Freelan\config\alex.crt");
    ss->edit("security","signature_private_key_file","D:\Other\Freelan\config\alex.key");
    ss->edit("security","authority_certificate_file","D:\Other\Freelan\config\ca.crt");

    //ss->createConfig();
    //ss->edit("server","enabled","true");
    //->edit("server","public_endpoint","127.0.0.2");
    //ss->edit("server","public_endp213oint","127.0123.0.1");
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
