#include "lanyourself.h"
#include "ui_lanyourself.h"
#include "verbunden.h"
#include "iostream"
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
    ui->pw->setText("Irgendwas");
}
void LanYourself::ProNew() // defined in .h under public/private slots:
{
    ui->ProPath->setText("Neues Profil");
}
void LanYourself::ProLoad() // defined in .h under public/private slots:
{
    ui->ProPath->setText("Profil Laden");
}

