/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *newuser;
    QLineEdit *newpass;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(316, 524);
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 140, 131, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 180, 67, 17));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 320, 141, 51));
        newuser = new QLineEdit(centralwidget);
        newuser->setObjectName(QString::fromUtf8("newuser"));
        newuser->setGeometry(QRect(100, 140, 181, 25));
        newpass = new QLineEdit(centralwidget);
        newpass->setObjectName(QString::fromUtf8("newpass"));
        newpass->setGeometry(QRect(100, 180, 181, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-10, 0, 501, 491));
        label_3->setPixmap(QPixmap(QString::fromUtf8("Since.png")));
        SignUp->setCentralWidget(centralwidget);
        label_3->raise();
        label->raise();
        label_2->raise();
        pushButton->raise();
        newuser->raise();
        newpass->raise();
        menubar = new QMenuBar(SignUp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 316, 22));
        SignUp->setMenuBar(menubar);
        statusbar = new QStatusBar(SignUp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SignUp->setStatusBar(statusbar);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QMainWindow *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "Create User", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
