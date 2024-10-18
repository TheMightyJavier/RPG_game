#ifndef POCION_H
#define POCION_H

#include "objeto.h"
#include <limits>
enum TipoPocion {Curacion, Mana};
class Pocion : public Objeto
{
public:
    Pocion():Objeto(){}
    Pocion(string nom, TipoPocion tip);
    void setTipo();
    TipoPocion getTipo();
    void tomarDatos();
    void mostrar();


    friend ostream& operator <<(ostream& stream, Pocion& A);


protected:
    TipoPocion _tipo;
};

#endif // POCION_H
