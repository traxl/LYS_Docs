#include "configeditor.h"
#include <iostream>
using namespace std;

std::fstream file;
std::string path ="fff.txt";
std::string cfg;

Configeditor::Configeditor(std::string path){
    this->path=path;
}
void Configeditor::openf(){
     this->file.open(this->path.data(),std::fstream::in);
}
void Configeditor::closef(){
    this->file.close();
}
void Configeditor::createConfig(){
    this->file << this->cfg;
}
void Configeditor::edit(std::string key, std::string value){
    if(!this->cfg.empty()){
        size_t found  = this->cfg.find(key);
        size_t endln = this->cfg.find("\n",found+1);
        size_t start = this->cfg.find("=",found+1);
        this->cfg.replace(start+1,(endln)-(start+1),value);
        //cout << this->cfg << endl;
        //cout << "Test: " << endln << endl;
        //cout << "Test1: " << found << endl;
    }
}
void Configeditor::read(){
    string line;
    while ( getline(this->file,line) )
    {
        this->cfg = this->cfg + line  + "\n";
    }
    cout << this->cfg << endl;
}
void Configeditor::write(){
    this->file.open(this->path.data(),std::fstream::out | ios::trunc);
    this->file << this->cfg;
    cout << this->cfg << endl;
    this->openf();
}
