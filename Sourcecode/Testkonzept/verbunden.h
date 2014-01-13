#ifndef VERBUNDEN_H
#define VERBUNDEN_H

#include <QWidget>

namespace Ui {
class Verbunden;
}

class Verbunden : public QWidget
{
    Q_OBJECT

public:
    explicit Verbunden(QWidget *parent = 0);
    ~Verbunden();

private:
    Ui::Verbunden *ui;

private slots:
    void Send();
    void Disconnect();
};



#endif // VERBUNDEN_H
