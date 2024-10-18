#include <iostream>

#include "personaje.h"
#include "guerrero.h"
#include "arquero.h"
#include "mago.h"
#include "objeto.h"
#include "arma.h"
#include "pocion.h"
#include "equipo.h"
#include "inventario.h"
#include "juego.h"
using namespace std;



int main()
{
    cout << "Hello World!" << endl;

    Juego J1;

    J1.menuDelJuego();

    return 0;
}







//hacer una clase que sea el equipo de personajes
//para esta clase y la de inventario: SOBRECARGAR el operador []
//para que lea la persona o el objeto
//o para que lea los atributos, si hay 4 atributos le metes un numero y que te lea esa posicion

//para esta clase y la de inventario: SOBRECARGAR el operador << / <- el que valga
//para que introduzca un personaje o objeto al inventario
//desde un operador se pueden llamar a metodos que hagan lo que tu quieres para ahorrar en codigo





/*examen correccion
cuando en el contstructor haces una variable const,
luego cuando haces el getter se pone tambien const, delante y detras
void setName(const string& n);
const string& getName() const;
segundo const hace que no se pueda editar dentro
el primer const hace que no puedas editar el dato que devuelves
cuando hay setter y getters se pone private en los atributos



SIEMPRE que un metodo o sobrecarga de operador devuelva un tipo
hay que poner return ALGO.
*/




/*Plantillas
Todo va en el .h;
los templates no se lleva bien con el sistema de orden, porque no puede conectar facilmente con el .h
las opciones para esto:
1. poner toda la implementacion de la template .h (HACER ESTO)
2. darle el tipo en el cpp despues del #include .h (OPCION MALA)
3. incluir el .cpp al final del .h (NO SE USA MUCHO)
*/




/*
FICHEROS:
#include <fstream>
Escribir en un fichero: //ofstream//
Leer en un fichero:  //ifstream//
Leer y escribir en un fichero: //fstream//

para crear un objeto fichero se hace como una clase normal y tiene constructor vacio y parametrizado

Funcion open(nombre_fichero, mode)
mode, son las cosas que vamos a hacer con el fichero, hay diferentes flags
la funcion is_open() es un booleano para saber que esta abierto correctamente
la funcion eof() sirve para saber si estas en el final de fichero, esto es para leerlo entero,
hacer un while(!fichero.eof())

{ ios::in-> leer
{ ios::out-> escribir
{ ESTAS DOS SE USAN CUANDO PONES UN fstream

{ ios::out-> abrir en modo binario
{ ios::ate-> se coloca al final del fichero
{ ios::app-> se añade el contenido al final del fichero
{ ios::trunc-> se borra el contenido que tenia el fichero

si haces fichero >> string, lee palabra a palabra
si hacer fichero.getline(array_de_char, numero_de_caracteres)
el fichero se cierra con la funcion close()

cuando se lee un fichero se deja marcado como que ha terminado, se utiliza la funcion clear()
para que pueder leer otra vez el fichero

sobrecargar un metodo ofstream para que lea directamente uos personajes de un fichero y tambien con los objetos
*/



//template <typename T>
//T maximo(T x, T y) {
//    return (x > y) ? x : y;
//}
//    int a=3, b=5, c;
//    c = maximo(a,b);
//    cout<< a << "  " << b << "  Es mayor: " << c << endl;
//    char d='j', e='m', f;
//    f = maximo(d,e);
//    cout<< d << "  " << e << "  Es mayor: " << f << endl;
