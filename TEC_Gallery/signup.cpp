#include "signup.h"
#include "ui_signup.h"
#include "mongodb_handler.h"
#include <iostream>

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

    this->close();
}


