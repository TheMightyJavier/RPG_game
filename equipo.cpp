#include "equipo.h"


void Equipo::agregarPersonaje(Personaje &P){

    _personajes.push_back(&P);
}


void Equipo::operator >> (Personaje &P){

    this->agregarPersonaje(P);
}


void Equipo::eliminarPersonaje(int i){

    _personajes.erase(_personajes.begin()+i);

}


ostream& operator <<(ostream& stream, Equipo& E){

    for(size_t i = 0; i < E._personajes.size(); i++) {
        stream << "Personaje numero " << i+1 << ":" << endl;
        //stream << E._personajes[i];
        if(Guerrero* P = dynamic_cast<Guerrero*>(E._personajes[i])){
            cout << *P;
        }

        if(Arquero* P = dynamic_cast<Arquero*>(E._personajes[i])){
            cout << *P;
        }

        if(Mago* P = dynamic_cast<Mago*>(E._personajes[i])){
            cout << *P;
        }
    }

    return stream;
}

void Equipo::mostrarEquipo(){

    for(size_t i = 0; i < _personajes.size(); i++) {
        cout<< "Personaje numero " << i+1 << ":" << endl;
        cout << _personajes[i];
    }
}


Personaje &Equipo::getPersonaje(int i){
    return *_personajes[i/*-1*/];
}


bool Equipo::empty(){
    if(_personajes.empty()){
        return 1;
    }else{return 0;}
}

int Equipo::buscar(string nombre) const {

    for (size_t i = 0; i < _personajes.size(); ++i) {
        if (_personajes[i]->getname() == nombre) {
            return i; // Devuelve la posición del valor encontrado
        }
    }
    //return 1; // Devuelve 1 si el valor no se encuentra en el vector
}


void Equipo::imprimir(int i){
    _personajes[i]->mostrarDatos();
}




void Equipo::cambiarPosicion(){
    int f=0;
    do{
      int i;
      cout << "Introduce la posicion del personaje." << endl;
      cin >> i;

    if(_personajes[i-1]->getSalud()<=0){

        cout << "Ese personaje no esta disponible" << endl;

    }else{

        swap(_personajes[0], _personajes[i-1]);

        f=1;
    }
    }while(f!=1);

}


