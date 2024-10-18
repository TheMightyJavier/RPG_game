#include "arma.h"

ostream& operator <<(ostream& stream, Arma& A){

    stream << "Nombre: " <<A._nombre;
    stream << ", Precio: " << A._precio;
    stream << ", Damage: " << A._damage;
    stream << ", Tipo de Arma: ";
    switch (A.getTipo()) {
                    case Cortante:
                        stream << "Cortante" << endl<< endl;
                        break;
                    case Contundente:
                        stream << "Contundente" << endl<< endl;
                        break;
                    case Arco:
                        stream << "Arco a Distancia" << endl<< endl;
                        break;
                    case Baculo:
                        stream << "Baculo magico" << endl<< endl;
                        break;
                }
    return stream;
}



Arma::Arma(string nom, int dam, TipoArma t){

    _nombre = nom;
    _damage = dam;
    _tipo = t;

}




void Arma::tomarDatos(){

    string nombre;
    int damage;//hacer los intervalos para cada tipo de arma

    cout<< "introduce el nombre " << endl;
    cin>> nombre;
    _nombre=nombre;


     int opcion1;
     do{
     cout << "Seleccione un tipo de Arma:" << endl;
     cout << "1. Tipo Cortante" << endl;
     cout << "2. Tipo contundente" << endl;
     cout << "3. Arco a distancia" << endl;
     cout << "4. Baculo Magico" << endl;

     while (!(cin >> opcion1)) {
                 cout << "Por favor, introduzca un número válido." << endl;
                 cin.clear(); // Limpiar el estado de error de cin
                 cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
             }



         switch (opcion1) {
             case 1:
                 _tipo = Cortante;
                 break;
             case 2:
                 _tipo = Contundente;
                 break;
             case 3:
                 _tipo = Arco;
                 break;
             case 4:
                 _tipo = Baculo;
                 break;

            }

     }while(opcion1 <1 || opcion1 >4);

         if(opcion1==1){
             do{
             cout << "Introduce el poder, valor entre 0-30: " <<endl;
             cin >> damage;
             if (damage >= 0 && damage <= 30) {
                     _damage=damage;
             } else {
                 std::cout << "El valor no es valido" << std::endl;
             }
             }while(damage < 0 || damage > 30);
             _damage = damage;
         }
         else if(opcion1==2){
             do{
             cout << "Introduce el poder, valor entre 0-50: " <<endl;
             cin >> damage;
             if (damage >= 0 && damage <= 50) {
                     _damage=damage;
             } else {
                 std::cout << "El valor no es valido" << std::endl;
             }
             }while(damage < 0 || damage > 50);
             _damage = damage;
         }
         else if(opcion1==3){
             do{
             cout << "Introduce el poder, valor entre 0-70: " <<endl;
             cin >> damage;
             if (damage >= 0 && damage <= 70) {
                     _damage=damage;
             } else {
                 std::cout << "El valor no es valido" << std::endl;
             }
             }while(damage < 0 || damage > 70);
             _damage = damage;
         }
         else if(opcion1==4){
             do{
             cout << "Introduce el poder, valor entre 0-40: " <<endl;
             cin >> damage;
             if (damage >= 0 && damage <= 40) {
                     _damage=damage;
             } else {
                 std::cout << "El valor no es valido" << std::endl;
             }
             }while(damage < 0 || damage > 40);
             _damage = damage;
         }



}


void Arma::mostrar(){

    cout << "Nombre: " <<_nombre;
    cout << ", Damage: " << _damage;
    cout << ", Tipo de Arma: ";
    switch (this->getTipo()) {
                    case Cortante:
                        cout << "Cortante" << endl<< endl;
                        break;
                    case Contundente:
                        cout << "Contundente" << endl<< endl;
                        break;
                    case Arco:
                        cout << "Arco a Distancia" << endl<< endl;
                        break;
                    case Baculo:
                        cout << "Baculo magico" << endl<< endl;
                        break;
                }

}

TipoArma Arma::getTipo(){
    return _tipo;
}

int Arma::getDamage(){
    return _damage;
}

