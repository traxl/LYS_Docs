/********************************************************************************
** Form generated from reading UI file 'verbunden.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERBUNDEN_H
#define UI_VERBUNDEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Verbunden
{
public:
    QListView *List;
    QGroupBox *groupBox;
    QLabel *Data;
    QLineEdit *Chat;
    QPushButton *Send;
    QPushButton *Disconnect;

    void setupUi(QWidget *Verbunden)
    {
        if (Verbunden->objectName().isEmpty())
            Verbunden->setObjectName(QStringLiteral("Verbunden"));
        Verbunden->resize(553, 339);
        List = new QListView(Verbunden);
        List->setObjectName(QStringLiteral("List"));
        List->setGeometry(QRect(10, 10, 331, 281));
        groupBox = new QGroupBox(Verbunden);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(350, 0, 191, 291));
        Data = new QLabel(groupBox);
        Data->setObjectName(QStringLiteral("Data"));
        Data->setGeometry(QRect(70, 120, 111, 41));
        Chat = new QLineEdit(Verbunden);
        Chat->setObjectName(QStringLiteral("Chat"));
        Chat->setGeometry(QRect(10, 300, 331, 20));
        Send = new QPushButton(Verbunden);
        Send->setObjectName(QStringLiteral("Send"));
        Send->setGeometry(QRect(350, 300, 75, 23));
        Disconnect = new QPushButton(Verbunden);
        Disconnect->setObjectName(QStringLiteral("Disconnect"));
        Disconnect->setGeometry(QRect(430, 300, 111, 23));

        retranslateUi(Verbunden);

        QMetaObject::connectSlotsByName(Verbunden);
    } // setupUi

    void retranslateUi(QWidget *Verbunden)
    {
        Verbunden->setWindowTitle(QApplication::translate("Verbunden", "Verbindungsfenster", 0));
#ifndef QT_NO_TOOLTIP
        List->setToolTip(QApplication::translate("Verbunden", "Teilnehmerliste", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("Verbunden", "Userdaten", 0));
        Data->setText(QApplication::translate("Verbunden", "DATA", 0));
        Send->setText(QApplication::translate("Verbunden", "Senden", 0));
        Disconnect->setText(QApplication::translate("Verbunden", "Trennen", 0));
    } // retranslateUi

};

namespace Ui {
    class Verbunden: public Ui_Verbunden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERBUNDEN_H
