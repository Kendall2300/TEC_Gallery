#include <iostream>
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

int main() {
    Mat img;
    string imgStr, incomStr;
    img2stringTraductor trad;
    img = imread("../ImgPrueba3.jpeg", IMREAD_COLOR);

    // Procesar imagen
    processColors(img);

    imshow("Image", img);
    waitKey(0);

    int irows = img.rows;
    int icols = img.cols;

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

    cout << imgStr << endl;

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
    incomBinEncoded = binEncoded;

//  Decodificar
//    string fromBin;
//    int index = -1;
//    while (index < (int) binEncoded.size() - 2) {
//        huff.decode(huff.getRoot(), index, binEncoded);
//    }

    toDecode(huff, incomBinEncoded);

//  String Recibido del decodificador

    string fromBin;
    fromBin = huff.getG();
    cout << fromBin << "\n";

//    ------------------------------------------Opencv Out
    Mat retImg(irows, icols, CV_8UC3, Scalar(0, 0, 0));
    string2imgTraductor tradOut;

    string toColorStr = fromBin;

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

    imwrite("../bruhhhh.png", retImg);
    imshow("Image",retImg);
    waitKey(0);

    return 0;
}
