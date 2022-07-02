//
// Created by LENOVO on 29/06/2022.
//

#ifndef UNTITLED2_CTABLERO_H
#define UNTITLED2_CTABLERO_H
#include "Creina.h"
#include "Cnormal.h"
#include<iostream>
#include <vector>
#include <iomanip>
using namespace std;


class Ctablero {
private:
    int filas;
    int columnas;
    string matriz[9][9];
public:
    Ctablero(){};
    Ctablero(int _filas, int _columnas);
    virtual ~Ctablero(){};
    void dibujar_tablero();
    void movimiento();
    void imprimir_tablero();

};;


#endif //UNTITLED2_CTABLERO_H
