//
// Created by dlurena24 on 24/11/21.
//

#include "string2imgTraductor.h"
#include <iostream>

using namespace std;

int colorsBGR[3];
char a = 'A';

void string2imgTraductor::traslateBack(char inStr){

    if(inStr == 'A'){
        colorsBGR[0] = 0;
        colorsBGR[1] = 0;
        colorsBGR[2] = 0;
    }
    if(inStr == 'B'){
        colorsBGR[0] = 0;
        colorsBGR[1] = 0;
        colorsBGR[2] = 64;
    }
    if(inStr == 'C'){
        colorsBGR[0] = 0;
        colorsBGR[1] = 0;
        colorsBGR[2] = 255;
    }
    if(inStr == 'D'){
        colorsBGR[0] = 0;
        colorsBGR[1] = 64;
        colorsBGR[2] = 0;
    }
    if(inStr == 'E'){
        colorsBGR[0] = 0;
        colorsBGR[1] = 64;
        colorsBGR[2] = 64;
    }
    if(inStr == 'F'){
        colorsBGR[0] = 0;
        colorsBGR[1] = 64;
        colorsBGR[2] = 255;
    }
    if(inStr == 'G'){
        colorsBGR[0] = 0;
        colorsBGR[1] = 255;
        colorsBGR[2] = 0;
    }
    if(inStr == 'H'){
        colorsBGR[0] = 0;
        colorsBGR[1] = 255;
        colorsBGR[2] = 64;
    }
    if(inStr == 'I'){
        colorsBGR[0] = 0;
        colorsBGR[1] = 255;
        colorsBGR[2] = 255;
    }
    if(inStr == 'J'){
        colorsBGR[0] = 64;
        colorsBGR[1] = 0;
        colorsBGR[2] = 0;
    }
    if(inStr == 'K'){
        colorsBGR[0] = 64;
        colorsBGR[1] = 0;
        colorsBGR[2] = 64;
    }
    if(inStr == 'L'){
        colorsBGR[0] = 64;
        colorsBGR[1] = 0;
        colorsBGR[2] = 255;
    }
    if(inStr == 'M'){
        colorsBGR[0] = 64;
        colorsBGR[1] = 64;
        colorsBGR[2] = 0;
    }
    if(inStr == 'N'){
        colorsBGR[0] = 64;
        colorsBGR[1] = 64;
        colorsBGR[2] = 64;
    }
    if(inStr == '.'){
        colorsBGR[0] = 64;
        colorsBGR[1] = 64;
        colorsBGR[2] = 255;
    }
    if(inStr == 'O'){
        colorsBGR[0] = 64;
        colorsBGR[1] = 255;
        colorsBGR[2] = 0;
    }
    if(inStr == 'P'){
        colorsBGR[0] = 64;
        colorsBGR[1] = 255;
        colorsBGR[2] = 64;
    }
    if(inStr == 'Q'){
        colorsBGR[0] = 64;
        colorsBGR[1] = 255;
        colorsBGR[2] = 255;
    }
    if(inStr == 'R'){
        colorsBGR[0] = 255;
        colorsBGR[1] = 0;
        colorsBGR[2] = 0;
    }
    if(inStr == 'S'){
        colorsBGR[0] = 255;
        colorsBGR[1] = 0;
        colorsBGR[2] = 64;
    }
    if(inStr == 'T'){
        colorsBGR[0] = 255;
        colorsBGR[1] = 0;
        colorsBGR[2] = 255;
    }
    if(inStr == 'U'){
        colorsBGR[0] = 255;
        colorsBGR[1] = 64;
        colorsBGR[2] = 0;
    }
    if(inStr == 'V'){
        colorsBGR[0] = 255;
        colorsBGR[1] = 64;
        colorsBGR[2] = 64;
    }
    if(inStr == 'W'){
        colorsBGR[0] = 255;
        colorsBGR[1] = 64;
        colorsBGR[2] = 255;
    }
    if(inStr == 'X'){
        colorsBGR[0] = 255;
        colorsBGR[1] = 255;
        colorsBGR[2] = 0;
    }
    if(inStr == 'Y'){
        colorsBGR[0] = 255;
        colorsBGR[1] = 255;
        colorsBGR[2] = 64;
    }
    if(inStr == 'Z'){
        colorsBGR[0] = 255;
        colorsBGR[1] = 255;
        colorsBGR[2] = 255;
    }
}

int string2imgTraductor::getB(){
    return colorsBGR[0];
}

int string2imgTraductor::getG(){
    return colorsBGR[1];
}
int string2imgTraductor::getR(){
    return colorsBGR[2];
}


