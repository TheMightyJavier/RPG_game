#ifndef ARMA_H
#define ARMA_H

#include "objeto.h"
#include <limits>
enum TipoArma {Cortante, Contundente, Arco, Baculo};
class Arma : public Objeto
{
public:

    ~Arma(){}
    Arma():Objeto(){}
    Arma(string nom,int dam, TipoArma t);
    void setTipo();
    TipoArma getTipo();
    void setFuerza();
    int getDamage();
    void mostrar();
    void tomarDatos();
    void comprobarTipo();

    friend ostream& operator <<(ostream& stream, Arma& A);



private:
    int _damage;
    TipoArma _tipo;
};

#endif // ARMA_H
