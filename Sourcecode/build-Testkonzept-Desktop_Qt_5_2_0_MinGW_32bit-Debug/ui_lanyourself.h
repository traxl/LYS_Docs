/********************************************************************************
** Form generated from reading UI file 'lanyourself.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANYOURSELF_H
#define UI_LANYOURSELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LanYourself
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *Connect;
    QGroupBox *groupBox_2;
    QLineEdit *pw;
    QGroupBox *groupBox;
    QLineEdit *rname;
    QGroupBox *groupBox_3;
    QLineEdit *bname;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QLineEdit *ProPath;
    QPushButton *ProNew;
    QToolButton *ProLoad;
    QLabel *label_3;
    QPushButton *setButton;
    QTextEdit *out;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LanYourself)
    {
        if (LanYourself->objectName().isEmpty())
            LanYourself->setObjectName(QStringLiteral("LanYourself"));
        LanYourself->resize(264, 311);
        LanYourself->setFocusPolicy(Qt::StrongFocus);
        LanYourself->setDocumentMode(false);
        centralWidget = new QWidget(LanYourself);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 261, 291));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Connect = new QPushButton(tab);
        Connect->setObjectName(QStringLiteral("Connect"));
        Connect->setGeometry(QRect(40, 200, 171, 51));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 130, 231, 51));
        pw = new QLineEdit(groupBox_2);
        pw->setObjectName(QStringLiteral("pw"));
        pw->setGeometry(QRect(10, 20, 211, 20));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 231, 51));
        rname = new QLineEdit(groupBox);
        rname->setObjectName(QStringLiteral("rname"));
        rname->setGeometry(QRect(10, 20, 211, 20));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 231, 51));
        bname = new QLineEdit(groupBox_3);
        bname->setObjectName(QStringLiteral("bname"));
        bname->setGeometry(QRect(10, 20, 211, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 231, 121));
        ProPath = new QLineEdit(groupBox_5);
        ProPath->setObjectName(QStringLiteral("ProPath"));
        ProPath->setGeometry(QRect(10, 40, 181, 20));
        ProNew = new QPushButton(groupBox_5);
        ProNew->setObjectName(QStringLiteral("ProNew"));
        ProNew->setGeometry(QRect(40, 80, 71, 31));
        ProLoad = new QToolButton(groupBox_5);
        ProLoad->setObjectName(QStringLiteral("ProLoad"));
        ProLoad->setGeometry(QRect(190, 40, 25, 19));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 46, 13));
        setButton = new QPushButton(groupBox_5);
        setButton->setObjectName(QStringLiteral("setButton"));
        setButton->setGeometry(QRect(120, 80, 71, 31));
        out = new QTextEdit(tab_2);
        out->setObjectName(QStringLiteral("out"));
        out->setGeometry(QRect(20, 150, 211, 101));
        tabWidget->addTab(tab_2, QString());
        LanYourself->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LanYourself);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LanYourself->setStatusBar(statusBar);
        QWidget::setTabOrder(bname, rname);
        QWidget::setTabOrder(rname, pw);
        QWidget::setTabOrder(pw, ProPath);
        QWidget::setTabOrder(ProPath, Connect);
        QWidget::setTabOrder(Connect, tabWidget);

        retranslateUi(LanYourself);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LanYourself);
    } // setupUi

    void retranslateUi(QMainWindow *LanYourself)
    {
        LanYourself->setWindowTitle(QApplication::translate("LanYourself", "LanYourself", 0));
        Connect->setText(QApplication::translate("LanYourself", "Verbinden", 0));
        groupBox_2->setTitle(QApplication::translate("LanYourself", "Passwort", 0));
        groupBox->setTitle(QApplication::translate("LanYourself", "Raumname", 0));
        groupBox_3->setTitle(QApplication::translate("LanYourself", "Benutzername", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("LanYourself", "Verbinden", 0));
        groupBox_5->setTitle(QApplication::translate("LanYourself", "Programmprofile", 0));
        ProPath->setText(QString());
        ProNew->setText(QApplication::translate("LanYourself", "Speichern", 0));
        ProLoad->setText(QApplication::translate("LanYourself", "...", 0));
        label_3->setText(QApplication::translate("LanYourself", "Pfad", 0));
        setButton->setText(QApplication::translate("LanYourself", "Setzen", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("LanYourself", "Optionen", 0));
    } // retranslateUi

};

namespace Ui {
    class LanYourself: public Ui_LanYourself {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANYOURSELF_H
