#ifndef ARQUERO_H
#define ARQUERO_H

#include "personaje.h"
#include "inventario.h"

class Arquero : public Personaje
{
public:
    ~Arquero(){cout<< "Destrucor de Arquero"<< endl;}

    Arquero():Personaje(){}
    Arquero(string no, int ni, int s, int po, int pre, int pro, int fl, int ag)
        :Personaje(no, ni, s, po, pre, pro), _flechas(fl), _agilidad (ag){}

    void mostrarDatos();
    void crearInventario(Objeto &O);
    void Atacar();
    void tomarDatos();
    int getFlechas();
    int getAgilidad();
    friend ostream& operator <<(ostream& stream, Arquero& A);

protected:
    int _flechas;
    int _agilidad;


};

#endif // ARQUERO_H
