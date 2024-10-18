#include "personaje.h"



string Personaje::getname(){
    return _nombre;
}

int Personaje::getNivel(){
    return _nivel;
}

int Personaje::getPrecision(){
    return _precision;
}

int Personaje::getProteccion(){
    return _proteccion;
}

int Personaje::getPoder(){
    return _poder;
}

int Personaje::getSalud(){
    return _salud;
}


int Personaje::getEquipo(){
    return _equipo;
}

int Personaje::getDinero(){
    return _dinero;
}

void Personaje::setEquipo(int i){
    _equipo = i;
}

void Personaje::setSalud(int i){
    _salud = i;
}

void Personaje::setProteccion(int i){
    _proteccion = i;
}

void Personaje::setPoder(int i){
    _poder = i;
}

void Personaje::setDinero(int i){
    _dinero = i;
}

void Personaje::levelUP(){

    int nivel = this->getNivel()+1;
    _nivel = nivel;

}

Inventario* Personaje::getInv(){
    return &_inventariopersonaje;
}

void Personaje::borrarInv(){

    for(int i = 0; i <= _inventariopersonaje.size(); i++) {

        delete &(_inventariopersonaje.getObjeto(i+1));

        }
}

Personaje& operator ++(Personaje& P){

    int dinero = P.getDinero() +10;

    if(P.getNivel() < 6){

        P._nivel++;
        P._dinero = dinero;

    }else{
        P._dinero = dinero;
    }
    return P;
}

