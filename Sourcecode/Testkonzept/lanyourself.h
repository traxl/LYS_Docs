#ifndef LANYOURSELF_H
#define LANYOURSELF_H

#include <QMainWindow>

namespace Ui {
class LanYourself;
}

class LanYourself : public QMainWindow
{
    Q_OBJECT

public:
    //QString * p_bn;
    explicit LanYourself(QWidget *parent = 0);
    ~LanYourself();
private slots:
    void Connect();
    void Save();
    void ProLoad();
    void setParam();
    QStringList getParam();
    QString getNewLine();
    QString getOldLine();
    void setOldLine(QString value);
    void setNewLine(QString value);
    const char* toCharP(QString value);
    std::fstream& GotoLine(std::fstream& file, int num);
    int getLineNumber();
    void setLineNumber(int lineN);
    void setConfigPath(std::string path);
    std::string getConfigPath();
private:
    Ui::LanYourself *ui;
    QString oldLine;
    QString newLine;
    int lineN;
    std::string ConfigPath;
};


#endif // LANYOURSELF_H
