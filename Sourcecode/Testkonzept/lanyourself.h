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
    void ProNew();
    void ProLoad();
private:
    Ui::LanYourself *ui;
};


#endif // LANYOURSELF_H
