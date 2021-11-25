/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
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
    QLabel *label_8;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QGroupBox *groupBox_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *line_new;
    QPushButton *pushButton_5;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *line_folder;
    QPushButton *pushButton_6;
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
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(350, 10, 361, 261));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(330, 290, 387, 69));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(groupBox_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(330, 360, 291, 91));
        widget = new QWidget(groupBox_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 281, 27));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        line_new = new QLineEdit(widget);
        line_new->setObjectName(QString::fromUtf8("line_new"));

        horizontalLayout_4->addWidget(line_new);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_4->addWidget(pushButton_5);

        widget1 = new QWidget(groupBox_4);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 60, 245, 27));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        line_folder = new QLineEdit(widget1);
        line_folder->setObjectName(QString::fromUtf8("line_folder"));

        horizontalLayout_5->addWidget(line_folder);

        pushButton_6 = new QPushButton(widget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_5->addWidget(pushButton_6);

        MainWindow->setCentralWidget(centralwidget);
        label_5->raise();
        label_4->raise();
        groupBox->raise();
        groupBox_2->raise();
        label_8->raise();
        groupBox_3->raise();
        groupBox_4->raise();
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
        label_8->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Image controls", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Metadata", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Change image", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Insert", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Manage galeries", nullptr));
        line_new->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Create new folder", nullptr));
        line_folder->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Select folder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
