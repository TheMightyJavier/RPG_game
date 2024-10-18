#include "guerrero.h"


ostream& operator <<(ostream& stream, Guerrero& A){

    stream << "GUERRERO: "<<endl;
    stream << "Nombre: " << A._nombre;
    stream << ", Dinero: " << A._dinero;
    stream << ", Nivel: " << A._nivel;
    stream << ", Salud: " << A._salud;
    stream << ", Poder: " << A._poder;
    stream << ", Precision: " << A._precision;
    stream << ", Proteccion: " << A._proteccion;
    stream<< ", Escudo: " << A._escudo;
    stream<< ", Fuerza: " << A._fuerza << endl;



    return stream;
}

int Guerrero::getEscudo(){
    return _escudo;
}

int Guerrero::getFuerza(){
    return _fuerza;
}



void Guerrero::tomarDatos(){
    string nombre;
    int nivel = 1;
    int salud = 100;
    int equipo = 0;
    int poder;
    int precision;
    int proteccion;
    int escudo;
    int fuerza;

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
    cout << "Introduce la proteccion, valor entre 15-30: " <<endl;
    cin>>proteccion;
    if (proteccion >= 15 && proteccion <= 30) {
            _proteccion=proteccion;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(proteccion < 15 || proteccion > 30);

    do{
    cout << "Introduce el escudo, valor entre 0-30 " <<endl;
    cin>>escudo;
    if (escudo >= 0 && escudo <= 30) {
            _escudo=escudo;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(escudo < 0 || escudo > 30);


    do{
    cout << "Introduce la fuerza, valor entre 1-15: " <<endl;
    cin>>fuerza;
    if (fuerza >= 1 && fuerza <= 15) {
            _fuerza = fuerza;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(fuerza < 1 || fuerza > 15);

}




void Guerrero::mostrarDatos(){

    cout << "GUERRERO: "<<endl;
    cout<< "Nombre: " << _nombre;
    cout<< ", Nivel: " << _nivel;
    cout<< ", Salud: " << _salud;
    cout<< ", Poder: " << _poder;
    cout<< ", Precision: " << _precision;
    cout<< ", Proteccion: " << _proteccion;
    cout<< ", Escudo: " << _escudo;
    cout<< ", Fuerza: " << _fuerza << endl;
    cout<< "INVENTARIO:" << endl;
    _inventariopersonaje.mostrarInventario();
    cout << endl;

}


void Guerrero::crearInventario(Objeto &O){

    if(_inventariopersonaje.size()<=1){
    if(Arma* A = dynamic_cast<Arma*>(&O)){
        if(_inventariopersonaje.numArmas() < 2){
        if(A->getTipo() == Cortante || A->getTipo() == Contundente ){
                _inventariopersonaje.agregarObjeto(O);
        }else{cout << "El tipo de arma no es valido." << endl;}
        }else{cout << "Inventario de Armas lleno" << endl; }
    }else{cout<<"Primero tienes que meter un Arma"<< endl;}


    }else{
    if(Pocion* P = dynamic_cast<Pocion*>(&O)){
        if(_inventariopersonaje.numPociones() < 1){
            if(P->getTipo() == Curacion){
                _inventariopersonaje.agregarObjeto(O);
            }else{cout << "El tipo de pocion no es valido" << endl;}
         }else{cout<<"Inventario de Pociones lleno"<< endl;}
    }
    }
}
