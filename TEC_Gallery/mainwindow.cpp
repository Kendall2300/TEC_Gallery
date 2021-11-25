#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QColor>
#include <QMessageBox>
#include "secondwin.h"
#include "signup.h"
#include "mongodb_handler.h"
#include <QFileDialog>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <bits/stdc++.h>
#include <filesystem>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>
#include <mongodb_handler2.h>
#include <string>
#include <queue>
#include <unordered_map>
#include "HuffEncoder.h"
#include <opencv2/opencv.hpp>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "img2stringTraductor.h"
#include "string2imgTraductor.h"
#include <fstream>




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
        ui->line_User->setText("");
        ui->line_Pass->setText("");

    }
    else{
        QMessageBox::warning(this, "Login", "Username and password are not correct");
        ui->line_User->setText("");
        ui->line_Pass->setText("");

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
   QMessageBox::information(this, "New folder", "Folder cretaed");
   ui->line_new->setText("");

}


void MainWindow::on_pushButton_6_clicked()
{
    folder = ui->line_folder->text();
    QMessageBox::information(this, "Folder", "Folder selected");
    ui->line_folder->setText("");
}

/*
 *
 */
using namespace std;
using namespace cv;

inline uchar reduceBGR(const uchar val)
{
    if (val < 64) return 0;
    if (val < 128) return 64;
    return 255;
}

void processColors(Mat& img)
{
    uchar* pixelPtr = img.data;
    for (int i = 0; i < img.rows; i++)
    {
        for (int j = 0; j < img.cols; j++)
        {
            const int pi = i*img.cols*3 + j*3;
            pixelPtr[pi + 0] = reduceBGR(pixelPtr[pi + 0]); // B
            pixelPtr[pi + 1] = reduceBGR(pixelPtr[pi + 1]); // G
            pixelPtr[pi + 2] = reduceBGR(pixelPtr[pi + 2]); // R
        }
    }
}

void toDecode(HuffEncoder inhuff, string inbinEncoded) {
//    string fromBin;
    int index = -1;
    while (index < (int) inbinEncoded.size() - 1) {
        inhuff.decode(inhuff.getRoot(), index, inbinEncoded);
    }
}

void division(string num, int pdd, int img)
{
    fstream myFile;
    string lista[3];
    array<string, 3> discos;
    int i = 0;
    int largo = num.length();
    largo = largo/3;
    if(pdd==0)
    {
        discos = {"1", "2", "3"};
    }
    if(pdd==1)
    {
        discos = {"0", "2", "3"};
    }
    if(pdd==2)
    {
        discos = {"0", "1", "3"};
    }
    if(pdd==3)
    {
        discos = {"0", "1", "2"};
    }
    while(!num.empty())
    {
        while(i!=3)
        {
            lista[i] = num.substr(0, largo);
            num = num.substr(largo, num.length());
            i++;
        }
    }
    for(int s = 0; s<3; s++)
    {
        myFile.open("../RAID/Disk"+discos[s]+"/Imagen"+ to_string(img)+".txt", ios::out);
        if(myFile.is_open()){
            myFile<<lista[s];
            myFile.close();
        }
    }
}

void paridad(int pdd, int img)
{
    int j = 0;
    int k = 0;
    fstream myFile;
    string paridad;
    array<string, 3> discos;
    int larg;
    string A0, A1, A2;
    if(pdd==0)
    {
        discos = {"1", "2", "3"};
    }
    if(pdd==1)
    {
        discos = {"0", "2", "3"};
    }
    if(pdd==2)
    {
        discos = {"0", "1", "3"};
    }
    if(pdd==3)
    {
        discos = {"0", "1", "2"};
    }
    while(k!=3)
    {
        myFile.open("../RAID/Disk"+discos[k]+"/Imagen"+ to_string(img)+".txt", ios::in);
        if(k == 0)
        {
            getline(myFile, A0);
            larg = A0.length();
        }
        if(k == 1)
        {
            getline(myFile, A1);
        }
        if(k == 2)
        {
            getline(myFile, A2);
        }
        k++;
        myFile.close();
    }
    while(j!=larg)
    {
        if(A0[j] == '0' && A1[j] == '0' && A2[j] == '0')
        {
            paridad.append("0");
            j++;
            continue;
        }
        if(A0[j] == '0' && A1[j] == '1' && A2[j] == '0')
        {
            paridad.append("1");
            j++;
            continue;
        }
        if(A0[j] == '0' && A1[j] == '0' && A2[j] == '1')
        {
            paridad.append("1");
            j++;
            continue;
        }
        if(A0[j] == '0' && A1[j] == '1' && A2[j] == '1')
        {
            paridad.append("0");
            j++;
            continue;
        }
        if(A0[j] == '1' && A1[j] == '0' && A2[j] == '0')
        {
            paridad.append("1");
            j++;
            continue;
        }
        if(A0[j] == '1' && A1[j] == '0' && A2[j] == '1')
        {
            paridad.append("0");
            j++;
            continue;
        }
        if(A0[j] == '1' && A1[j] == '1' && A2[j] == '0')
        {
            paridad.append("0");
            j++;
            continue;
        }
        if(A0[j] == '1' && A1[j] == '1' && A2[j] == '1')
        {
            paridad.append("1");
            j++;
            continue;
        }
        else
        {
            paridad.append("a");
            j++;
            continue;
        }
    }
    myFile.open("../RAID/Disk"+ to_string(pdd)+"/Paridad"+ to_string(img)+".txt", ios::out);
    if(myFile.is_open()){
        myFile<<paridad;
        myFile.close();
    }
}

