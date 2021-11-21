#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QColor>
#include <QMessageBox>
#include "secondwin.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_label_3_linkActivated(const QString &link)
{
    ui->label_3->setText("<font color = 'red'>Some text</font>");
}





void MainWindow::on_SignIn_clicked()
{
    QString username = ui->line_User->text();
    QString password = ui->line_Pass->text();

    if (username=="Gabriel" && password=="1234"){
        QMessageBox::information(this, "Login", "Username and password are correct");
        hide();
        SecondWin secondWin;
        secondWin.setModal(true);
        secondWin.exec();
    }
    else{
        QMessageBox::warning(this, "Login", "Username and password are not correct");

    }
}

