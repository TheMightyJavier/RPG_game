#include "inventario.h"


ostream& operator <<(ostream& stream, Inventario& I){

    if(I._inventario.empty()){
        stream << "NO HAY OBJETOS EN EL INVENTARIO"<< endl;
    }else
    for(size_t i = 0; i < I._inventario.size(); i++) {
        cout<< "Objeto numero " << i+1 << ":" << endl;
        //stream << I._inventario[i];
        if(Arma* P = dynamic_cast<Arma*>(I._inventario[i])){
            cout << *P;
        }

       if(Pocion* P = dynamic_cast<Pocion*>(I._inventario[i])){
            cout << *P;
        }
    }
    return stream;
}



void Inventario::agregarObjeto(Objeto &O){

    _inventario.push_back(&O);
}


void Inventario::operator >> (Objeto &O){

    this->agregarObjeto(O);
}


void Inventario::eliminarObjeto(int i){

    _inventario.erase(_inventario.begin()+i);

}


void Inventario::mostrarInventario(){

    if(_inventario.empty()){
        cout<< "NO HAY OBJETOS EN EL INVENTARIO"<< endl;
    }else
    for(size_t i = 0; i < _inventario.size(); i++) {
        cout<< "Objeto numero " << i+1 << ":" << endl;
        //cout << (_inventario[i]);
        if(Arma* P = dynamic_cast<Arma*>(_inventario[i])){
            cout << *P;
        }

       if(Pocion* P = dynamic_cast<Pocion*>(_inventario[i])){
            cout << *P;
        }
    }
}

void Inventario::mostrarPociones(){
    if(_inventario.empty()){
        cout<< "NO HAY OBJETOS EN EL INVENTARIO"<< endl;
    }else
    for(size_t i = 0; i < _inventario.size(); i++) {
        cout<< "Pocion numero " << i+1 << ":" << endl;

       if(Pocion* P = dynamic_cast<Pocion*>(_inventario[i])){
            cout << *P;
        }
    }
}

Objeto &Inventario::getObjeto(int i){
    return *_inventario[i-1];
}

int Inventario::numArmas(){
    int contador = 0;
    for (size_t i =0; i < _inventario.size(); i++) {
        // Intentamos convertir el puntero de la clase base al tipo derivado Armas
        if (dynamic_cast<Arma*>(_inventario[i]) != nullptr) {
            contador++;
        }
    }
    return contador;
}


int Inventario::numPociones(){
    int contador = 0;
    for (size_t i =0; i < _inventario.size(); i++) {
        // Intentamos convertir el puntero de la clase base al tipo derivado Armas
        if (dynamic_cast<Pocion*>(_inventario[i]) != nullptr) {
            contador++;
        }
    }
    return contador;
}

int Inventario::posicionPocion(){
    int contador = 0;
    for (size_t i =0; i < _inventario.size(); i++) {
        // Intentamos convertir el puntero de la clase base al tipo derivado Armas
        if (dynamic_cast<Pocion*>(_inventario[i]) != nullptr) {
            contador = i;
        }
    }
    return contador;
}

int Inventario::pocionCura(){
    int contador = 0;
    for (size_t i =0; i < _inventario.size(); i++) {
        if (Pocion* P = dynamic_cast<Pocion*>(_inventario[i])) {
            if(P->getTipo() == 0){
                contador++;
            }
        }
    }
    return contador;
}

int Inventario::pocionMana(){
    int contador = 0;
    for (size_t i =0; i < _inventario.size(); i++) {
        if (Pocion* P = dynamic_cast<Pocion*>(_inventario[i])) {
            if(P->getTipo() == 1){
                contador++;
            }
        }
    }
    return contador;
}



int Inventario::size(){
    return _inventario.size();
}


void Inventario::enviaralFinal(int i){

    swap(_inventario[i], _inventario.back());
}
