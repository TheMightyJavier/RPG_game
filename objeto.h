#ifndef OBJETO_H
#define OBJETO_H
#include <iostream>
#include <vector>
using namespace std;


class Objeto
{
public:
    Objeto(string nom):_nombre(nom), _precio(0){}
    Objeto(){}
    virtual ~Objeto(){}
    virtual void mostrar() = 0;
    virtual void tomarDatos() = 0;
    int getPrecio();
    void setPrecio(int i);
    string getNombre();
    //virtual void comprobarTipo() =0;
protected:
    string _nombre;
    int _precio;
};

#endif // OBJETO_H
