#include "verbunden.h"
#include "ui_verbunden.h"

Verbunden::Verbunden(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Verbunden)
{
    ui->setupUi(this);
    connect(ui->Disconnect,SIGNAL(released()),this,SLOT(Disconnect()));
    connect(ui->Send,SIGNAL(released()),this,SLOT(Send()));
}

Verbunden::~Verbunden()
{
    delete ui;
}
void Verbunden::Disconnect(){
    ui->Data->setText("Disconnected");
    ui->Chat->setText("Disconnected");
}
void Verbunden::Send(){
    ui->Data->setText("Sended");
    ui->Chat->setText("Sended");
}
