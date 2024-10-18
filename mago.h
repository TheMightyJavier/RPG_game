#ifndef MAGO_H
#define MAGO_H

#include "personaje.h"
//#include "objeto.h"

enum TipoHechizo {Agua, Fuego, Tierra, Aire};
class Mago : public Personaje
{
public:

    ~Mago(){cout<< "Destrucor de Mago"<< endl;}
    Mago():Personaje(){}

    Mago(string no, int ni, int s, int po, int pre, int pro, int mana, int h1, int h2);


    void tomarDatos();
    void mostrarDatos();
    void crearInventario(Objeto &O);

    void mostrarHechizos();

    int getMana();
    int getHechizo1();
    int getHechizo2();
    void setMana(int i);

    friend ostream& operator <<(ostream& stream, Mago& A);

    void Atacar();

    void usarHechizo();

private:
    int _mana;
    vector<TipoHechizo> _hechizos;
};

#endif // MAGO_H
