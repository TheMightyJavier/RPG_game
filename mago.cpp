#include "mago.h"

ostream& operator <<(ostream& stream, Mago& A){

    stream << "MAGO: "<<endl;
    stream << "Nombre: " << A._nombre;
    stream << ", Dinero: " << A._dinero;
    stream << ", Nivel: " << A._nivel;
    stream << ", Salud: " << A._salud;
    stream << ", Poder: " << A._poder;
    stream << ", Precision: " << A._precision;
    stream << ", Proteccion: " << A._proteccion;
    stream << ", Escudo: " << A._mana;
    stream << ", Hechizo 1: ";

    if(A._hechizos[0]==0){stream << "Agua";}
    if(A._hechizos[0]==1){stream << "Fuego";}
    if(A._hechizos[0]==2){stream << "Tierra";}
    if(A._hechizos[0]==3){stream << "Aire";}

    stream << ", Hechizo 2: ";
    if(A._hechizos[1]==0){stream << "Agua" << endl;}
    if(A._hechizos[1]==1){stream << "Fuego" << endl;}
    if(A._hechizos[1]==2){stream << "Tierra" << endl;}
    if(A._hechizos[1]==3){stream << "Aire" << endl;}


    return stream;
}





Mago::Mago(string no, int ni, int s, int po, int pre, int pro, int mana, int h1, int h2){
    _nombre= no;
    _nivel=ni;
    _salud=s;
    _poder=po;
    _precision=pre;
    _proteccion=pro;
    _mana=mana;

    switch (h1) {
        case 1:
            _hechizos.push_back(TipoHechizo::Agua);
            break;
        case 2:
            _hechizos.push_back(TipoHechizo::Fuego);
            break;
        case 3:
            _hechizos.push_back(TipoHechizo::Tierra);
            break;
        case 4:
            _hechizos.push_back(TipoHechizo::Aire);
            break;
        default:
            cerr << "Opción invalida. Por favor, seleccione opciones validas." << endl;
             // Salir del programa con un código de error
       }

    switch (h2) {
        case 1:
            _hechizos.push_back(TipoHechizo::Agua);
            break;
        case 2:
            _hechizos.push_back(TipoHechizo::Fuego);
            break;
        case 3:
            _hechizos.push_back(TipoHechizo::Tierra);
            break;
        case 4:
            _hechizos.push_back(TipoHechizo::Aire);
            break;
        default:
            cerr << "Opción invalida. Por favor, seleccione opciones validas." << endl;
             // Salir del programa con un código de error
       }
}



int Mago::getMana(){
    return _mana;
}

void Mago::setMana(int i){
    _mana = i;
}

int Mago::getHechizo1(){

    return _hechizos[0];
}

int Mago::getHechizo2(){

    return _hechizos[1];
}




