#include "configeditor.h"
#include <iostream>
using namespace std;

std::fstream file;
std::string path ="fff.txt";
std::string cfg;

Configeditor::Configeditor(string path){
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
void Configeditor::edit(string father, string key, string value){
    bool b = true,err = false;
    size_t t3 = 0,zt;
    do{
        size_t t1 = this->cfg.find("\n",t3);
        size_t t2 = this->cfg.find("\n",t1+1);
        t3 = t2;
        string str = this->cfg.substr(t1,t2-t1);
        size_t rau = str.find("#");
        //cout << rau <<endl;
        if(rau > 1){
            size_t fath = str.find("[");
            if(fath != std::string::npos){
                //cout << "TRTTTT"<<endl;
                if(str.find("["+father+"]")!=std::string::npos){
                    err =true;
                    zt=t3;
                }else{
                    if(err){
                        this->cfg.replace(zt,0,"\n"+key+"="+value);
                        return;
                    }
                }
            }
            size_t found  = str.find(key);
            if(found != std::string::npos){
                if(err){
                    found  = this->cfg.find(key,t1);
                    size_t endln = this->cfg.find("\n",found);
                    size_t start = this->cfg.find("=",found);
                    this->cfg.replace(start+1,((endln)-(start+1)),value);
                    //cout << this->cfg << endl;
                    //cout << "Test: " << endln << endl;
                    //cout << "Test1: " << start << endl;
                    //cout << "Test2: " << found << endl;
                    b = false;
                }
            }
        }
    }while(b && t3!=std::string::npos);
}
void Configeditor::remove(string father, string key){
    bool b = true,err = false;
    size_t t3 = 0;
    do{
        size_t t1 = this->cfg.find("\n",t3);
        size_t t2 = this->cfg.find("\n",t1+1);
        t3 = t2;
        string str = this->cfg.substr(t1,t2-t1);
        size_t rau = str.find("#");
        //cout << rau <<endl;
        if(rau > 1){
            size_t fath = str.find("[");
            if(fath != std::string::npos){
                if(str.find("["+father+"]")!=std::string::npos){
                    err =true;
                }
            }
            size_t found  = str.find(key);
            if(found != std::string::npos){
                if(err){
                    this->cfg.replace(t1,t2-t1,"");
                    //cout << this->cfg << endl;
                    //cout << "Test: " << endln << endl;
                    //cout << "Test1: " << start << endl;
                    //cout << "Test2: " << found << endl;
                    b = false;
                }
            }
        }
    }while(b && t3!=std::string::npos);
}

void Configeditor::read(){
    string line;
    while ( getline(this->file,line) )
    {
        this->cfg = this->cfg + line  + "\n";
    }
    //cout << this->cfg << endl;
}
void Configeditor::write(){
    this->file.close();
    this->file.open(this->path.data(),std::fstream::out | ios::trunc);
    this->file << this->cfg;
    //cout << this->cfg << endl;
    this->file.close();
    this->openf();
}
