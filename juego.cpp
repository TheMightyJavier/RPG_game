#include "juego.h"


void Juego::menuDelJuego(){

    crearTienda();
    cargarGraveyard();
    int opcion;
    cout << R"(                                          /|
                                         |\|
                                         |||
                                         |||
                                         |||
                                         |||
                                         |||
                                         |||
                                      ~-[{o}]-~
                                         |/|
                                         |/|
                 ///~`     |\\_          `0'         =\\\\         . .
                ,  |='  ,))\_| ~-_                    _)  \      _/_/|
               / ,' ,;((((((    ~ \                  `~~~\-~-_ /~ (_/\
             /' -~/~)))))))'\_   _/'                      \_  /'  D   |
            (       (((((( ~-/ ~-/                          ~-;  /    \--_
             ~~--|   ))''    ')  `                            `~~\_    \   )
                 :        (_  ~\           ,                    /~~-     ./
                  \        \_   )--__  /(_/)                   |    )    )|
        ___       |_     \__/~-__    ~~   ,'      /,_;,   __--(   _/      |
      //~~\`\    /' ~~~----|     ~~~~~~~~'        \-  ((~~    __-~        |
    ((()   `\`\_(_     _-~~-\                      ``~~ ~~~~~~   \_      /
     )))     ~----'   /      \                                   )       )
      (         ;`~--'        :                                _-    ,;;(
                |    `\       |                             _-~    ,;;;;)
                |    /'`\     ;                          _-~          _/
               /~   /    |    )                         /;;;''  ,;;:-~
              |    /     / | /                         |;;'   ,''
              /   /     |  \\|                         |   ,;(
            _/  /'       \  \_)                   .---__\_    \,--._______
           ( )|'         (~-_|                   (;;'  ;;;~~~/' `;;|  `;;;\
            ) `\_         |-_;;--__               ~~~----__/'    /'_______/
            `----'       (   `~--_ ~~~;;------------~~~~~ ;;;'_/'
                         `~~~~~~~~'~~~-----....___;;;____---~~
    )" << endl;
    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "\t\t -->Juego RPG creado por:" << endl;
    cout << "\t\t\t -->Javier Hernandez-Bueno Regojo" << endl;
    cout << "\t\t\t -->Jaime Truque Lorenzo" << endl << endl << endl;



    cout<<"Bienvenidos al Juego: " << endl << endl;

    do{
        cout<< "--------Menu del Juego----------"<< endl<< endl;

        cout<< "seleccione una opcion; "<<endl;

        cout<< "1. Opciones de Personaje. " <<endl;
        cout<< "2. Opciones de Objeto. " <<endl;
        cout<< "3. Comenzar simulacion. " <<endl;
        cout<< "4. Guardar Listas en un fichero. " <<endl;
        cout<< "5. Agregar Listas desde el fichero. " <<endl;
        cout<< "6. Ir al cementerio. " <<endl;
        cout<< "7. Terminar programa. " <<endl;

        while (!(cin >> opcion)) {
                    cout << "Por favor, introduzca un número." << endl;
                    cin.clear(); // Limpiar el estado de error de cin
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
                }
        switch(opcion){

        case 1:

            menuPersonajes();

            break;

        case 2:

            menuObjetos();

            break;

        case 3:

            simulacionJuego();

            break;
        case 4:

            guardarPersonajes();

            break;
        case 5:

            cargarPersonajes();

            break;
        case 6:

            mostrarGraveyard();

            break;
        case 7:
            cout << "------------------------------------GRACIAS POR JUGAR------------------------------------" << endl;

            cout << R"(                      ,   ,
                     ,-`{-`/
                  ,-~ , \ {-~~-,
                ,~  ,   ,`,-~~-,`,
              ,`   ,   { {      } }                                             }/
             ;     ,--/`\ \    / /                                     }/      /,/
            ;  ,-./      \ \  { {  (                                  /,;    ,/ ,/
            ; /   `       } } `, `-`-.___                            / `,  ,/  `,/
             \|         ,`,`    `~.___,---}                         / ,`,,/  ,`,;
              `        { {                                     __  /  ,`/   ,`,;
                    /   \ \                                 _,`, `{  `,{   `,`;`
                   {     } }       /~\         .-:::-.     (--,   ;\ `,}  `,`;
                   \\._./ /      /` , \      ,:::::::::,     `~;   \},/  `,`;     ,-=-
                    `-..-`      /. `  .\_   ;:::::::::::;  __,{     `/  `,`;     {
                               / , ~ . ^ `~`\:::::::::::<<~>-,,`,    `-,  ``,_    }
                            /~~ . `  . ~  , .`~~\:::::::;    _-~  ;__,        `,-`
                   /`\    /~,  . ~ , '  `  ,  .` \::::;`   <<<~```   ``-,,__   ;
                  /` .`\ /` .  ^  ,  ~  ,  . ` . ~\~                       \\, `,__
                 / ` , ,`\.  ` ~  ,  ^ ,  `  ~ . . ``~~~`,                   `-`--, \
                / , ~ . ~ \ , ` .  ^  `  , . ^   .   , ` .`-,___,---,__            ``
              /` ` . ~ . ` `\ `  ~  ,  .  ,  `  ,  . ~  ^  ,  .  ~  , .`~---,___
            /` . `  ,  . ~ , \  `  ~  ,  .  ^  ,  ~  .  `  ,  ~  .  ^  ,  ~  .  `-,)" << endl;

    cout << "------------------------------------FIN DEL PROGRAMA------------------------------------" << endl;
    guardarGraveyard();
            break;
        }

    }while(opcion !=7);


}
void Juego::menuObjetos(){
    int opcion;
    do{
    cout<< "--------Menu de Objetos----------"<< endl<< endl;
    cout<< "1. Crear Objeto. " <<endl;
    cout<< "2. Mostrar Objetos por pantalla. " <<endl;
    cout<< "3. Añadir Inventario a un Personaje. " <<endl;
    cout<< "4. Salir al Menu. " <<endl;

    while (!(cin >> opcion)) {
                cout << "Por favor, introduzca un número." << endl;
                cin.clear(); // Limpiar el estado de error de cin
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            }
    switch(opcion){

    case 1:
        menuCrearObjetos();
        break;

    case 2:

        mostrarObjetos();

        break;
    case 3:

        agregarInventario();

        break;
    case 4:

        break;

    }


    }while (opcion !=4);


}

void Juego::menuPersonajes(){
    int opcion;
    do{
    cout<< "--------Menu de Personajes----------"<< endl<< endl;

    cout<< "1. Crear Personaje. " <<endl;
    cout<< "2. Mostrar Personajes por pantalla. " <<endl;
    cout<< "3. Opciones de Equipo. " <<endl;
    cout<< "4. Eliminar Personaje. " <<endl;
    cout<< "5. Editar Personaje. " <<endl;
    cout<< "6. Salir al Menu. " <<endl;

    while (!(cin >> opcion)) {
                cout << "Por favor, introduzca un número." << endl;
                cin.clear(); // Limpiar el estado de error de cin
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            }
    switch(opcion){

    case 1:
        menuCrearPersonaje();
        break;

    case 2:

        mostrarPersonajes();

        break;
    case 3:

        menuEquipo();

        break;
    case 4:

       eliminarPersonaje();

        break;
    case 5:
        editarpersonaje();

        break;

    case 6:
        break;
    }

    }while (opcion !=6);

}


void Juego::menuEquipo(){
    int opcion;
    do{
    cout<< "--------Menu de Equipo----------"<< endl<< endl;

    cout<< "1. Añadir Personaje a tu equipo. " <<endl;
    cout<< "2. Mostrar Equipo por pantalla. " <<endl;
    cout<< "3. Eliminar Personaje del Equipo. " <<endl;
    cout<< "4. Salir al Menu. " <<endl;

    while (!(cin >> opcion)) {
                cout << "Por favor, introduzca un número." << endl;
                cin.clear(); // Limpiar el estado de error de cin
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            }
    switch(opcion){

    case 1:
        crearEquipo();
        break;

    case 2:

        mostrarEquipo();

        break;
    case 3:

        eliminardeEquipo();

        break;

    case 4:
        break;
    }


    }while (opcion !=4);
}

void Juego::menuCrearPersonaje(){

    int opcion;

    do{
    cout << "1. Crear un Guerrero"<<endl;
    cout << "2. Crear un Mago"<<endl;
    cout << "3. Crear un Arquero"<<endl;

    while (!(cin >> opcion)) {
                cout << "Por favor, introduzca un número." << endl;
                cin.clear(); // Limpiar el estado de error de cin
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            }
    switch(opcion){
    case 1:
        cout<< "Crear guerrero " << endl;
        Personaje* nuevoGuerrero;
        nuevoGuerrero = paramGuerrero();

        crearPersonajes(*nuevoGuerrero);

        break;

    case 2:
        cout<< "crear Mago " << endl;
        Personaje* nuevoMago;
        nuevoMago = paramMago();

        crearPersonajes(*nuevoMago);

        break;

    case 3:
        cout << "crear Arquero" << endl;
        Personaje* nuevoArquero;
        nuevoArquero = paramArquero();
        crearPersonajes(*nuevoArquero);

        break;
    }
    }while(opcion < 1 || opcion > 3);


}




Guerrero* Juego::paramGuerrero(){

    Guerrero *nuevoGuerrero = new Guerrero;
    nuevoGuerrero->tomarDatos();

    return nuevoGuerrero;
    //delete nuevoGuerrero;
}


Mago* Juego::paramMago(){

    Mago *nuevoMago = new Mago;
    nuevoMago->tomarDatos();
    return nuevoMago;
    //delete nuevoMago;
}


Arquero* Juego::paramArquero(){



    Arquero* nuevoArquero = new Arquero;
    nuevoArquero->tomarDatos();
    return nuevoArquero;
    //delete nuevoArquero;
}


void Juego::crearPersonajes(Personaje &P){


    _listageneral.push_back(&P);

}


void Juego::eliminarPersonaje(){

    if(_listageneral.empty()){
        cout << "NO HAY PERSONAJES" << endl;
    }else{
    mostrarPersonajes();
    int i;
    cout << "Que personaje quieres eliminar. " << endl;
    cin >> i;
    if(_listageneral[i-1]->getEquipo()==1){

    _equipojugable.eliminarPersonaje(_equipojugable.buscar(_listageneral[i-1]->getname()));
    delete _listageneral[i-1];
    _listageneral.erase(_listageneral.begin()+(i-1));


    }else{

//        swap(_listageneral[i-1], _listageneral.back());
//        delete _listageneral.back();
//        _listageneral.pop_back();

        delete _listageneral[i-1];
        _listageneral.erase(_listageneral.begin()+(i-1));

    }
    }
}




void Juego::eliminardeEquipo(){
    mostrarEquipo();
    int i;
    cout << "Que personaje quieres eliminar. " << endl;
    cin >> i;

    _equipojugable.eliminarPersonaje(i-1);
    (_equipojugable.getPersonaje(i)).setEquipo(0);

}


void Juego::editarpersonaje(){
    mostrarPersonajes();
    int i;
    cout << "que personaje quieres editar" << endl;
    cin >> i;
    _listageneral[i-1]->tomarDatos();
}




void Juego::crearEquipo(){

    if(_listageneral.empty()){
        cout << "NO HAY PERSONAJES" << endl;
    }else{
    mostrarPersonajes();
    int i;
    cout << "Introduce el personaje que quieres meter en el equipo: " << endl;
    cin >> i;
    _equipojugable >> *_listageneral[i-1];
    _listageneral[i-1]->setEquipo(1);
    }
}




void Juego::mostrarEquipo(){
    if(_equipojugable.empty()){
        cout << "NO HAY PERSONAJES" << endl;
    }else
    cout << _equipojugable;

}

void Juego::mostrarPersonajes(){
    if(_listageneral.empty()){
        cout << "NO HAY PERSONAJES" << endl;
    }else{
        for(size_t i = 0; i < _listageneral.size(); i++) {
            cout<< "Personaje numero " << i+1 << ":" << endl;
            //_listageneral[i]->mostrarDatos();
            if(Guerrero* P = dynamic_cast<Guerrero*>(_listageneral[i])){
                cout << *P;
                cout << *(P->getInv());
            }

            if(Arquero* P = dynamic_cast<Arquero*>(_listageneral[i])){
                cout << *P;
                cout << *(P->getInv());
            }

            if(Mago* P = dynamic_cast<Mago*>(_listageneral[i])){
                cout << *P;
                cout << *(P->getInv());
            }
        }
    }

}




void Juego::menuCrearObjetos(){
    int opcion;
    Objeto* nuevaArma;
    Objeto* nuevaPocion;

    do{
    cout << "1. Cear un Arma"<<endl;
    cout << "2. Cear una Pocion"<<endl;

    while (!(cin >> opcion)) {
                cout << "Por favor, introduzca un número." << endl;
                cin.clear(); // Limpiar el estado de error de cin
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            }
    switch(opcion){
    case 1:
        cout<< "Crear Un Arma " << endl;

        nuevaArma = paramArma();
        crearObjetos(nuevaArma);

        break;

    case 2:
        cout<< "crear una Pocion " << endl;

        nuevaPocion = paramPocion();
        crearObjetos(nuevaPocion);

        break;
    }
    }while(opcion < 1 || opcion > 2);
}




Arma* Juego::paramArma(){

    Arma *nuevaArma = new Arma;
    nuevaArma->tomarDatos();

    return nuevaArma;
}

Pocion* Juego::paramPocion(){

    Pocion *nuevaPocion = new Pocion;
    nuevaPocion->tomarDatos();

    return nuevaPocion;
}


void Juego::crearObjetos(Objeto *O){
    _objetos.agregarObjeto(*O);
}



void Juego::mostrarObjetos(){

    cout << _objetos;

    //_objetos.mostrarInventario();

}



void Juego::agregarInventario(){

    mostrarPersonajes();
    int i, j;
    cout << "Introduce el personaje al que quieres introducir el Objeto: " << endl;
    cin >> i;
    mostrarObjetos();
    cout << "Introduce el objeto que quieres agregar al inventario: " << endl;
    cin >> j;
    _listageneral[i-1]->crearInventario(_objetos.getObjeto(j));
}





void Juego::guardarPersonajes(){
    ofstream salida("Lista de Personajes.txt", ios::app);
    for(size_t i = 0; i < _listageneral.size(); i++){

        if(Guerrero* P = dynamic_cast<Guerrero*>(_listageneral[i])){
        salida << "GUERRERO," << P->getname() << "," << P->getNivel() << ","
               << P->getSalud() << "," << P->getPoder() << ","
               << P->getProteccion() << "," << P->getPrecision()
               << "," << P->getEscudo() << "," << P->getFuerza() << endl;
        }

        if(Arquero* P = dynamic_cast<Arquero*>(_listageneral[i])){
        salida << "ARQUERO," << P->getname() << "," << P->getNivel() << ","
               << P->getSalud() << "," << P->getPoder() << ","
               << P->getProteccion() << "," << P->getPrecision()
               << "," << P->getFlechas() << "," << P->getAgilidad() << endl;
        }

        if(Mago* P = dynamic_cast<Mago*>(_listageneral[i])){
        salida << "MAGO," << P->getname() << "," << P->getNivel() << ","
               << P->getSalud() << "," << P->getPoder() << ","
               << P->getProteccion() << "," << P->getPrecision()
               << "," << P->getMana() << "," << (P->getHechizo1()+1) << "," << (P->getHechizo2()+1) << endl;
        }
    }
    for(int i = 0; i < _objetos.size(); i++){

        if(Arma* P = dynamic_cast<Arma*>(&_objetos.getObjeto(i+1))){
            if(P->getTipo()==0){
                salida << "CORTANTE," << P->getNombre() << "," << P->getDamage() << ","
                    << P->getTipo() << endl;
            }else if(P->getTipo()==1){

                salida << "CONTUNDENTE," << P->getNombre() << "," << P->getDamage() << ","
                    << P->getTipo() << endl;

            }else if(P->getTipo()==2){

                salida << "ARCO," << P->getNombre() << "," << P->getDamage() << ","
                    << P->getTipo() << endl;

            }else if(P->getTipo()==3){

                salida << "BACULO," << P->getNombre() << "," << P->getDamage() << ","
                    << P->getTipo() << endl;

            }
        }

        if(Pocion* P = dynamic_cast<Pocion*>(&_objetos.getObjeto(i+1))){

            if(P->getTipo()==0){

                salida << "CURACION," << P->getNombre() << "," << P->getTipo() << endl;

            }else if(P->getTipo()==1){

                salida << "MANA," << P->getNombre() << "," << P->getTipo() << endl;

            }
        }


    }
    salida.close();

    cout << "Lista guardada en el archivo de texto" << endl;

}






void Juego::cargarPersonajes(){
    ifstream entrada("Lista de Personajes.txt");
    if (!entrada.is_open()) {
            cout << "Error al abrir el fichero Lista de Personajes.txt" << endl;
            return;
        }
    string linea;
    while(getline(entrada, linea)){
        size_t coma = linea.find(',');
        string tipo = linea.substr(0, coma);

        if(tipo == "GUERRERO"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);
            pos = linea.find(',', pos) + 1;
            int nivel = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int salud = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int poder = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int precision = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int proteccion = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int escudo = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int fuerza = stoi(linea.substr(pos));
            _listageneral.push_back(new Guerrero(nombre, nivel, salud, poder, precision, proteccion, escudo, fuerza));
        }

        else if(tipo == "ARQUERO"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);
            pos = linea.find(',', pos) + 1;
            int nivel = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int salud = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int poder = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int precision = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int proteccion = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int flechas = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int agilidad = stoi(linea.substr(pos));
            _listageneral.push_back(new Arquero(nombre, nivel, salud, poder, precision, proteccion, flechas, agilidad));

        }

        else if(tipo == "MAGO"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);
            pos = linea.find(',', pos) + 1;
            int nivel = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int salud = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int poder = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int precision = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int proteccion = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int mana = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int h1 = stoi(linea.substr(pos));
            pos = linea.find(',', pos) + 1;
            int h2 = stoi(linea.substr(pos));
            _listageneral.push_back(new Mago(nombre, nivel, salud, poder, precision, proteccion, mana, h1, h2));

        }
        else if(tipo == "CORTANTE"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);
            pos = linea.find(',', pos) + 1;
            int damage = stoi(linea.substr(pos, linea.find(',', pos) - pos));

            Objeto* O = new Arma(nombre, damage, Cortante);
            _objetos.agregarObjeto(*O);

        }
        else if(tipo == "CONTUNDENTE"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);
            pos = linea.find(',', pos) + 1;
            int damage = stoi(linea.substr(pos, linea.find(',', pos) - pos));

            Objeto* O = new Arma(nombre, damage, Contundente);
            _objetos.agregarObjeto(*O);

        }
        if(tipo == "ARCO"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);
            pos = linea.find(',', pos) + 1;
            int damage = stoi(linea.substr(pos, linea.find(',', pos) - pos));

            Objeto* O = new Arma(nombre, damage, Arco);
            _objetos.agregarObjeto(*O);
        }
        if(tipo == "BACULO"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);
            pos = linea.find(',', pos) + 1;
            int damage = stoi(linea.substr(pos, linea.find(',', pos) - pos));

            Objeto* O = new Arma(nombre, damage, Baculo);
            _objetos.agregarObjeto(*O);
        }
        if(tipo == "CURACION"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);

            Objeto* O = new Pocion(nombre, Curacion);
            _objetos.agregarObjeto(*O);

        }
        if(tipo == "MANA"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);

            Objeto* O = new Pocion(nombre, Mana);
            _objetos.agregarObjeto(*O);

        }
    }
    entrada.close();
    cout << "Personajes cargados desde fichero"<< endl;

}




void Juego::crearEnemigos(int i){


    //NIVEL1
    if(i==0){

    Personaje* nuevoGuerrero= new Guerrero("Trasgo", 1, 100, 10, 5, 15, 10, 5);
    Personaje* nuevoMago= new Mago("Nigromante", 1, 100, 50, 5, 50, 15, 1, 1);
    Personaje* nuevoArquero= new Arquero("Orco", 1, 100, 10, 5, 20, 5, 3);

    _enemigos.push_back(nuevoGuerrero);
    _enemigos.push_back(nuevoMago);
    _enemigos.push_back(nuevoArquero);

    Objeto* nuevapocion1 = new Pocion("salud", Curacion);
    Objeto* nuevapocion2 = new Pocion("salud", Curacion);
    Objeto* nuevapocion3 = new Pocion("salud", Curacion);

    (_enemigos[0]->getInv())->agregarObjeto(*nuevapocion1);
    (_enemigos[1]->getInv())->agregarObjeto(*nuevapocion2);
    (_enemigos[2]->getInv())->agregarObjeto(*nuevapocion3);

    }

    //NIVEL2

    if(i ==1){
    Personaje* nuevoGuerrero= new Guerrero("Trasgo jefe", 2, 100, 20, 10, 20, 20, 5);
    Personaje* nuevoMago= new Mago("Nigromante oscuro", 2, 100, 60, 10, 55, 20, 1, 1);
    Personaje* nuevoArquero= new Arquero("Uruk-Hai", 2, 100, 14, 10, 30, 10, 8);

    _enemigos.push_back(nuevoGuerrero);
    _enemigos.push_back(nuevoMago);
    _enemigos.push_back(nuevoArquero);

    Objeto* nuevapocion1 = new Pocion("salud", Curacion);
    Objeto* nuevapocion2 = new Pocion("salud", Curacion);
    Objeto* nuevapocion3 = new Pocion("salud", Curacion);

    Objeto* nuevaArma1 = new Arma("Navaja", 30, Cortante);
    Objeto* nuevaArma2 = new Arma("Tirachinas", 40, Arco);
    Objeto* nuevaArma3 = new Arma("Baculo de madera", 30, Baculo);

    (_enemigos[0]->getInv())->agregarObjeto(*nuevapocion1);
    (_enemigos[1]->getInv())->agregarObjeto(*nuevapocion2);
    (_enemigos[2]->getInv())->agregarObjeto(*nuevapocion3);

    (_enemigos[0]->getInv())->agregarObjeto(*nuevaArma1);
    (_enemigos[1]->getInv())->agregarObjeto(*nuevaArma2);
    (_enemigos[2]->getInv())->agregarObjeto(*nuevaArma3);
    }

    //NIVEL3

    if(i ==2){
    Personaje* nuevoGuerrero= new Guerrero("Trasgo Gigante", 3, 100, 30, 10, 20, 30, 5);
    Personaje* nuevoMago= new Mago("Dios Nigromante", 3, 100, 70, 10, 60, 20, 1, 1);
    Personaje* nuevoArquero= new Arquero("Ciclope", 3, 100, 20, 10, 30, 15, 12);

    _enemigos.push_back(nuevoGuerrero);
    _enemigos.push_back(nuevoMago);
    _enemigos.push_back(nuevoArquero);

    Objeto* nuevapocion1 = new Pocion("salud", Curacion);
    Objeto* nuevapocion2 = new Pocion("salud", Curacion);
    Objeto* nuevapocion3 = new Pocion("salud", Curacion);

    Objeto* nuevaArma1 = new Arma("Navaja", 30, Cortante);
    Objeto* nuevaArma2 = new Arma("Tirachinas", 40, Arco);
    Objeto* nuevaArma3 = new Arma("Baculo de madera", 30, Baculo);

    (_enemigos[0]->getInv())->agregarObjeto(*nuevapocion1);
    (_enemigos[1]->getInv())->agregarObjeto(*nuevapocion2);
    (_enemigos[2]->getInv())->agregarObjeto(*nuevapocion3);

    (_enemigos[0]->getInv())->agregarObjeto(*nuevaArma1);
    (_enemigos[1]->getInv())->agregarObjeto(*nuevaArma2);
    (_enemigos[2]->getInv())->agregarObjeto(*nuevaArma3);

    }
}



void Juego::simulacionJuego(){

    int opcion;
    cout << "----------------------------------------------------" << endl;
    cout<<"Simulacion comenzada: " << endl;
    cout << "----------------------------------------------------" << endl << endl;


    do{

        cout<< "------Seleccione una opcion------"<<endl;

        cout<< "1. Empezar batalla. " <<endl;
        cout<< "2. Gestionar equipo. " <<endl;
        cout<< "3. Tienda. " <<endl;
        cout<< "4. Terminar simulacion. " <<endl;
        while (!(cin >> opcion)) {
                    cout << "Por favor, introduzca un número." << endl;
                    cin.clear(); // Limpiar el estado de error de cin
                    cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
                }

        //cin>> opcion;
        switch(opcion){

        case 1:
            if(_equipojugable.size()<=0){

                cout << "Tienes que añadir personajes a tu equipo" << endl;

            }else{

                batalla();

            }

            break;

        case 2:

            menuEquipo();

            break;

        case 3:

            tiendadeObjetos();

            break;

        case 4:

            cout<< "--------FIN DE LA SIMULACION--------" << endl;

            break;
        }

    }while(opcion !=4);

}

void Juego::crearTienda(){

    Objeto* pocionT1 = new Pocion("Salud", Curacion);
    Objeto* pocionT2 = new Pocion("Mana", Mana);
    pocionT1->setPrecio(10);
    pocionT2->setPrecio(10);


    Objeto* Arma1 = new Arma("Navaja", 30, Cortante);
    Objeto* Arma2 = new Arma("Mazo", 50, Contundente);
    Objeto* Arma3 = new Arma("Tirachinas", 70, Arco);
    Objeto* Arma4 = new Arma("Baculo de madera", 40, Baculo);
    Arma1->setPrecio(20);
    Arma2->setPrecio(20);
    Arma3->setPrecio(20);
    Arma4->setPrecio(20);


    _tienda.agregarObjeto(*pocionT1);
    _tienda.agregarObjeto(*pocionT2);
    _tienda.agregarObjeto(*Arma1);
    _tienda.agregarObjeto(*Arma2);
    _tienda.agregarObjeto(*Arma3);
    _tienda.agregarObjeto(*Arma4);
}


void Juego::tiendadeObjetos(){

    // Código ANSI para color verde
        const string green = "\033[32m";
        // Código ANSI para resetear el color
        const string reset = "\033[0m";

        cout << green;
        cout << "----------------------------------------------------" << endl;
        cout << "Bienvenido a la tienda" << endl;
        cout << "----------------------------------------------------" << endl <<endl;
        cout << reset;
        int opcion, j, k;
    do{

            cout << green;
            cout<< "Seleccione una opcion; "<<endl;
            cout<< "1. Comprar Objeto. " <<endl;
            cout<< "2. Salir de la tienda. " <<endl;
            cout << reset;

            while (!(cin >> opcion)) {

                        cout << "Por favor, introduzca un número." << endl;
                        cin.clear(); // Limpiar el estado de error de cin
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
                    }
            int dinero;
            switch(opcion){
            case 1:
                if(_equipojugable.size() <=0){
                    cout << green;
                    cout << "No tienes Personajes en el equipo" << endl;
                    cout << reset;
                }else{

                for(int i=0; i<= _tienda.size(); i++){




                    if(Pocion* P = dynamic_cast<Pocion*> (&_tienda.getObjeto(i+1))){

                        cout<< "Objeto numero " << i+1 << endl;
                        cout << *P;


                    }else if(Arma* P = dynamic_cast<Arma*> (&_tienda.getObjeto(i+1))){

                        cout<< "Objeto numero " << i+1 << endl;
                        cout << *P;

                    }
                }



                    cout<< "Que Objeto quieres comprar: " << endl;
                    cin >> j;

                    mostrarEquipo();
                    cout << "A que Personaje quieres agregar el arma: " << endl;
                    cin >> k;

                    if(k < 1 || k > _equipojugable.size()){
                        cout << "No es una opcion valida" << endl;
                    }else{

                    if(_equipojugable.getPersonaje(k-1).getDinero() >= _tienda.getObjeto(j).getPrecio()){

                    _equipojugable.getPersonaje(k-1).crearInventario(_tienda.getObjeto(j));
                    dinero = _equipojugable.getPersonaje(k-1).getDinero() - _tienda.getObjeto(j).getPrecio();
                    _equipojugable.getPersonaje(k-1).setDinero(dinero);

                    }else{cout << "No Tienes dinero suficiente" << endl;}

                    }


                }

                break;

            case 2:



                break;
            }
    }while(opcion !=2);




}


void Juego::batalla(){

    cout << "----------------------------------------------------" << endl;
    cout << "Bienvenido a la batalla." << endl;
    cout << "----------------------------------------------------" << endl << endl;
    crearEnemigos(_nivel);
    int O = dado();

    const string red = "\033[31m";
    const string oranje = "\033[38;5;214m";
    const string reset = "\033[0m";

    if(O<6){
        cout<< "En esta ronda tu atacas primero" << endl;

    }else{cout<< "En esta ronda tu atacas segundo" << endl;}


    do{
        string enemigoNombre = _enemigos[0]->getname();
            int enemigoNivel = _enemigos[0]->getNivel();
            int enemigoSalud = _enemigos[0]->getSalud();

            string personajeNombre = _equipojugable.getPersonaje(0).getname();
            int personajeNivel = _equipojugable.getPersonaje(0).getNivel();
            int personajeSalud = _equipojugable.getPersonaje(0).getSalud();

            int ancho = 50;
                cout << oranje;
            cout << "----------------------------------------------------" << endl;
            cout << "Te estas enfrentando a: " << enemigoNombre
                      << setw(ancho - enemigoNombre.length() - 23) << " |B" << endl;
            cout << "Nivel: " << enemigoNivel
                      << setw(ancho - to_string(enemigoNivel).length() - 6) << " |A" << endl;  // -6 para ajustar "Nivel: "
            cout << "Salud: " << enemigoSalud
                      << setw(ancho - to_string(enemigoSalud).length() - 6) << " |T" << endl;  // -6 para ajustar "Salud: "
            cout << setw(ancho + 1) << " |A" << endl;  // +6 para ajustar la posición
            cout << "Con tu Personaje: " << personajeNombre
                      << setw(ancho - personajeNombre.length() - 17) << " |L" << endl;
            cout << "Nivel: " << personajeNivel
                      << setw(ancho - to_string(personajeNivel).length() - 6) << " |L" << endl;  // -6 para ajustar "Nivel: "
            cout << "Salud: " << personajeSalud
                      << setw(ancho - to_string(personajeSalud).length() - 6) << " |A" << endl;  // -6 para ajustar "Salud: "
            cout << endl;
            cout << reset;

            int opcion;
            cout << oranje;
            cout << "----------------------------------------------------" << endl << endl;
            cout << reset;
            cout << "Seleccione una opcion; "<<endl;
            cout << "1. Atacar. " <<endl;
            cout << "2. Usar pociones. " <<endl;
            cout << "3. Cambiar Personaje. " <<endl;
            cout << "4. Ver Objetos en el Inventario" << endl;
            cout << "----------------------------------------------------" << endl << endl;

            while (!(cin >> opcion)) {
                        cout << "Por favor, introduzca un número." << endl;
                        cin.clear(); // Limpiar el estado de error de cin
                        cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
                    }

            switch(opcion){

            case 1:

             if(Mago* P = dynamic_cast<Mago*>(&(_equipojugable.getPersonaje(0)))){


                if(P->getMana()<5){

                    cout << "No tienes Mana, atacas directamente" << endl;
                    orden(O);

                }else{

                    cout<< "seleccione una opcion; "<<endl;

                    cout<< "1. Atacar. " <<endl;
                    cout<< "2. Usar Hechizo. " <<endl;
                    cout << "3. Volver" << endl;
                    while (!(cin >> opcion)) {
                                cout << "Por favor, introduzca un número." << endl;
                                cin.clear(); // Limpiar el estado de error de cin
                                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
                            }
                    switch(opcion){

                        case 1:

                            orden(O);


                            break;

                        case 2:

                            usarHechizo();


                            break;

                        case 3:

                            break;
                    }
                }

            }else{orden(O);}

            break;

        case 2:

            if((_equipojugable.getPersonaje(0)).getInv()->numPociones() >0){

                usarPocion();

            }else{cout << "No tienes pociones disponibles" << endl;}

            break;

        case 3:

            mostrarEquipo();
            _equipojugable.cambiarPosicion();

            break;

        case 4:

             _equipojugable.getPersonaje(0).getInv()->mostrarInventario();

            break;

        }



    }while(_enemigos.size() >0 && _equipojugable.size() >0);

    cout<< "----------------FIN DE LA BATALLA----------------" << endl << endl;

    if(_enemigos.size()<=0){
        cout<< "Has ganado!" << endl;
        _nivel++;

    }else{    cout << red;
        cout << "\t\t\t\t                   .-\"/   .-\"/\n"
                   << "\t\t\t\t                  /  (.-./  (\n"
                   << "\t\t\t\t                 /           \\      .^.\n"
                   << "\t\t\t\t                |  -=- -=-    |    (_|_)\n"
                   << "\t\t\t\t                 \\   /       /      // \n"
                   << "\t\t\t\t                  \\  .=.    /       \\\\\n"
                   << "\t\t\t\t             ___.__`..;._.-'---...  //\n"
                   << "\t\t\t\t       __.--\"        `;'     __   `-.  \n"
                   << "\t\t\t\t-===-.--\"\"      __.,              \"\"-.  \".\n"
                   << "\t\t\t\t'=_    __.---\"   | `__    __'   / .'  .'\n"
                   << "\t\t\t\t`'-\"\"\"\"           \\             .'  .'\n"
                   << "\t\t\t\t                  |  __ __    /   |\n"
                   << "\"ya don't like these,\t\t\t          |  __ __   //`'`'\n"
                   << "you're OUT!\"\t\t\t                  |         ' | //\n"
                   << "\t\t\t\t                  |    .      |//\n"
                   << "\t\t\t\t                 .'`., , ,,,.`'.\n"
                   << "\t\t\t\t                .'`',.',`.` ,.'.`\n"
                   << "\t\t\t\t                 ',',,,,.'...',,'\n"
                   << "\t\t\t\t                 '..,',`'.`,`,.',\n"
                   << "\t\t\t\t                ,''.,'.,;',.'.`.'\n"
                   << "\t\t\t\t                '.`.',`,;',',;,.;\n"
                   << "\t\t\t\t                 ',`'.`';',',`',.\n"
                   << "\t\t\t\t                  |     |     |\n"
                   << "\t\t\t\t                  (     (     | " << endl;
        cout << reset;
        for(size_t i=0; i < _enemigos.size(); i++){

            if(_enemigos[i]->getInv()->size()>0){

            _enemigos[i]->borrarInv();
            delete _enemigos[i];
            _enemigos.erase(_enemigos.begin());


            }else{

                delete _enemigos[i];
                _enemigos.erase(_enemigos.begin());


            }
            _nivel =0;
        }

    }
}

