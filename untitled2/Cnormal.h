//
// Created by LENOVO on 29/06/2022.
//

#ifndef UNTITLED2_CNORMAL_H
#define UNTITLED2_CNORMAL_H
#include "Cdama.h"


class Cnormal: public Cdama{
public:
    Cnormal(){};
    Cnormal(int _x, int _y, string _color):Cdama(_x,_y,_color){};
    virtual ~Cnormal(){};
    int movimiento_x() override;
    int movimiento_y() override;

};


#endif //UNTITLED2_CNORMAL_H
