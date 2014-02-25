#include "lanyourself.h"
#include "ui_lanyourself.h"
#include "verbunden.h"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <limits>
using namespace std;
//#include <string>

LanYourself::LanYourself(QWidget *parent) : //, String& bn) :
    QMainWindow(parent),
    ui(new Ui::LanYourself)
{


    //ui->bname->setText("ASdfklsfökldsh");
    ui->setupUi(this);
    connect(ui->Connect, SIGNAL( released() ), this, SLOT(Connect() ) );
    connect(ui->ProNew,SIGNAL(released()),this,SLOT(Save()));
    connect(ui->ProLoad,SIGNAL(released()),this,SLOT(ProLoad()));
    connect(ui->setButton,SIGNAL(released()),this,SLOT(setParam()));
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
std::fstream& LanYourself::GotoLine(std::fstream& file,int num){
    file.seekg (0, file.beg);
    for(int i=0; i < num - 1; ++i){
        file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    return file;
}
void LanYourself::Save() // defined in .h under public/private slots:
{

    std::string line;
    fstream myfile;
    myfile.open("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/freelan.cfg");
    bool firstLine=true;
    QString search = LanYourself::getOldLine();
    while ( getline(myfile,line) )
    {
    std::size_t found = line.find(search.toStdString());
    std::size_t found1 = line.find("#");
    cout <<"Gefunden: "<< found1 << endl;
    if(found1 > 0&&firstLine==false)
    if(found!=std::string::npos)
    {
        this->GotoLine(myfile,this->getLineNumber());
        myfile.write(this->toCharP(ui->out->toPlainText()),this->getNewLine().length());
                 break;
             }
     firstLine = false;
     }
     myfile.close();


    //ofstream myfile;
    //myfile.open ("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/freelan.txt");
    //myfile << "New Profile";
    //ui->ProPath->setText(QString::fromStdString("New Profile created"));
    //myfile.close();
}
void LanYourself::setParam() // defined in .h under public/private slots:
{
    QStringList qsl = this->getParam();
    qsl.append(qsl.at(1));
    qsl.insert(1,ui->ProPath->text());
    QString s=""+qsl.at(0)+"="+qsl.at(1);
    this->setNewLine(s);
    ui->out->setText(s);


    //ofstream myfile;
    //myfile.open ("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/freelan.txt");
    //myfile << "New Profile";
    //ui->ProPath->setText(QString::fromStdString("New Profile created"));
    //myfile.close();
}
QStringList LanYourself::getParam()
{
    QString splitIt = ui->out->toPlainText();
    QStringList qsl = splitIt.split("=");
    return qsl;
}

void LanYourself::ProLoad() // defined in .h under public/private slots:
{
   //std::string line;
   //fstream mf;
   //mf.open("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/freelan.cfg");
   //while(getline(mf,line)){
    //   std::size_t found = line.find("enable=");
      // if(found != std::string::npos){
        //   ui->ProPath->setText(QString::fromStdString(line));
          // std::size_t found = line.find("=");
          // if(found != std::string::npos){
            //   long posi= mf.tellg();
             //  mf.seekp(posi-(line.length()-(found-6)));
              // mf.write("Hallo",5);
              // break;
          // }

           //nur ein test
      // }
   //}
   //mf.close();
   std::string line;
   fstream myfile ("C:/Users/Alex/Documents/LYS_Docs/Sourcecode/freelan.cfg");
   bool firstLine=true;
   this->setLineNumber(1);
   QString search = ui->ProPath->text();
   while ( getline(myfile,line) )
   {
   std::size_t found = line.find(search.toStdString());
   std::size_t found1 = line.find("#");
   cout <<"Gefunden: "<< found1 << endl;
   if(found1 > 0&&firstLine==false)
   if(found!=std::string::npos)
   {
    ui->out->setText(QString::fromStdString(line));
    this->setOldLine(QString::fromStdString(line));
                break;
            }
    firstLine = false;
    this->setLineNumber(this->getLineNumber()+1);
    }
    cout<<this->getLineNumber();
    myfile.close();
}

const char* LanYourself::toCharP(QString value){
    QByteArray ba = value.toLocal8Bit();
    const char *c_str2 = ba.data();
    return c_str2;
}

void LanYourself::setOldLine(QString value){
    this->oldLine=value;
}

void LanYourself::setNewLine(QString value){
    this->newLine=value;
}

QString LanYourself::getOldLine(){
    return this->oldLine;
}

QString LanYourself::getNewLine(){
    return this->newLine;
}
int LanYourself::getLineNumber(){
    return this->lineN;
}
void LanYourself::setLineNumber(int lineN){
    this->lineN=lineN;
}