void Juego::orden(int i){
    if(i < 6){
        ataque();

    }else{
        accionEnemiga2();

    }
}




void Juego::ataque(){

    const string red = "\033[31m";
    const string blue = "\033[34m";
    const string reset = "\033[0m";
    const string green = "\033[32m";



    int acertar1 = dado();

    //EQUIPO

    if((_equipojugable.getPersonaje(0)).getPrecision() > acertar1){

        int newsalud;
        cout << blue;
        cout << "El damage de " << _equipojugable.getPersonaje(0).getname() << " es: "
         << calcularDano(&(_equipojugable.getPersonaje(0))) << endl;
        cout << "La defensa de " << _enemigos[0]->getname() << " es: " << calcularDefensa(_enemigos[0]) << endl;
        cout << reset;

        newsalud = _enemigos[0]->getSalud() - (calcularDano(&(_equipojugable.getPersonaje(0))) - calcularDefensa(_enemigos[0]));

        if(newsalud <= 0){
            cout << green;
            cout << "El enemigo ha muerto"<< endl;
            cout << reset;

            ++_equipojugable.getPersonaje(0);

            if(_enemigos[0]->getInv()->size()>0){

            _enemigos[0]->borrarInv();
            delete _enemigos[0];
            _enemigos.erase(_enemigos.begin());


            }else{

                delete _enemigos[0];
                _enemigos.erase(_enemigos.begin());


            }

        }
        else if(newsalud >100){

            cout << red;
            cout << "El ataque es muy bajo, no afecta a " << _enemigos[0]->getname() << endl;
            cout << reset;

            //ENEMIGO


            accionEnemiga();
        }
        else if(newsalud <=100 && newsalud >=0){

        _enemigos[0]->setSalud(newsalud);
        cout << blue;
        cout << "La salud de " << _enemigos[0]->getname() << " es: " << _enemigos[0]->getSalud() << endl;
        cout << reset;

        //ENEMIGO


        accionEnemiga();
        }

    }else{

        cout << red;
        cout << "El ataque de " << _equipojugable.getPersonaje(0).getname() << " ha fallado " << endl;
        cout << reset;

        //ENEMIGO


        accionEnemiga();
    }


}

