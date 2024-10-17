//
// Created by Fernando on 10/17/2024.
//

#include <iostream>
#include <stdio.h>
#include "Nodo.cpp"

class ListaEnlazadaPersonalizada {

public:
    Nodo* cabeza;

    ListaEnlazadaPersonalizada() {
        this->cabeza = nullptr;
    }


    void agregar(int dato) {
        Nodo* nuevoNodo = new Nodo(dato);
        if(this->cabeza == nullptr) {
            this->cabeza = nuevoNodo;
        }else {
            Nodo* tmp = this->cabeza;
            while(tmp->siguiente != nullptr) {
                tmp = tmp->siguiente;
            }
            tmp->siguiente = nuevoNodo;
            nuevoNodo->anterior = tmp;
        }
    }

    void enlazarSegundoNivel(Nodo* nodoArriba, Nodo* nodoAbajo) {
        nodoArriba->abajo = nodoAbajo;
    }

    void imprimirLista() {
        Nodo* tmp = this->cabeza;
        while(tmp != nullptr) {
            std::cout << tmp->dato << " -> ";
            tmp = tmp->siguiente;
        }
        std::cout << " null " << std::endl;
    }

    void imprimirListaAbajo(Nodo* nodoAbajo) {
        Nodo* tmp = nodoAbajo;
        while(tmp != nullptr) {
            std::cout << tmp->dato << " -> ";
            tmp = tmp->siguiente;
        }
        std::cout << " null " << std::endl;
    }

};