#include "objeto.h"


int Objeto::getPrecio(){

    return _precio;

}

void Objeto::setPrecio(int i){
    _precio = i;
}

string Objeto::getNombre(){
    return _nombre;
}
