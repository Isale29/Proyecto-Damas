//
// Created by LENOVO on 29/06/2022.
//

#include "Ctablero.h"
Ctablero::Ctablero(int _filas, int _columnas):filas(_filas),columnas(_columnas) {
    for(int i=0;i<filas;i++){
        for (int j=0; j<columnas;j++){
            matriz[i][j]=" ";
        }
    }
}

void Ctablero::dibujar_tablero() {

    string v[8]={"a","b","c","d","e","f","g","h"};
    for(int i=0;i<filas;i++){
        for (int j=0; j<columnas;j++){
            if(j==0 and i>0)
                matriz[i][j]= to_string(filas -i);
            else if(i==0 and j==0)
                matriz[i][j]="";
            else if(j>0 and i==0)
                matriz[i][j]=v[j-1];
            else
                matriz[i][j]= "-";
        }
    }
    //fichas blancas
    Creina obj1(1,8,"DN");
    Creina obj2(1,2,"DN");
    Creina obj3(1,4,"DN");
    Creina obj4(1,6,"DN");

    Creina obj5(2,1,"N");
    Creina obj6(2,3,"N");
    Creina obj7(2,5,"N");
    Creina obj8(2,7,"N");

    Creina obj9(3,2,"N");
    Creina obj10(3,4,"N");
    Creina obj11(3,6,"N");
    Creina obj12(3,8,"N");

    matriz[obj1.movimiento_x()][obj1.movimiento_y()]=obj1.setcolor();
    matriz[obj2.movimiento_x()][obj2.movimiento_y()]=obj2.setcolor();
    matriz[obj3.movimiento_x()][obj3.movimiento_y()]=obj3.setcolor();
    matriz[obj4.movimiento_x()][obj4.movimiento_y()]=obj4.setcolor();
    matriz[obj5.movimiento_x()][obj5.movimiento_y()]=obj5.setcolor();
    matriz[obj6.movimiento_x()][obj6.movimiento_y()]=obj6.setcolor();
    matriz[obj7.movimiento_x()][obj7.movimiento_y()]=obj7.setcolor();
    matriz[obj8.movimiento_x()][obj8.movimiento_y()]=obj8.setcolor();
    matriz[obj9.movimiento_x()][obj9.movimiento_y()]=obj9.setcolor();
    matriz[obj10.movimiento_x()][obj10.movimiento_y()]=obj10.setcolor();
    matriz[obj11.movimiento_x()][obj11.movimiento_y()]=obj11.setcolor();
    matriz[obj12.movimiento_x()][obj12.movimiento_y()]=obj12.setcolor();


    //FICHAS NEGRAS
    Creina obn1(8,1,"DB");
    Creina obn2(8,3,"DB");
    Creina obn3(8,5,"DB");
    Creina obn4(8,7,"DB");

    Creina obn5(7,2,"B");
    Creina obn6(7,4,"B");
    Creina obn7(7,6,"B");
    Creina obn8(7,8,"B");

    Creina obn9(6,1,"B");
    Creina obn10(6,3,"B");
    Creina obn11(6,5,"B");
    Creina obn12(6,7,"B");


    matriz[obn1.movimiento_x()][obn1.movimiento_y()]=obn1.setcolor();
    matriz[obn2.movimiento_x()][obn2.movimiento_y()]=obn2.setcolor();
    matriz[obn3.movimiento_x()][obn3.movimiento_y()]=obn3.setcolor();
    matriz[obn4.movimiento_x()][obn4.movimiento_y()]=obn4.setcolor();
    matriz[obn5.movimiento_x()][obn5.movimiento_y()]=obn5.setcolor();
    matriz[obn6.movimiento_x()][obn6.movimiento_y()]=obn6.setcolor();
    matriz[obn7.movimiento_x()][obn7.movimiento_y()]=obn7.setcolor();
    matriz[obn8.movimiento_x()][obn8.movimiento_y()]=obn8.setcolor();
    matriz[obn9.movimiento_x()][obn9.movimiento_y()]=obn9.setcolor();
    matriz[obn10.movimiento_x()][obn10.movimiento_y()]=obn10.setcolor();
    matriz[obn11.movimiento_x()][obn11.movimiento_y()]=obn11.setcolor();
    matriz[obn12.movimiento_x()][obn12.movimiento_y()]=obn12.setcolor();
}

void Ctablero::movimiento() {
    int x1,y1;
    int x2,y2;
    string origen;
    string destino;
    do{
        cin>>origen;
        cin>>destino;
    if (origen[0]=='a')
        x1=1;
    else if(origen[0]=='b')
        x1=2;
    else if (origen[0]=='c')
        x1=3;
    else if (origen[0]=='d')
        x1=4;
    else if (origen[0]=='e')
        x1=5;
    else if (origen[0]=='f')
        x1=6;
    else if (origen[0]=='g')
        x1=7;
    else if (origen[0]=='h')
        x1=8;

        if (origen[1]=='1')
            y1=1;
        else if(origen[1]=='2')
            y1=2;
        else if (origen[1]=='3')
            y1=3;
        else if (origen[1]=='4')
            y1=4;
        else if (origen[1]=='5')
            y1=5;
        else if (origen[1]=='6')
            y1=6;
        else if (origen[1]=='7')
            y1=7;
        else if (origen[1]=='8')
            y1=8;


        if (destino[0]=='a')
            x2=1;
        else if(destino[0]=='b')
            x2=2;
        else if (destino[0]=='c')
            x2=3;
        else if (destino[0]=='d')
            x2=4;
        else if (destino[0]=='e')
            x2=5;
        else if (destino[0]=='f')
            x2=6;
        else if (destino[0]=='g')
            x2=7;
        else if (destino[0]=='h')
            x2=8;

        if (destino[1]=='1')
            y2=1;
        else if(destino[1]=='2')
            y2=2;
        else if (destino[1]=='3')
            y2=3;
        else if (destino[1]=='4')
            y2=4;
        else if (destino[1]=='5')
            y2=5;
        else if (destino[1]=='6')
            y2=6;
        else if (destino[1]=='7')
            y2=7;
        else if (destino[1]=='8')
            y2=8;


        //cout<<"Ingrese nueva coordenada inicial en x: ";cin>>x1;
        //cout<<"Ingrese nueva coordenada incial en y: ";cin>>y1;

    cout<<"movimiento invalido";

    }while (x1>8 or x1<1 or y1>8 or y1<1);

    for(int i=0;i<filas;i++){
        for (int j=0; j<columnas;j++){
            if (matriz[x1][y1]=="DB" or matriz[x1][y1]=="DN"){
              if (x2==x1+1 or x2)
                  if (matriz[x1+1][y1+1]!="" or matriz[x1-1][y1-1]!="" or matriz[x1-1][y1+1]!="" or matriz[x1+1][y1-1]!="")
                      matriz[x1][y1]=matriz[x2][y2];

            }
            else{

            }
            matriz[x1][y1]=matriz[x2][y2];
        }
    }
}

void Ctablero::imprimir_tablero() {
    for(int i=0;i<filas;i++){
        for (int j=0; j<columnas;j++){
            cout<<setw(4)<<matriz[i][j]<<setw(4);
        }cout<<endl;
    }
}
