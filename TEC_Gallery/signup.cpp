#include "signup.h"
#include "ui_signup.h"
#include "mongodb_handler.h"
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <bits/stdc++.h>
#include <filesystem>
#include <QMessageBox>


using namespace std;



SignUp::SignUp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_clicked()
{
    mongocxx::instance instance;
    Users::MongoDbUserHandler mhandler;


    QString usernamenew = ui->newuser->text();
    QString passwordnew = ui->newpass->text();


    mhandler.AddUserToDb(usernamenew.toStdString(), passwordnew.toStdString());

    string foldername;
    foldername ="mkdir -p ../TEC_Gallery/Galerias/"+usernamenew.toStdString();
    const char *path=foldername.c_str();
    system(path);

    QMessageBox::information(this, "Register", "User registered");
    hide();


    //if (mkdir(foldername.push_back(fname), 0777)==1)
        //cerr<<

    //this->close();
}


