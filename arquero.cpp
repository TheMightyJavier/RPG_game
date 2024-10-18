#include "arquero.h"


ostream& operator <<(ostream& stream, Arquero& A){

    stream << "ARQUERO: "<<endl;
    stream << "Nombre: " << A._nombre;
    stream << ", Dinero: " << A._dinero;
    stream << ", Nivel: " << A._nivel;
    stream << ", Salud: " << A._salud;
    stream << ", Poder: " << A._poder;
    stream << ", Precision: " << A._precision;
    stream << ", Proteccion: " << A._proteccion;
    stream << ", Flechas: " << A._flechas;
    stream << ", Agilidad: " << A._agilidad<< endl;

    return stream;
}


int Arquero::getFlechas(){
    return _flechas;
}

int Arquero::getAgilidad(){
    return _agilidad;
}



void Arquero::tomarDatos(){
    string nombre;
    int nivel = 1;
    int salud = 100;
    int equipo = 0;
    int poder;
    int precision;
    int proteccion;
    int flechas;
    int agilidad;

    cout<< "introduce el nombre " << endl;
    cin>> nombre;
    _nombre = nombre;
    _nivel=nivel;
    _salud=salud;
    _equipo = equipo;

    do{
    cout << "Introduce el poder, valor entre 0-30: " <<endl;
    cin >> poder;
    if (poder >= 0 && poder <= 30) {
            _poder=poder;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(poder < 0 || poder > 30);

    do{
    cout << "Introduce la precision, valor entre 1-12: " <<endl;
    cin>>precision;
    if (precision >= 1 && precision <= 12) {
            _precision=precision;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(precision < 1 || precision > 12);

    do{
    cout << "Introduce la proteccion, valor entre 20-40: " <<endl;
    cin>>proteccion;
    if (proteccion >= 20 && proteccion <= 40) {
            _proteccion=proteccion;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(proteccion < 20 || proteccion > 40);

    do{
    cout << "Introduce el numero de flechas, valor entre 1-15: " <<endl;
    cin>>flechas;
    if (flechas >= 1 && flechas <= 15) {
            _flechas=flechas;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(flechas < 1 || flechas > 15);


    do{
    cout << "Introduce la agilidad, valor entre 1-10: " <<endl;
    cin>>agilidad;
    if (agilidad >= 1 && agilidad <= 10) {
            _agilidad=agilidad;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(agilidad < 1 || agilidad > 10);



}




void Arquero::mostrarDatos(){

    cout << "ARQUERO: "<<endl;
    cout<< "Nombre: " << _nombre;
    cout<< ", Nivel: " << _nivel;
    cout<< ", Salud: " << _salud;
    cout<< ", Poder: " << _poder;
    cout<< ", Precision: " << _precision;
    cout<< ", Proteccion: " << _proteccion;
    cout<< ", Flechas: " << _flechas;
    cout<< ", Agilidad: " << _agilidad<< endl;
    cout<< "INVENTARIO:" << endl;
    _inventariopersonaje.mostrarInventario();
    cout << endl;

}


void Arquero::crearInventario(Objeto &O){

    if(_inventariopersonaje.size()<=0){

    if(Arma* A = dynamic_cast<Arma*>(&O)){
        if(_inventariopersonaje.numArmas() < 1){
        if(A->getTipo() == Arco){
                _inventariopersonaje.agregarObjeto(O);
        }else{cout << "El tipo de arma no es correcto." << endl;}
        }else{cout << "Inventario de Armas lleno" << endl; }
    }else{cout<<"Primero tienes que meter un Arma"<< endl;}

    }else{
        if(Pocion* P = dynamic_cast<Pocion*>(&O)){

        if(_inventariopersonaje.numPociones() < 2){
        if(P->getTipo() == Curacion){
                _inventariopersonaje.agregarObjeto(O);
        }else {cout << "El tipo de pocion no es correcto" << endl;}
        }else{cout<<"Inventario de Pociones lleno"<< endl;}

    }
    }

}
