#ifndef JUEGO_H
#define JUEGO_H

#include "personaje.h"
#include "guerrero.h"
#include "arquero.h"
#include "mago.h"
#include "objeto.h"
#include "equipo.h"
#include "inventario.h"
#include "arma.h"
#include "pocion.h"
#include <fstream>
#include <iomanip>
#include <string>
#include <limits>
#include <deque>

class Juego
{
public:


    virtual ~Juego(){cout<< "destructor del Juego" << endl;}

    Juego(): _nivel(0){}

    void menuDelJuego();
    void menuCrearPersonaje();
    void menuCrearObjetos();
    void menuPersonajes();
    void menuEquipo();
    void menuObjetos();
    void menuInventarios();
    void tiendadeObjetos();
    void crearTienda();


    void crearEnemigos(int i);
    void simulacionJuego();
    void batalla();


    Guerrero* paramGuerrero();
    Mago* paramMago();
    Arquero* paramArquero();
    Arma* paramArma();
    Pocion* paramPocion();


    void crearPersonajes(Personaje& P);
    void eliminarPersonaje();
    void eliminardeEquipo();
    void editarpersonaje();
    void crearObjetos(Objeto* O);

    void mostrarPersonajes();
    void mostrarEquipo();
    void mostrarObjetos();

    void crearEquipo();
    void agregarInventario();



    int dado(); //tirada de dado y se llama desde void combate()
    void orden(int i);
    void ataque();
    void ataque2();
    void accionEnemiga();
    void accionEnemiga2();
    void usarHechizo();
    void usarPocion();
    int calcularDano(Personaje * P);
    int calcularDefensa(Personaje * P);


    void cargarPersonajes();
    void guardarPersonajes();

    void guardarGraveyard();
    void cargarGraveyard();
    void mostrarGraveyard();
    void graveyard(Personaje& P);


    friend ostream& operator <<(ostream& stream, Personaje* P);

private:
    int _nivel;
    vector <Personaje*> _listageneral;
    vector <Personaje*> _enemigos;
    Equipo _equipojugable;
    Inventario _tienda;
    Inventario _objetos;

    deque <Personaje*> _graveyard;

};

#endif // JUEGO_H
