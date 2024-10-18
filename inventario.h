#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <vector>
#include "objeto.h"
#include "arma.h"
#include "pocion.h"

class Inventario
{
public:
    ~Inventario(){}
    Inventario(){}
    void agregarObjeto(Objeto& O);
    void operator >> (Objeto &O);
    int numArmas();
    int numPociones();
    int posicionPocion();
    int size();
    int pocionCura();
    int pocionMana();

    void mostrarInventario();
    void mostrarPociones();
    Objeto &getObjeto(int i);
    void eliminarObjeto(int i);
    void enviaralFinal(int i);


    friend ostream& operator <<(ostream& stream, Inventario& I);

private:
    vector<Objeto*> _inventario;
};

#endif // INVENTARIO_H