void Mago::tomarDatos(){

    string nombre;
    int nivel = 1;
    int salud = 100;
    int equipo = 0;
    int poder;
    int precision;
    int proteccion;
    int mana=20; //PONGO EL MAXIMO DE MANA EN 20


    cout<< "introduce el nombre " << endl;
    cin>> nombre;
    _nombre = nombre;
    _nivel=nivel;
    _salud=salud;
    _equipo = equipo;
    _mana = mana;

    do{
    cout << "Introduce el poder, valor entre 50-70: " <<endl;
    cin >> poder;
    if (poder >= 50 && poder <= 70) {
            _poder=poder;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(poder < 50 || poder > 70);

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
    cout << "Introduce la proteccion, valor entre 50-60: " <<endl;
    cin>>proteccion;
    if (proteccion >= 50 && proteccion <= 60) {
            _proteccion=proteccion;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(proteccion < 50 || proteccion > 60);



    cout << "Seleccione dos hechizos separados por un espacio:" << endl;
     cout << "1. Hechizo de Agua" << endl;
     cout << "2. Hechizo de Fuego" << endl;
     cout << "3. Hechizo de Tierra" << endl;
     cout << "4. Hechizo de Aire" << endl;

     // Leer las dos entradas del usuario
     int opcion1, opcion2;
     cin >> opcion1 >> opcion2;

     // Validar las entradas del usuario y asignar los valores correspondientes al enumera
     vector<int> opciones = {opcion1, opcion2};
     for (int opcion : opciones) {
         switch (opcion) {
             case 1:
                 _hechizos.push_back(TipoHechizo::Agua);
                 break;
             case 2:
                 _hechizos.push_back(TipoHechizo::Fuego);
                 break;
             case 3:
                 _hechizos.push_back(TipoHechizo::Tierra);
                 break;
             case 4:
                 _hechizos.push_back(TipoHechizo::Aire);
                 break;
             default:
                 cerr << "Opción invalida. Por favor, seleccione opciones validas." << endl;
                  // Salir del programa con un código de error
            }
        }
}




void Mago::mostrarDatos(){

    cout << "MAGO: "<<endl;
    cout<< "Nombre: " << _nombre;
    cout<< ", Nivel: " << _nivel;
    cout<< ", Salud: " << _salud;
    cout<< ", Poder: " << _poder;
    cout<< ", Precision: " << _precision;
    cout<< ", Proteccion: " << _proteccion;
    cout<< ", Mana: " << _mana  ;
    cout<< ", Hechizo 1: ";

    if(_hechizos[0]==0){cout << "Agua";}
    if(_hechizos[0]==1){cout << "Fuego";}
    if(_hechizos[0]==2){cout << "Tierra";}
    if(_hechizos[0]==3){cout << "Aire";}

    cout<< ", Hechizo 2: ";
    if(_hechizos[1]==0){cout << "Agua" << endl;}
    if(_hechizos[1]==1){cout << "Fuego" << endl;}
    if(_hechizos[1]==2){cout << "Tierra" << endl;}
    if(_hechizos[1]==3){cout << "Aire" << endl;}
    cout<< ", INVENTARIO:" << endl;
    _inventariopersonaje.mostrarInventario();
    cout << endl;

}

void Mago::mostrarHechizos(){


    //HECHIZOS1

    if(_hechizos[0]==0){
        cout << "Hechizo numero 1 es de tipo: Agua" << endl;
        cout << "Restaura 40 puntos de salud a un aliado" << endl;
    }
    if(_hechizos[0]==1){
        cout << "Hechizo numero 1 es de tipo: Fuego" << endl;
        cout << "Resta 40 puntos de salud al enemigo" << endl;
    }
    if(_hechizos[0]==2){
        cout << "Hechizo numero 1 es de tipo: Tierra" << endl;
        cout << "Baja a la mitad la proteccion del enemigo" << endl;
    }
    if(_hechizos[0]==3){
        cout << "Hechizo numero 1 es de tipo: Aire" << endl;
        cout << "Baja a la mitad el poder del enemigo" << endl;
    }


    //HECHIZOS2



    if(_hechizos[1]==0){
        cout << "Hechizo numero 2 es de tipo: Agua" << endl;
        cout << "Restaura 40 puntos de salud a un aliado" << endl;
    }
    if(_hechizos[1]==1){
        cout << "Hechizo numero 2 es de tipo: Fuego" << endl;
        cout << "Resta 40 puntos de salud al enemigo" << endl;
    }
    if(_hechizos[1]==2){
        cout << "Hechizo numero 2 es de tipo: Tierra" << endl;
        cout << "Baja a la mitad la proteccion del enemigo" << endl;
    }
    if(_hechizos[1]==3){
        cout << "Hechizo numero 2 es de tipo: Aire" << endl;
        cout << "Baja a la mitad el poder del enemigo" << endl;
    }
}







void Mago::crearInventario(Objeto &O){

    if(_inventariopersonaje.size()<=0){
    if(Arma* A = dynamic_cast<Arma*>(&O)){
        if(_inventariopersonaje.numArmas() < 1){
            if(A->getTipo() == Baculo){
                    _inventariopersonaje.agregarObjeto(O);
            }else{cout << "El tipo de arma no es correcto." << endl;}
        }else{cout << "Inventario de Armas lleno" << endl; }
    }else{cout<<"Primero tienes que meter un Arma"<< endl;}

    }else{
        if(Pocion* P = dynamic_cast<Pocion*>(&O)){
            if(_inventariopersonaje.numPociones() < 3 &&
                    _inventariopersonaje.pocionCura() < 2 && _inventariopersonaje.pocionMana() < 1){

                _inventariopersonaje.agregarObjeto(*P);

            }else{cout<<"Inventario de Pociones lleno"<< endl;}
        }
    }
}
