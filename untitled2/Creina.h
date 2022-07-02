//
// Created by LENOVO on 29/06/2022.
//

#ifndef UNTITLED2_CREINA_H
#define UNTITLED2_CREINA_H
#include "Cdama.h"

class Creina: public Cdama  {
public:
    Creina(){};
    Creina(int _x, int _y, string _color):Cdama(_x,_y,_color){};
    virtual ~Creina(){};
    int movimiento_x() override;
    int movimiento_y() override;
};


#endif //UNTITLED2_CREINA_H
