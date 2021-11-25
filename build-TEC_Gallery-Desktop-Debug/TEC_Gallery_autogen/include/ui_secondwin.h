/********************************************************************************
** Form generated from reading UI file 'secondwin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWIN_H
#define UI_SECONDWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecondWin
{
public:
    QLabel *labelimage;
    QPushButton *InsertBu;
    QPushButton *pushButton_2;
    QPushButton *ChangeBu;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *SecondWin)
    {
        if (SecondWin->objectName().isEmpty())
            SecondWin->setObjectName(QString::fromUtf8("SecondWin"));
        SecondWin->resize(447, 474);
        labelimage = new QLabel(SecondWin);
        labelimage->setObjectName(QString::fromUtf8("labelimage"));
        labelimage->setGeometry(QRect(40, 50, 371, 321));
        InsertBu = new QPushButton(SecondWin);
        InsertBu->setObjectName(QString::fromUtf8("InsertBu"));
        InsertBu->setGeometry(QRect(140, 400, 111, 25));
        pushButton_2 = new QPushButton(SecondWin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 440, 111, 25));
        ChangeBu = new QPushButton(SecondWin);
        ChangeBu->setObjectName(QString::fromUtf8("ChangeBu"));
        ChangeBu->setGeometry(QRect(280, 400, 111, 25));
        pushButton = new QPushButton(SecondWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 440, 111, 25));
        label = new QLabel(SecondWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 451, 481));
        label->setPixmap(QPixmap(QString::fromUtf8("Since.png")));
        label->raise();
        labelimage->raise();
        InsertBu->raise();
        pushButton_2->raise();
        ChangeBu->raise();
        pushButton->raise();

        retranslateUi(SecondWin);

        QMetaObject::connectSlotsByName(SecondWin);
    } // setupUi

    void retranslateUi(QDialog *SecondWin)
    {
        SecondWin->setWindowTitle(QCoreApplication::translate("SecondWin", "Dialog", nullptr));
        labelimage->setText(QString());
        InsertBu->setText(QCoreApplication::translate("SecondWin", "Insert", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SecondWin", "Metadata", nullptr));
        ChangeBu->setText(QCoreApplication::translate("SecondWin", "Up", nullptr));
        pushButton->setText(QCoreApplication::translate("SecondWin", "Change image", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecondWin: public Ui_SecondWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWIN_H
