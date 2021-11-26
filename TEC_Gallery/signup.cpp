/**
 * @file signup.cpp
 * @authors Kendall Martinez Carvajal (kendallmc@estudiantec.cr) && Gabriel Cerdas Chinchilla (gabocerdas@estudiantec.cr)
 * @brief Este codigo posee toda la logica y metodos para que el proyecto pueda añadir un usuario a la base de datos por medio de una interfaz.
 *
 * @version 1.0
 *
 * @copyright Copyright (c) 2021
 */
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


/**
 * @brief SignUp::SignUp
 * @param parent
 */
SignUp::SignUp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}
/**
 * @brief SignUp::~SignUp
 */
SignUp::~SignUp()
{
    delete ui;
}
/**
 * @brief SignUp::on_pushButton_clicked
 */
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


