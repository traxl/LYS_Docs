#ifndef CONFIGEDITOR_H
#define CONFIGEDITOR_H

#include <fstream>
#include <string>

class Configeditor
{
private:
    std::fstream file;
    std::string path;
    std::string cfg;
public:
    Configeditor(std::string path);
    void openf();
    void closef();
    void createConfig();
    void edit(std::string key, std::string value);
    void read();
    void write();
};

#endif // CONFIGEDITOR_H
