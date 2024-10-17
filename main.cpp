#include <iostream>

#include "ListaEnlazadaPersonalizada.cpp"

int main()
{
    ListaEnlazadaPersonalizada lista;

    lista.agregar(2);
    lista.agregar(6);
    lista.agregar(-2);
    lista.agregar(1);

    Nodo* nodoAbajo1 = new Nodo(1);
    Nodo* nodoAbajo2 = new Nodo(7);
    Nodo* nodoAbajo3 = new Nodo(-5);
    Nodo* nodoAbajo4 = new Nodo(5);

    lista.enlazarSegundoNivel(lista.cabeza, nodoAbajo1);
    lista.enlazarSegundoNivel(lista.cabeza->siguiente, nodoAbajo2);
    lista.enlazarSegundoNivel(lista.cabeza->siguiente->siguiente, nodoAbajo3);
    lista.enlazarSegundoNivel(lista.cabeza->siguiente->siguiente->siguiente, nodoAbajo4);

    nodoAbajo1->siguiente = nodoAbajo2;
    nodoAbajo2->anterior = nodoAbajo1;

    nodoAbajo2->siguiente = nodoAbajo3;
    nodoAbajo3->anterior = nodoAbajo2;

    nodoAbajo3->siguiente = nodoAbajo4;
    nodoAbajo4->anterior = nodoAbajo3;

    std::cout<<"nodo abajo anterior: " << nodoAbajo4->anterior->dato << std::endl;



    lista.imprimirLista();
    lista.imprimirListaAbajo(lista.cabeza->abajo);

    return 0;


}
