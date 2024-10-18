#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <iostream>
#include "inventario.h"


#include "arma.h"
using namespace std;


class Personaje
{
public:

    virtual ~Personaje(){cout<< "Destructor de Personaje"<< endl;}
    void borrarInv();

    Personaje(){}
    Personaje(string no, int ni, int s, int po, int pre, int pro)
        :_nombre(no), _dinero(50), _equipo(0), _nivel(ni), _salud(s), _poder(po), _precision(pre), _proteccion(pro){}


    virtual void tomarDatos() = 0;
    virtual void mostrarDatos() = 0;
    virtual void crearInventario(Objeto &O) = 0;
    string getname();
    void setEquipo(int i);
    int getEquipo();
    Inventario* getInv();
    int getNivel();
    int getSalud();
    int getPoder();
    int getPrecision();
    int getProteccion();
    int getDinero();
    void setDinero(int i);
    void setSalud(int i);
    void setProteccion(int i);
    void setPoder(int i);
    void levelUP();
    void mostrarInv();

    friend Personaje& operator ++(Personaje& P);



protected:
    string _nombre;

    int _dinero;
    int _equipo;
    int _nivel;
    int _salud;
    int _poder;
    int _precision;
    int _proteccion;
    Inventario _inventariopersonaje;

};

#endif // PERSONAJE_H
