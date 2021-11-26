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
    QLabel *label_8;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *line_new;
    QPushButton *pushButton_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *line_folder;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *line_nameimage;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *meta_author;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLineEdit *meta_name;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLineEdit *meta_year;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *meta_size;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *meta_des;
    QPushButton *pushButton_7;
    QGroupBox *groupBox_7;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1180, 509);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, -40, 1111, 541));
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
        label_8->setGeometry(QRect(370, 80, 361, 261));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(360, 370, 387, 69));
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
        groupBox_4->setGeometry(QRect(10, 350, 291, 91));
        layoutWidget = new QWidget(groupBox_4);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 281, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        line_new = new QLineEdit(layoutWidget);
        line_new->setObjectName(QString::fromUtf8("line_new"));

        horizontalLayout_4->addWidget(line_new);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_4->addWidget(pushButton_5);

        layoutWidget1 = new QWidget(groupBox_4);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 60, 245, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        line_folder = new QLineEdit(layoutWidget1);
        line_folder->setObjectName(QString::fromUtf8("line_folder"));

        horizontalLayout_5->addWidget(line_folder);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_5->addWidget(pushButton_6);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(400, 10, 281, 61));
        layoutWidget2 = new QWidget(groupBox_5);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 30, 239, 27));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        line_nameimage = new QLineEdit(layoutWidget2);
        line_nameimage->setObjectName(QString::fromUtf8("line_nameimage"));

        horizontalLayout_6->addWidget(line_nameimage);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(790, 190, 381, 211));
        verticalLayout_2 = new QVBoxLayout(groupBox_6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_7->addWidget(label_9);

        meta_author = new QLineEdit(groupBox_6);
        meta_author->setObjectName(QString::fromUtf8("meta_author"));

        horizontalLayout_7->addWidget(meta_author);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_8->addWidget(label_10);

        meta_name = new QLineEdit(groupBox_6);
        meta_name->setObjectName(QString::fromUtf8("meta_name"));

        horizontalLayout_8->addWidget(meta_name);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        meta_year = new QLineEdit(groupBox_6);
        meta_year->setObjectName(QString::fromUtf8("meta_year"));

        horizontalLayout_9->addWidget(meta_year);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        meta_size = new QLineEdit(groupBox_6);
        meta_size->setObjectName(QString::fromUtf8("meta_size"));

        horizontalLayout_10->addWidget(meta_size);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_11->addWidget(label_13);

        meta_des = new QLineEdit(groupBox_6);
        meta_des->setObjectName(QString::fromUtf8("meta_des"));

        horizontalLayout_11->addWidget(meta_des);


        verticalLayout_2->addLayout(horizontalLayout_11);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(910, 410, 151, 41));
        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(790, 30, 411, 151));
        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 20, 351, 121));
        MainWindow->setCentralWidget(centralwidget);
        label_5->raise();
        label_4->raise();
        groupBox->raise();
        groupBox_2->raise();
        label_8->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        groupBox_5->raise();
        groupBox_6->raise();
        pushButton_7->raise();
        groupBox_7->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1180, 22));
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
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Give your image a name", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Update metadata", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Author:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Creation year:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Size:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Description:", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MainWindow", "Image Metadata", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
