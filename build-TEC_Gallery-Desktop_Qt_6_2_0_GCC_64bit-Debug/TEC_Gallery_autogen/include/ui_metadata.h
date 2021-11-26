/********************************************************************************
** Form generated from reading UI file 'metadata.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METADATA_H
#define UI_METADATA_H

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

class Ui_metadata
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *meta_author;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *meta_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *meta_year;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *meta_size;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *meta_des;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *metadata)
    {
        if (metadata->objectName().isEmpty())
            metadata->setObjectName(QString::fromUtf8("metadata"));
        metadata->resize(672, 525);
        centralwidget = new QWidget(metadata);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 370, 121, 41));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 260, 381, 211));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        meta_author = new QLineEdit(groupBox);
        meta_author->setObjectName(QString::fromUtf8("meta_author"));

        horizontalLayout_2->addWidget(meta_author);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        meta_name = new QLineEdit(groupBox);
        meta_name->setObjectName(QString::fromUtf8("meta_name"));

        horizontalLayout->addWidget(meta_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        meta_year = new QLineEdit(groupBox);
        meta_year->setObjectName(QString::fromUtf8("meta_year"));

        horizontalLayout_3->addWidget(meta_year);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        meta_size = new QLineEdit(groupBox);
        meta_size->setObjectName(QString::fromUtf8("meta_size"));

        horizontalLayout_4->addWidget(meta_size);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        meta_des = new QLineEdit(groupBox);
        meta_des->setObjectName(QString::fromUtf8("meta_des"));

        horizontalLayout_5->addWidget(meta_des);


        verticalLayout->addLayout(horizontalLayout_5);

        metadata->setCentralWidget(centralwidget);
        menubar = new QMenuBar(metadata);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 672, 22));
        metadata->setMenuBar(menubar);
        statusbar = new QStatusBar(metadata);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        metadata->setStatusBar(statusbar);

        retranslateUi(metadata);

        QMetaObject::connectSlotsByName(metadata);
    } // setupUi

    void retranslateUi(QMainWindow *metadata)
    {
        metadata->setWindowTitle(QCoreApplication::translate("metadata", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("metadata", "Update", nullptr));
        groupBox->setTitle(QCoreApplication::translate("metadata", "Update metadata", nullptr));
        label_3->setText(QCoreApplication::translate("metadata", "Author:", nullptr));
        label_2->setText(QCoreApplication::translate("metadata", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("metadata", "Creation year:", nullptr));
        label_5->setText(QCoreApplication::translate("metadata", "Size:", nullptr));
        label_6->setText(QCoreApplication::translate("metadata", "Description:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class metadata: public Ui_metadata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METADATA_H
