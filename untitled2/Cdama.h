//
// Created by LENOVO on 29/06/2022.
//

#ifndef UNTITLED2_CDAMA_H
#define UNTITLED2_CDAMA_H
#include <iostream>
using namespace std;
class Cdama {
protected:
    int x;
    int y;
    //int y1;
    //int y2;

    string color;
public:
    Cdama(){};
    Cdama(int _x, int _y, string _color):x(_x),y(_y),color(_color){};
    virtual ~Cdama(){};
    string setcolor();
    virtual int movimiento_x()=0;
    virtual int movimiento_y()=0;
};


#endif //UNTITLED2_CDAMA_H
