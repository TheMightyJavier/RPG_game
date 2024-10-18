#ifndef EQUIPO_H
#define EQUIPO_H
#include <vector>
#include "personaje.h"
#include "guerrero.h"
#include "arquero.h"
#include "mago.h"

class Equipo
{
public:

    Equipo(){}

    void agregarPersonaje(Personaje &P);
    void operator >> (Personaje &P);
    void eliminarPersonaje(int i);
    int buscar(string nombre) const;
    void imprimir(int i);


    void cambiarPosicion();
    void mostrarEquipo();
    Personaje& getPersonaje(int i);
    bool empty();
    int size(){return _personajes.size();}

    friend ostream& operator <<(ostream& stream, Equipo& E);

private:
    vector<Personaje*> _personajes; //no hace falta ponerle tamaño
};

#endif // EQUIPO_H
