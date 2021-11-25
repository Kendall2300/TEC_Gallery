#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QColor>
#include <QMessageBox>
#include "secondwin.h"
#include "signup.h"
#include "mongodb_handler.h"
#include "QFileDialog"
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <bits/stdc++.h>
#include <filesystem>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>


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



QString username;
QString password;
QString newfolder;
QString folder;
QString _path= "../Tec_Gallery/Galerias/"+username+"/"+folder;

void MainWindow::on_SignIn_clicked()
{
    mongocxx::instance instance;
    Users::MongoDbUserHandler mhandler;
    username = ui->line_User->text();
    password = ui->line_Pass->text();

    bool verificate = mhandler.getUserPass(username.toStdString(), password.toStdString());

    if (verificate==true){
        QMessageBox::information(this, "Login", "Username and password are correct");
        //hide();
        ui->label_6->setText("Logged as: " + username);
        //SecondWin secondWin;
        //secondWin.setModal(true);
        //secondWin.exec();

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


void MainWindow::on_label_6_linkActivated(const QString &link)
{
    ui->label_6->setText("Logged as: ");
}


void MainWindow::on_pushButton_clicked()
{
    QString filename= QFileDialog::getOpenFileName(this, tr("Insert"), _path, tr("Images(*.png *.jpg *.jpeg *.gif)"));
        if (QString::compare(filename, QString()) !=0)
        {
            QImage image;
            bool vallid = image.load(filename);
            if (vallid)        {
                image = image.scaledToWidth(ui->label_8->width(), Qt::SmoothTransformation);
                ui->label_8->setPixmap(QPixmap::fromImage(image));
            }
            else
            {
                // Error
            }
         }
}


void MainWindow::on_pushButton_3_clicked()
{
    QString filename= QFileDialog::getOpenFileName(this, tr("Change"), _path, tr("Images(*.png *.jpg *.jpeg *.gif)"));
        if (QString::compare(filename, QString()) !=0)
        {
            QImage image;
            bool vallid = image.load(filename);
            if (vallid)        {
                image = image.scaledToWidth(ui->label_8->width(), Qt::SmoothTransformation);
                ui->label_8->setPixmap(QPixmap::fromImage(image));
            }
            else
            {
                // Error
            }
         }
}


void MainWindow::on_pushButton_5_clicked()
{
   newfolder = ui->line_new->text();
   std::string foldername;
   foldername ="mkdir -p ../TEC_Gallery/Galerias/"+username.toStdString()+"/"+newfolder.toStdString();
   const char *path=foldername.c_str();
   system(path);
}


void MainWindow::on_pushButton_6_clicked()
{
    folder = ui->line_folder->text();
}

