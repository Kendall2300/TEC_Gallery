/********************************************************************************
** Form generated from reading UI file 'metadata.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METADATA_H
#define UI_METADATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_metadata
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *metadata)
    {
        if (metadata->objectName().isEmpty())
            metadata->setObjectName(QString::fromUtf8("metadata"));
        metadata->resize(800, 600);
        centralwidget = new QWidget(metadata);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 40, 241, 151));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 390, 89, 25));
        metadata->setCentralWidget(centralwidget);
        menubar = new QMenuBar(metadata);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        label->setText(QCoreApplication::translate("metadata", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("metadata", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class metadata: public Ui_metadata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METADATA_H