int irows, icols;
string mat2str(string path){
    Mat img;
    string imgStr, incomStr;
    img2stringTraductor trad;
    img = imread(path, IMREAD_COLOR);

    // Procesar imagen
    processColors(img);

    imshow("Image", img);
    waitKey(0);

    irows = img.rows;
    icols = img.cols;

    for (int i = 0; i < irows; i++) {
        for (int j = 0; j < icols; j++) {
            Vec3b pixColor = img.at<Vec3b>(i, j);
            int blue = pixColor.val[0];
            int green = pixColor.val[1];
            int red = pixColor.val[2];

            incomStr = trad.Traslate(blue, green, red);
            imgStr += incomStr;

        }
    }
    return imgStr;

}

void str2mat(string incomingBin, string outimg){


//    ------------------------------------------Opencv Out
    Mat retImg(irows, icols, CV_8UC3, Scalar(0, 0, 0));
    string2imgTraductor tradOut;

    string toColorStr = incomingBin;

    for (int i = 0; i < irows; i++)
    {
        for (int j = 0; j < icols; j++)
        {
            char evalLetter = toColorStr[0];
            tradOut.traslateBack(evalLetter);
            Vec3b & color = retImg.at<Vec3b>(i,j);

            color[0] = tradOut.getB();
            color[1] = tradOut.getG();
            color[2] = tradOut.getR();

            toColorStr.erase(0,1);
        }
    }

    imwrite(outimg, retImg);
    imshow("Image",retImg);
    waitKey(0);
}

string filesImg(int pdd, int img)
{
    fstream myFile;
    int k = 0;
    array<string, 3> discos;
    string file, bina;
    if(pdd==0)
    {
        discos = {"1", "2", "3"};
    }
    if(pdd==1)
    {
        discos = {"0", "2", "3"};
    }
    if(pdd==2)
    {
        discos = {"0", "1", "3"};
    }
    if(pdd==3)
    {
        discos = {"0", "1", "2"};
    }
    while(k!=3) {
        myFile.open("../RAID/Disk" + discos[k] + "/Imagen" + to_string(img) + ".txt", ios::in);
        getline(myFile, file);
        bina += file;
        myFile.close();
        k++;
    }
    return bina;
}

int principal() {

/// inPath es el path de la imagen, outPath el el nombre del path del archivo final
    string inPath = "../ImgPrueba3.jpeg";
    string outPath = "../bruhhhh.png";
    string imgStr = mat2str(inPath);
    cout << "Coded image string:\n" << imgStr << endl;

//    ------------------------------------------
    HuffEncoder huff;

/// A RAIDS
/// Jose, binEncoded es el binario que va hacia las RAIDS
    string binEncoded = huff.buildHuffmanTree(imgStr);

    while(binEncoded.length()%3!=0)
    {
        binEncoded = binEncoded + 'a';
    }
    int pdd = 3;
    int numI = 1;
    division(binEncoded, pdd, numI);
    paridad(pdd, numI);

/// Desde RAIDS
/// Inicia la decodificación

//  Cambiar con la integración
    string incomBinEncoded;
    incomBinEncoded = filesImg(pdd, numI);

//  Manda a decodificar el binario
    cout << "Loading decoded binary...\n";
    toDecode(huff, incomBinEncoded);

//  String Recibido del decodificador
    string fromBin;
    fromBin = huff.getG();
    cout << fromBin << "\n";

//  Opencv Out
    str2mat(fromBin, outPath);

    return 0;
}