void Juego::ataque2(){


    const string red = "\033[31m";
    const string blue = "\033[34m";
    const string reset = "\033[0m";
    const string green = "\033[32m";

    int acertar1 = dado();

    //EQUIPO

    if((_equipojugable.getPersonaje(0)).getPrecision() > acertar1){

        int newsalud;
        cout << blue;
        cout << "El damage de " << _equipojugable.getPersonaje(0).getname() << " es: "
         << calcularDano(&(_equipojugable.getPersonaje(0))) << endl;
        cout << "La defensa de " << _enemigos[0]->getname() << " es: " << calcularDefensa(_enemigos[0]) << endl;
        cout << reset;
        newsalud = _enemigos[0]->getSalud() - (calcularDano(&(_equipojugable.getPersonaje(0))) - calcularDefensa(_enemigos[0]));

        if(newsalud <= 0){
            cout << green;
            cout << "El enemigo ha muerto"<< endl;
            cout << reset;

            ++_equipojugable.getPersonaje(0);

            if(_enemigos[0]->getInv()->size()>0){

            _enemigos[0]->borrarInv();
            delete _enemigos[0];
            _enemigos.erase(_enemigos.begin());


            }else{

                delete _enemigos[0];
                _enemigos.erase(_enemigos.begin());


            }

        }
        else if(newsalud >100){

            cout << red;
            cout << "El ataque es muy bajo, no afecta a " << _enemigos[0]->getname() << endl;
            cout << reset;

        }
        else if(newsalud <=100 && newsalud >=0){

        _enemigos[0]->setSalud(newsalud);

        cout << blue;
        cout << "La salud de " << _enemigos[0]->getname() << " es: " << _enemigos[0]->getSalud() << endl;
        cout << reset;

        }

    }else{

        cout << red;
        cout << "El ataque de " << _equipojugable.getPersonaje(0).getname() << " ha fallado " << endl;
        cout << reset;

    }


}


