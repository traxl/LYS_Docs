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


    //ui->pw->setText("Irgendwas");
    std::string line;
    ifstream myfile ("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/freelan.txt");
    while ( getline(myfile,line) )
    {
        ui->bname->setText("mrxox04");
        ui->rname->setText("Chillerrunde");
        // if(line.find(variable,0) != string::npos)
        //{
        ui->pw->setText(QString::fromStdString(line));

        //cout << line << "\n";
       // }
    }
    myfile.close();
}
void LanYourself::ProNew() // defined in .h under public/private slots:
{
    ofstream myfile;
    myfile.open ("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/freelan.txt");
    myfile << "Writing this to a file.\n";
    ui->ProPath->setText(QString::fromStdString("Success"));
    myfile.close();
}
void LanYourself::ProLoad() // defined in .h under public/private slots:
{
    ui->ProPath->setText("Profil Laden");
}

