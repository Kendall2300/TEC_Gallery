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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *line_User;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *line_Pass;
    QPushButton *SignIn;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *SignUp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 509);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, -30, 1111, 541));
        label_4->setPixmap(QPixmap(QString::fromUtf8("Since.png")));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(496, -14, 331, 511));
        label_5->setPixmap(QPixmap(QString::fromUtf8("TEC-Galery (2).png")));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 247, 151));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        line_User = new QLineEdit(groupBox);
        line_User->setObjectName(QString::fromUtf8("line_User"));

        horizontalLayout->addWidget(line_User);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        line_Pass = new QLineEdit(groupBox);
        line_Pass->setObjectName(QString::fromUtf8("line_Pass"));

        horizontalLayout_2->addWidget(line_Pass);


        verticalLayout->addLayout(horizontalLayout_2);

        SignIn = new QPushButton(groupBox);
        SignIn->setObjectName(QString::fromUtf8("SignIn"));

        verticalLayout->addWidget(SignIn);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 190, 251, 131));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 30, 201, 21));
        label_3->setOpenExternalLinks(false);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 50, 161, 20));
        SignUp = new QPushButton(groupBox_2);
        SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->setGeometry(QRect(70, 80, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        label_5->raise();
        label_4->raise();
        groupBox->raise();
        line_Pass->raise();
        label->raise();
        groupBox_2->raise();
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
        label_4->setText(QString());
        label_5->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Password: ", nullptr));
        SignIn->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        label_6->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "If you don't have an account,", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "pliss click in \"Sign Up\"", nullptr));
        SignUp->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