void Juego::accionEnemiga(){

    const string red = "\033[31m";
    const string yellow = "\033[33m";
    const string green = "\033[32m";
    const string reset = "\033[0m";
    int acertar1 = dado();
    int contador = 0;


    if(_enemigos[0]->getSalud() < 10 && (_enemigos[0])->getInv()->numPociones() >0){

        if(contador == 0 ){

        for (int i =0; i < _enemigos[0]->getInv()->size(); i++){

            if (Pocion* P = dynamic_cast<Pocion*>(&(_enemigos[0]->getInv()->getObjeto(i+1)))) {

                if(P->getTipo()==0){

                    int salud = _enemigos[0]->getSalud() + 40;

                    if (salud > 100){
                        cout << yellow;
                        cout << _enemigos[0]->getname() << "Ha usado una pocion" << endl;
                        cout << reset;

                        salud =100;
                        _enemigos[0]->setSalud(salud);
                        contador++;


                    }else{
                        cout << yellow;
                        cout << _enemigos[0]->getname() << "Ha usado una pocion" << endl;
                        cout << reset;

                        _enemigos[0]->setSalud(salud);
                        contador++;

                    }

                }
            }

        }
        }


    }else{


        if (dynamic_cast<Mago*>(_enemigos[0]) != nullptr){

            Mago* P = dynamic_cast<Mago*>(_enemigos[0]);
            if(P->getMana() < 5){


                if(_enemigos[0]->getPrecision() > acertar1){
                    int saludpersonaje;

                    cout << yellow;
                    cout << "El damage de " << _enemigos[0]->getname() << " es: " << calcularDano(_enemigos[0]) << endl;

                    cout << "La defensa de " << _equipojugable.getPersonaje(0).getname() << " es: "
                         << calcularDefensa(&(_equipojugable.getPersonaje(0))) << endl;
                    cout << reset;


                    saludpersonaje = _equipojugable.getPersonaje(0).getSalud() - (calcularDano(_enemigos[0]) - calcularDefensa(&(_equipojugable.getPersonaje(0))));

                    if(saludpersonaje <= 0){

                        cout << red;
                        cout << _equipojugable.getPersonaje(0).getname() << " ha muerto"<< endl;
                        cout << reset;


                        graveyard(_equipojugable.getPersonaje(0));


                    }else if(saludpersonaje >100){

                        cout << green;
                        cout << "El ataque es muy bajo, no afecta a " << _equipojugable.getPersonaje(0).getname() << endl;
                        cout << reset;


                    }else if(saludpersonaje <=100 && saludpersonaje >=0){

                        _equipojugable.getPersonaje(0).setSalud(saludpersonaje);

                        cout << yellow;
                        cout << "La salud de " << _equipojugable.getPersonaje(0).getname() << " es: "
                             << (_equipojugable.getPersonaje(0)).getSalud() << endl;
                        cout << reset;

                     }

                }else{
                    cout << green;
                    cout << "El ataque de " << _enemigos[0]->getname() << " ha fallado " << endl;
                    cout << reset;


                }

            }else{

                //USAR HECHIZO
                cout << yellow;
                cout << _enemigos[0]->getname() << " ha usado bola de fuego"<< endl;
                cout << reset;
                int salud = (_equipojugable.getPersonaje(0)).getSalud() -40;

                if(salud<=0){

                    cout << red;
                    cout << _equipojugable.getPersonaje(0).getname() << " ha muerto"<< endl;
                    cout << "Se ha enviado al Cementerio"<< endl;
                    cout << reset;



                    graveyard(_equipojugable.getPersonaje(0));


                }else{
                    _equipojugable.getPersonaje(0).setSalud(salud);

                }

                int mana = P->getMana() - 5;
                P->setMana(mana);

            }



        }else{



            if(_enemigos[0]->getPrecision() > acertar1){
                int saludpersonaje;

                cout << yellow;
                cout << "El damage de " << _enemigos[0]->getname() << " es: " << calcularDano(_enemigos[0]) << endl;

                cout << "La defensa de " << _equipojugable.getPersonaje(0).getname() << " es: "
                     << calcularDefensa(&(_equipojugable.getPersonaje(0))) << endl;
                cout << reset;


                saludpersonaje = _equipojugable.getPersonaje(0).getSalud() - (calcularDano(_enemigos[0]) - calcularDefensa(&(_equipojugable.getPersonaje(0))));

                if(saludpersonaje <= 0){

                    cout << red;
                    cout << _equipojugable.getPersonaje(0).getname() << " ha muerto"<< endl;
                    cout << "Se ha enviado al Cementerio"<< endl;
                    cout << reset;

                    graveyard(_equipojugable.getPersonaje(0));

                }
                else if(saludpersonaje >100){

                    cout << green;
                    cout << "El ataque es muy bajo, no afecta a " << _equipojugable.getPersonaje(0).getname() << endl;
                    cout << reset;


                }else{

                    _equipojugable.getPersonaje(0).setSalud(saludpersonaje);

                    cout << yellow;
                    cout << "La salud de " << _equipojugable.getPersonaje(0).getname() << " es: "
                         << (_equipojugable.getPersonaje(0)).getSalud() << endl;
                    cout << reset;

                 }

            }else{
                cout << green;
                cout << "El ataque de " << _enemigos[0]->getname() << " ha fallado " << endl;
                cout << reset;

            }

        }

     }

}




