#include "lanyourself.h"
#include "ui_lanyourself.h"
#include "verbunden.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//#include <string>

LanYourself::LanYourself(QWidget *parent) : //, String& bn) :
    QMainWindow(parent),
    ui(new Ui::LanYourself)
{


    //ui->bname->setText("ASdfklsfökldsh");
    ui->setupUi(this);
    connect(ui->Connect, SIGNAL( released() ), this, SLOT(Connect() ) );
    connect(ui->ProNew,SIGNAL(released()),this,SLOT(ProNew()));
    connect(ui->ProLoad,SIGNAL(released()),this,SLOT(ProLoad()));
}


LanYourself::~LanYourself()
{
    delete ui;

}


void LanYourself::Connect() // defined in .h under public/private slots:
{

    ui->bname->setText("mrxox04");
    ui->rname->setText("Chillerrunde");
    ui->pw->setText("password");

}
void LanYourself::ProNew() // defined in .h under public/private slots:
{
    ofstream myfile;
    myfile.open ("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/freelan.txt");
    myfile << "New Profile";
    ui->ProPath->setText(QString::fromStdString("New Profile created"));
    myfile.close();
}
void LanYourself::ProLoad() // defined in .h under public/private slots:
{
    std::string line;
    ifstream myfile ("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/freelan.cfg");
    QString search = ui->ProPath->text();
    ui->ProPath->setText(QString::fromStdString("Kein Ergebniss"));
    while ( getline(myfile,line) )
    {
        std::size_t found = line.find(search.toStdString());
        std::size_t found1 = line.find("#");
        //cout <<"Gefunden: "<< found1 << endl;
        if(found1 > 0)
            if(found!=std::string::npos)
            {
                ui->ProPath->setText(QString::fromStdString(line));
        //cout << line << "\n";
                break;
            }
    }
    myfile.close();
}

