#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QColor>
#include <QMessageBox>
#include "secondwin.h"
#include "signup.h"
#include "mongodb_handler.h"

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
    mongocxx::instance instance;
    Users::MongoDbUserHandler mhandler;
    QString username = ui->line_User->text();
    QString password = ui->line_Pass->text();

    bool verificate = mhandler.getUserPass(username.toStdString(), password.toStdString());

    if (true==verificate){
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


void MainWindow::on_SignUp_clicked()
{
    signup = new SignUp(this);
    signup->show();
}

