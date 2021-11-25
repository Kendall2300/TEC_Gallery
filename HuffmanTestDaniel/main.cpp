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

/// Jose, binEncoded es el binario que va hacia las RAIDS
    string binEncoded = huff.buildHuffmanTree(imgStr);

//  Decodificar
    string fromBin;
    int index = -1;
    while (index < (int) binEncoded.size() - 2) {
        huff.decode(huff.getRoot(), index, binEncoded);
    }

//  String Recibido del decodificador
    fromBin = huff.getG();

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
