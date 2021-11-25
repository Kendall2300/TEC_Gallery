/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *SignIn;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *line_User;
    QLineEdit *line_Pass;
    QLabel *label_3;
    QPushButton *SignUp;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 509);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SignIn = new QPushButton(centralwidget);
        SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->setGeometry(QRect(580, 120, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 80, 81, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 40, 81, 17));
        line_User = new QLineEdit(centralwidget);
        line_User->setObjectName(QString::fromUtf8("line_User"));
        line_User->setGeometry(QRect(500, 40, 271, 25));
        line_Pass = new QLineEdit(centralwidget);
        line_Pass->setObjectName(QString::fromUtf8("line_Pass"));
        line_Pass->setGeometry(QRect(500, 80, 271, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(440, 320, 341, 81));
        label_3->setOpenExternalLinks(false);
        SignUp = new QPushButton(centralwidget);
        SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->setGeometry(QRect(560, 380, 89, 25));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, -20, 1111, 541));
        label_4->setPixmap(QPixmap(QString::fromUtf8("TEC-Galery (1).png")));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(496, -14, 331, 511));
        label_5->setPixmap(QPixmap(QString::fromUtf8("TEC-Galery (2).png")));
        MainWindow->setCentralWidget(centralwidget);
        label_5->raise();
        label_4->raise();
        SignIn->raise();
        label->raise();
        label_2->raise();
        line_User->raise();
        line_Pass->raise();
        label_3->raise();
        SignUp->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SignIn->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "If you don't have an account, plis click in \"Sign Up\"", nullptr));
        SignUp->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
