//
// Created by dlurena24 on 21/11/21.
//

#include "img2stringTraductor.h"


using namespace std;

string img2stringTraductor::Traslate(int b, int g, int r){
    string colorString;
    if (b == 0){
        if(g == 0){
            if(r == 0){
                colorString = "A";
                return colorString;
            }
            if(r == 64){
                colorString = "B";
                return colorString;
            }
            if(r == 255){
                colorString = "C";
                return colorString;
            }
        }
        if(g == 64){
            if(r == 0){
                colorString = "D";
                return colorString;
            }
            if(r == 64){
                colorString = "E";
                return colorString;
            }
            if(r == 255){
                colorString = "F";
                return colorString;
            }
        }
        if(g == 255){
            if(r == 0){
                colorString = "G";
                return colorString;
            }
            if(r == 64){
                colorString = "H";
                return colorString;
            }
            if(r == 255){
                colorString = "I";
                return colorString;
            }
        }
    }
    if (b == 64){
        if(g == 0){
            if(r == 0){
                colorString = "J";
                return colorString;
            }
            if(r == 64){
                colorString = "K";
                return colorString;
            }
            if(r == 255){
                colorString = "L";
                return colorString;
            }
        }
        if(g == 64){
            if(r == 0){
                colorString = "M";
                return colorString;
            }
            if(r == 64){
                colorString = "N";
                return colorString;
            }
            if(r == 255){
                colorString = "Ñ";
                return colorString;
            }
        }
        if(g == 255){
            if(r == 0){
                colorString = "O";
                return colorString;
            }
            if(r == 64){
                colorString = "P";
                return colorString;
            }
            if(r == 255){
                colorString = "Q";
                return colorString;
            }
        }
    }
    if (b == 255){
        if(g == 0){
            if(r == 0){
                colorString = "R";
                return colorString;
            }
            if(r == 64){
                colorString = "S";
                return colorString;
            }
            if(r == 255){
                colorString = "T";
                return colorString;
            }
        }
        if(g == 64){
            if(r == 0){
                colorString = "U";
                return colorString;
            }
            if(r == 64){
                colorString = "V";
                return colorString;
            }
            if(r == 255){
                colorString = "W";
                return colorString;
            }
        }
        if(g == 255){
            if(r == 0){
                colorString = "X";
                return colorString;
            }
            if(r == 64){
                colorString = "Y";
                return colorString;
            }
            if(r == 255){
                colorString = "Z";
                return colorString;
            }
        }
    }
}
