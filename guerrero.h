#ifndef GUERRERO_H
#define GUERRERO_H

#include "personaje.h"



class Guerrero : public Personaje
{
public:

    ~Guerrero(){cout<< "Destrucor de Guerrero"<< endl;}
    Guerrero():Personaje(){}

    Guerrero(string no, int ni, int s, int po, int pre, int pro, int es, int f)
        :Personaje(no, ni, s, po, pre, pro), _escudo(es), _fuerza(f){}

    void tomarDatos();

    void mostrarDatos();
    void crearInventario(Objeto &O);
    int getEscudo();
    int getFuerza();
    void Atacar();
    friend ostream& operator <<(ostream& stream, Guerrero& A);

private:
    int _escudo;
    int _fuerza;

};

#endif // GUERRERO_H

