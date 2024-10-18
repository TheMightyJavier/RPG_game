#include "pocion.h"

ostream& operator <<(ostream& stream, Pocion& A){



    stream << "Tipo de Pocion: ";
    switch (A.getTipo()) {
                    case Curacion:
                        stream << "Pocion de Curacion";
                        break;
                    case Mana:
                        stream << "Pocion de Mana";
                        break;

                }

    stream << ", Precio: " << A._precio << endl << endl;

    return stream;
}

Pocion::Pocion(string nom, TipoPocion tip){

    _nombre = nom;
    _tipo = tip;

}





void Pocion::tomarDatos(){

    cout << "Seleccione un tipo de Pocion:" << endl;
    cout << "1. Pocion de Curacion" << endl;
    cout << "2. Pocion de Mana" << endl;



    int opcion1;
    while (!(cin >> opcion1)) {
                cout << "Por favor, introduzca un número válido." << endl;
                cin.clear(); // Limpiar el estado de error de cin
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            }
    // Validar las entradas del usuario y asignar los valores correspondientes al enumera

        switch (opcion1) {
            case 1:
                _tipo = Curacion;
                _nombre = "Pocion de Curacion";
                break;
            case 2:
                _tipo = Mana;
                _nombre = "Pocion de Mana";
                break;
            default:
                cerr << "Opción invalida. Por favor, seleccione una opcion valida." << endl;
                 // Salir del programa con un código de error
           }

}

void Pocion::mostrar(){


    cout << "Tipo de Pocion: ";
    switch (this->getTipo()) {
                    case Curacion:
                        cout << "Pocion de Curacion" << endl << endl;
                        break;
                    case Mana:
                        cout << "Pocion de Mana" << endl << endl;
                        break;

                }
}


TipoPocion Pocion::getTipo(){
    return _tipo;
}