void Juego::accionEnemiga2(){

    const string red = "\033[31m";
    const string yellow = "\033[33m";
    const string green = "\033[32m";
    const string reset = "\033[0m";
    int acertar1 = dado();
    int contador = 0;


    if(_enemigos[0]->getSalud() < 10 && (_enemigos[0])->getInv()->numPociones() >0){
        if(contador == 0 ){

        for (int i =0; i < _enemigos[0]->getInv()->size(); i++){

            if (Pocion* P = dynamic_cast<Pocion*>(&(_enemigos[0]->getInv()->getObjeto(i+1)))) {

                if(P->getTipo()==0){

                    int salud = _enemigos[0]->getSalud() + 40;

                    if (salud > 100){
                        cout << yellow;
                        cout << _enemigos[0]->getname() << "Ha usado una pocion" << endl;
                        cout << reset;

                        salud =100;
                        _enemigos[0]->setSalud(salud);
                        contador++;


                    }else{
                        cout << yellow;
                        cout << _enemigos[0]->getname() << "Ha usado una pocion" << endl;
                        cout << reset;

                        _enemigos[0]->setSalud(salud);
                        contador++;

                    }

                }
            }

        }
        }


    }else{


        if (dynamic_cast<Mago*>(_enemigos[0]) != nullptr){

            Mago* P = dynamic_cast<Mago*>(_enemigos[0]);
            if(P->getMana() < 5){


                if(_enemigos[0]->getPrecision() > acertar1){
                    int saludpersonaje;

                    cout << yellow;
                    cout << "El damage de " << _enemigos[0]->getname() << " es: " << calcularDano(_enemigos[0]) << endl;

                    cout << "La defensa de " << _equipojugable.getPersonaje(0).getname() << " es: "
                         << calcularDefensa(&(_equipojugable.getPersonaje(0))) << endl;
                    cout << reset;


                    saludpersonaje = _equipojugable.getPersonaje(0).getSalud() - (calcularDano(_enemigos[0]) - calcularDefensa(&(_equipojugable.getPersonaje(0))));

                    if(saludpersonaje <= 0){

                        cout << red;
                        cout << _equipojugable.getPersonaje(0).getname() << " ha muerto"<< endl;
                        cout << reset;

                        string nombre = _equipojugable.getPersonaje(0).getname();

                        graveyard(_equipojugable.getPersonaje(0));
                        for(size_t i = 0; i < _listageneral.size(); i++){

                            if(_listageneral[i]->getname() == nombre){

                                _equipojugable.eliminarPersonaje(_equipojugable.buscar(nombre));
                                delete _listageneral[0];
                                _listageneral.erase(_listageneral.begin()+i);
                            }
                        }

                    }else if(saludpersonaje >100){

                        cout << green;
                        cout << "El ataque es muy bajo, no afecta a " << _equipojugable.getPersonaje(0).getname() << endl;
                        cout << reset;
                        ataque2();

                    }else if(saludpersonaje <=100 && saludpersonaje >=0){

                        _equipojugable.getPersonaje(0).setSalud(saludpersonaje);

                        cout << yellow;
                        cout << "La salud de " << _equipojugable.getPersonaje(0).getname() << " es: "
                             << (_equipojugable.getPersonaje(0)).getSalud() << endl;
                        cout << reset;
                        ataque2();
                     }

                }else{
                    cout << green;
                    cout << "El ataque de " << _enemigos[0]->getname() << " ha fallado " << endl;
                    cout << reset;
                    ataque2();

                }

            }else{

                //USAR HECHIZO
                cout << yellow;
                cout << _enemigos[0]->getname() << " ha usado bola de fuego"<< endl;
                cout << reset;
                int salud = (_equipojugable.getPersonaje(0)).getSalud() -40;

                if(salud<=0){

                    cout << red;
                    cout << _equipojugable.getPersonaje(0).getname() << " ha muerto"<< endl;
                    cout << "Se ha enviado al Cementerio"<< endl;
                    cout << reset;

                    string nombre = _equipojugable.getPersonaje(0).getname();

                    graveyard(_equipojugable.getPersonaje(0));
                    for(size_t i = 0; i < _listageneral.size(); i++){

                        if(_listageneral[i]->getname() == nombre){

                            _equipojugable.eliminarPersonaje(_equipojugable.buscar(nombre));
                            delete _listageneral[0];
                            _listageneral.erase(_listageneral.begin()+i);
                        }
                    }

                }else{
                    _equipojugable.getPersonaje(0).setSalud(salud);
                    ataque2();
                }

                int mana = P->getMana() - 5;
                P->setMana(mana);

            }



        }else{



            if(_enemigos[0]->getPrecision() > acertar1){
                int saludpersonaje;

                cout << yellow;
                cout << "El damage de " << _enemigos[0]->getname() << " es: " << calcularDano(_enemigos[0]) << endl;

                cout << "La defensa de " << _equipojugable.getPersonaje(0).getname() << " es: "
                     << calcularDefensa(&(_equipojugable.getPersonaje(0))) << endl;
                cout << reset;


                saludpersonaje = _equipojugable.getPersonaje(0).getSalud() - (calcularDano(_enemigos[0]) - calcularDefensa(&(_equipojugable.getPersonaje(0))));

                if(saludpersonaje <= 0){

                    cout << red;
                    cout << _equipojugable.getPersonaje(0).getname() << " ha muerto"<< endl;
                    cout << "Se ha enviado al Cementerio"<< endl;
                    cout << reset;

                    graveyard(_equipojugable.getPersonaje(0));

                }
                else if(saludpersonaje >100){

                    cout << green;
                    cout << "El ataque es muy bajo, no afecta a " << _equipojugable.getPersonaje(0).getname() << endl;
                    cout << reset;
                    ataque2();

                }else{

                    _equipojugable.getPersonaje(0).setSalud(saludpersonaje);

                    cout << yellow;
                    cout << "La salud de " << _equipojugable.getPersonaje(0).getname() << " es: "
                         << (_equipojugable.getPersonaje(0)).getSalud() << endl;
                    cout << reset;
                    ataque2();
                 }

            }else{
                cout << green;
                cout << "El ataque de " << _enemigos[0]->getname() << " ha fallado " << endl;
                cout << reset;
                ataque2();
            }

        }

     }

}




void Juego::usarHechizo(){
    const string blue = "\033[34m";
    const string reset = "\033[0m";
    const string green = "\033[32m";

    int i;
    Mago* M1 = dynamic_cast<Mago*>(&_equipojugable.getPersonaje(0));

    M1->mostrarHechizos();

    do{
    cout << "Que hechizo quieres usar?" << endl;
    while (!(cin >> i)) {
                cout << "Por favor, introduzca un número válido." << endl;
                cin.clear(); // Limpiar el estado de error de cin
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            }
    if (i >= 1 && i <= 2) {


        //HECHIZO1

        if(i==1){

            //AGUA
            if(M1->getHechizo1()==0){

                int j;
                mostrarEquipo();

                do{
                cout << "introduce el personaje que personaje quieres curar" << endl;
                cin >> j;
                if (j >= 1 && j <= _equipojugable.size()) {

                    int salud = _equipojugable.getPersonaje(j-1).getSalud() + 40;
                    cout << blue;
                    cout << "Has usado un hechizo de Agua sobre: " << _equipojugable.getPersonaje(j-1).getname() << endl;
                    cout << reset;

                    if (salud > 100){

                        salud =100;
                        _equipojugable.getPersonaje(j-1).setSalud(salud);


                    }else{_equipojugable.getPersonaje(j-1).setSalud(salud);}



                } else {
                    std::cout << "El valor no es valido" << std::endl;
                }
                }while(j < 1 || j > _equipojugable.size());

                int mana = M1->getMana() - 5;
                M1->setMana(mana);


            }
            //FUEGO
            else if(M1->getHechizo1()==1){
                int salud = _enemigos[0]->getSalud() -40;
                cout << blue;
                cout << "Has usado bola de fuego" << endl;
                cout << reset;

                if(salud<=0){
                    cout << green;
                    cout << _enemigos[0]->getname() << " ha muerto"<< endl;
                    cout << reset;
                    _enemigos[0]->borrarInv();
                    delete _enemigos[0];
                    _enemigos.erase(_enemigos.begin());
                }else{
                    _enemigos[0]->setSalud(salud);
                }
                int mana = M1->getMana() - 5;
                M1->setMana(mana);

            }

            //TIERRA
            else if(M1->getHechizo1()==2){

                cout << blue;
                cout << "Has usado un hechizo de Tierra" << endl;
                cout << reset;

                int prot = (_enemigos[0]->getProteccion())/2;

                _enemigos[0]->setProteccion(prot/2);

                int mana = M1->getMana() - 5;
                M1->setMana(mana);

            }

            //AIRE
            else if(M1->getHechizo1()==3){

                cout << blue;
                cout << "Has usado un hechizo de Aire" << endl;
                cout << reset;

                int poder = (_enemigos[0]->getPoder())/2;

                _enemigos[0]->setPoder(poder/2);

                int mana = M1->getMana() - 5;
                M1->setMana(mana);

            }
        }


        //HECHIZO2

        else if(i==2){


            //AGUA
            if(M1->getHechizo2()==0){

                int j;
                mostrarEquipo();

                do{
                cout << "introduce el personaje que personaje quieres curar" << endl;
                cin >> j;
                if (j >= 1 && j <= _equipojugable.size()) {

                    int salud = _equipojugable.getPersonaje(j-1).getSalud() + 40;
                    cout << blue;
                    cout << "Has usado un hechizo de Agua sobre: " << _equipojugable.getPersonaje(j-1).getname() << endl;
                    cout << reset;

                    if (salud > 100){


                        salud =100;
                        _equipojugable.getPersonaje(j-1).setSalud(salud);

                    }else{_equipojugable.getPersonaje(j-1).setSalud(salud);}



                } else {
                    std::cout << "El valor no es valido" << std::endl;
                }
                }while(j < 1 || j > _equipojugable.size());

                int mana = M1->getMana() - 5;
                M1->setMana(mana);
            }

            //FUEGO

            else if(M1->getHechizo2()==1){
                int salud = _enemigos[0]->getSalud() -40;
                cout << blue;
                cout << "Has usado bola de fuego" << endl;
                cout << reset;

                if(salud<=0){
                    cout << green;
                    cout << _enemigos[0]->getname() << " ha muerto"<< endl;
                    cout << reset;
                    _enemigos[0]->borrarInv();
                    delete _enemigos[0];
                    _enemigos.erase(_enemigos.begin());
                }else{
                    _enemigos[0]->setSalud(salud);
                }

                int mana = M1->getMana() - 5;
                M1->setMana(mana);
            }

            //TIERRA
            else if(M1->getHechizo2()==2){

                cout << blue;
                cout << "Has usado un hechizo de Tierra" << endl;
                cout << reset;

                int prot = (_enemigos[0]->getProteccion());

                _enemigos[0]->setProteccion(prot/2);

                int mana = M1->getMana() - 5;
                M1->setMana(mana);

            }

            //AIRE
            else if(M1->getHechizo2()==3){

                cout << blue;
                cout << "Has usado un hechizo de Aire" << endl;
                cout << reset;

                int poder = (_enemigos[0]->getPoder());

                _enemigos[0]->setPoder(poder/2);

                int mana = M1->getMana() - 5;
                M1->setMana(mana);

            }
        }


    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(i < 1 || i > 2);





}


void Juego::usarPocion(){
    const string blue = "\033[34m";
    const string reset = "\033[0m";


    int i, f=0;

    do{
        (_equipojugable.getPersonaje(0)).getInv()->mostrarPociones();
    cout << "Que Pocion quieres usar?" << endl;
    while (!(cin >> i)) {
                cout << "Por favor, introduzca un número." << endl;
                cin.clear(); // Limpiar el estado de error de cin
                cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada incorrecta
            }
    if (i >= 0 && i <= (_equipojugable.getPersonaje(0)).getInv()->size()
            && dynamic_cast<Pocion*>(&(_equipojugable.getPersonaje(0)).getInv()->getObjeto(i)))
    {

        Pocion* P1 = dynamic_cast<Pocion*>(&(_equipojugable.getPersonaje(0)).getInv()->getObjeto(i));

        //CURACION
        if(P1->getTipo()==0){
            cout << blue;
            cout << "Has usado una Pocion de curacion" << endl;
            cout << reset;


                int salud = _equipojugable.getPersonaje(0).getSalud() + 40;

                if (salud > 100){

                    salud =100;
                    _equipojugable.getPersonaje(0).setSalud(salud);

                }else{_equipojugable.getPersonaje(0).setSalud(salud);}
        }

        //MANA

        if(P1->getTipo()==1){
            cout << blue;
            cout << "Has usado una Pocion de mana" << endl;
            cout << reset;

            Mago* M1 = dynamic_cast<Mago*>(&_equipojugable.getPersonaje(0));
            int mana = M1->getMana() + 10;
            if(mana>20){
                mana = 20;
                M1->setMana(mana);

            }else{
                M1->setMana(mana);
            }
        }

        f=1;
    } else {
        std::cout << "El valor no es valido" << std::endl;
    }
    }while(f !=1);


    accionEnemiga();
}




int Juego::calcularDano(Personaje *P){

    //hacer para cada tamaño de inventario, seria dentro del casteo

    int dano=0;

        //GUERRERO

        if(Guerrero* A = dynamic_cast<Guerrero*>(P)){

            if(A->getInv()->numArmas()==2){

            Arma* B1 = dynamic_cast<Arma*>(&((A->getInv())->getObjeto(1)));
            Arma* B2 = dynamic_cast<Arma*>(&((A->getInv())->getObjeto(2)));
            int i,j;
            j = (B1->getDamage());
            i = (B2->getDamage());
            dano = (A->getPoder()*A->getNivel()) + (A->getFuerza()) + i + j;

        }


        else if(A->getInv()->numArmas()==1){

            int j=0;
            Arma* B = dynamic_cast<Arma*>(&((A->getInv())->getObjeto(1)));
            j= (B->getDamage());
            dano = (A->getPoder()*A->getNivel()) + (A->getFuerza()) + j;
        }


        else if(A->getInv()->numArmas()==0){


            dano = (A->getPoder()*A->getNivel()) + (A->getFuerza());
        }


        }


        //ARQUERO


        if(Arquero* A = dynamic_cast<Arquero*>(P)){

            if(A->getInv()->numArmas()==1){
            int j=0;
            Arma* B = dynamic_cast<Arma*>(&((A->getInv())->getObjeto(1)));
            j= (B->getDamage());

            dano = (A->getPoder()*A->getNivel()) +  (j/(A->getFlechas()));
            }
            else if(A->getInv()->numArmas()==0){

            dano = (A->getPoder()*A->getNivel());
            }

        }



        //MAGO


        if(Mago* A = dynamic_cast<Mago*>(P)){

            int j=0;
            if((A->getInv())->numArmas() == 1){

                Arma* B = dynamic_cast<Arma*>(&((A->getInv())->getObjeto(1)));
                j= (B->getDamage());

            dano = (A->getPoder()*A->getNivel()) + j ;

            }else{dano = (A->getPoder()*A->getNivel());}


        }

    return dano;
}

int Juego::calcularDefensa(Personaje *P){

    int def=0;

        if(Guerrero* A = dynamic_cast<Guerrero*>(P)){

            def = ((A->getProteccion())*(A->getNivel())) + (A->getEscudo());

        }

        if(Arquero* A = dynamic_cast<Arquero*>(P)){

            def = ((A->getProteccion())*(A->getNivel())) + (2*(A->getAgilidad()));

        }

        if(Mago* A = dynamic_cast<Mago*>(P)){


            def = ((A->getProteccion())*(A->getNivel()));

        }

    return def;
}

int Juego::dado(){

//        // Creamos un generador de números aleatorios utilizando la semilla del reloj
//        random_device rd;

//        // Creamos un motor de generación de números aleatorios
//        mt19937 gen(rd());

//        // Creamos una distribución uniforme entre 1 y 12
//        uniform_int_distribution<int> distribucion(1, 12);

//        // Generamos un número aleatorio y lo devolvemos

//        //cout << distribucion(gen) << endl;

//        return distribucion(gen);



        // Inicializamos la semilla para rand() usando el tiempo actual
            srand(static_cast<unsigned int>(time(nullptr)));
            // Generamos un número aleatorio entre 0 y RAND_MAX (un valor grande)
            // Luego lo escalamos al rango deseado (1 a 12)

            return (rand() % 12) + 1;

}



void Juego::graveyard(Personaje &P){


    if(Guerrero* G = dynamic_cast<Guerrero*>(&P)){

        Personaje* P1= new Guerrero(G->getname(), G->getNivel(), G->getSalud(), G->getPoder(), G->getPrecision(), G->getProteccion(), G->getEscudo(), G->getFuerza());

        _graveyard.emplace_back(P1);

    }

    if(Arquero* G = dynamic_cast<Arquero*>(&P)){

        Personaje* P1= new Arquero(G->getname(), G->getNivel(), G->getSalud(), G->getPoder(), G->getPrecision(), G->getProteccion(), G->getFlechas(), G->getAgilidad());

        _graveyard.emplace_back(P1);

    }

    if(Mago* G = dynamic_cast<Mago*>(&P)){

        Personaje* P1= new Mago(G->getname(), G->getNivel(), G->getSalud(), G->getPoder(), G->getPrecision(), G->getProteccion(), G->getMana(), G->getHechizo1(), G->getHechizo2());

        _graveyard.emplace_back(P1);

    }
    string nombre = _equipojugable.getPersonaje(0).getname();

    for(size_t i = 0; i < _listageneral.size(); i++){

        if(_listageneral[i]->getname() == nombre){

            _equipojugable.eliminarPersonaje(_equipojugable.buscar(nombre));
            delete _listageneral[0];
            _listageneral.erase(_listageneral.begin()+i);
        }
    }



}


void Juego::guardarGraveyard(){

    ofstream salida("Cementerio.txt");
    for(size_t i = 0; i < _graveyard.size(); i++){

        if(Guerrero* P = dynamic_cast<Guerrero*>(_graveyard[i])){
        salida << "GUERRERO," << P->getname() << "," << P->getNivel() << ","
               << P->getSalud() << "," << P->getPoder() << ","
               << P->getProteccion() << "," << P->getPrecision()
               << "," << P->getEscudo() << "," << P->getFuerza() << endl;
        }

        if(Arquero* P = dynamic_cast<Arquero*>(_graveyard[i])){
        salida << "ARQUERO," << P->getname() << "," << P->getNivel() << ","
               << P->getSalud() << "," << P->getPoder() << ","
               << P->getProteccion() << "," << P->getPrecision()
               << "," << P->getFlechas() << "," << P->getAgilidad() << endl;
        }

        if(Mago* P = dynamic_cast<Mago*>(_graveyard[i])){
        salida << "MAGO," << P->getname() << "," << P->getNivel() << ","
               << P->getSalud() << "," << P->getPoder() << ","
               << P->getProteccion() << "," << P->getPrecision()
               << "," << P->getMana() << "," << (P->getHechizo1()+1) << "," << (P->getHechizo2()+1) << endl;
        }
    }


    salida.close();

    cout << "El cementerio se ha guardado en el archivo de texto" << endl;

}


void Juego::mostrarGraveyard(){
    const string red = "\033[31m";
    const string yellow = "\033[33m";
    const string green = "\033[32m";
    const string reset = "\033[0m";

    cout << yellow;
    cout << R"(
                    .---.
               '-.  |   |  .-'
                 ___|   |___
            -=  [           ]  =-
                `---.   .---'
             __||__ |   | __||__
             '-..-' |   | '-..-'
               ||   |   |   ||
               ||_.-|   |-,_||
             .-"`   `"`'`   `"-.
           .'                   '.
    )" << endl;

    cout << R"( _______  _______  _______           _______           _______  _______  ______
(  ____ \(  ____ )(  ___  )|\     /|(  ____ \|\     /|(  ___  )(  ____ )(  __  \
| (    \/| (    )|| (   ) || )   ( || (    \/( \   / )| (   ) || (    )|| (  \  )
| |      | (____)|| (___) || |   | || (__     \ (_) / | (___) || (____)|| |   ) |
| | ____ |     __)|  ___  |( (   ) )|  __)     \   /  |  ___  ||     __)| |   | |
| | \_  )| (\ (   | (   ) | \ \_/ / | (         ) (   | (   ) || (\ (   | |   ) |
| (___) || ) \ \__| )   ( |  \   /  | (____/\   | |   | )   ( || ) \ \__| (__/  )
(_______)|/   \__/|/     \|   \_/   (_______/   \_/   |/     \||/   \__/(______/

                                                             _______ _________ _______
                                                            (  ____ )\__   __/(  ____ )
                                                            | (    )|   ) (   | (    )|
                                                            | (____)|   | |   | (____)|
                                                            |     __)   | |   |  _____)
                                                            | (\ (      | |   | (
                                                            | ) \ \_____) (___| )
                                                            |/   \__/\_______/|/
                                                                                       )" << endl;
    cout << reset;



    if(_graveyard.empty()){
        cout << green;
        cout << "NO HAY PERSONAJES" << endl;
        cout << reset;
    }else{
        for(size_t i = 0; i < _graveyard.size(); i++) {
            cout << red;
            cout << "Personaje numero " << i+1 << ":" << endl;
            cout << reset;

            if(Guerrero* P = dynamic_cast<Guerrero*>(_graveyard[i])){
                cout << red;
                cout << *P;
                cout << reset;
            }

            if(Arquero* P = dynamic_cast<Arquero*>(_graveyard[i])){
                cout << red;
                cout << *P;
                cout << reset;
            }

            if(Mago* P = dynamic_cast<Mago*>(_graveyard[i])){
                cout << red;
                cout << *P;
                cout << reset;
            }
        }
    }

}

void Juego::cargarGraveyard(){

    ifstream entrada("Cementerio.txt");
    if (!entrada.is_open()) {
            cout << "No existe el archivo Cementerio.txt" << endl;
            return;
        }
    string linea;
    while(getline(entrada, linea)){
        size_t coma = linea.find(',');
        string tipo = linea.substr(0, coma);

        if(tipo == "GUERRERO"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);
            pos = linea.find(',', pos) + 1;
            int nivel = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int salud = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int poder = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int precision = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int proteccion = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int escudo = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int fuerza = stoi(linea.substr(pos));
            Personaje* P1 = new Guerrero(nombre, nivel, salud, poder, precision, proteccion, escudo, fuerza);
            _graveyard.emplace_back(P1);
        }

        else if(tipo == "ARQUERO"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);
            pos = linea.find(',', pos) + 1;
            int nivel = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int salud = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int poder = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int precision = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int proteccion = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int flechas = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int agilidad = stoi(linea.substr(pos));
            Personaje* P1 = new Arquero(nombre, nivel, salud, poder, precision, proteccion, flechas, agilidad);
            _graveyard.emplace_back(P1);

        }

        else if(tipo == "MAGO"){
            size_t pos = coma + 1;
            string nombre = linea.substr(pos, linea.find(',', pos) - pos);
            pos = linea.find(',', pos) + 1;
            int nivel = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int salud = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int poder = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int precision = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int proteccion = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int mana = stoi(linea.substr(pos, linea.find(',', pos) - pos));
            pos = linea.find(',', pos) + 1;
            int h1 = stoi(linea.substr(pos));
            pos = linea.find(',', pos) + 1;
            int h2 = stoi(linea.substr(pos));
            Personaje* P1 = new Mago(nombre, nivel, salud, poder, precision, proteccion, mana, h1, h2);
            _graveyard.emplace_back(P1);

        }

    }
    entrada.close();
}

