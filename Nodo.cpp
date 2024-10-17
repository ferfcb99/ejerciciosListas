//
// Created by Fernando on 10/17/2024.
//

class Nodo {

public:
    int dato;
    Nodo* anterior;
    Nodo* siguiente;
    Nodo* abajo;

    Nodo(int dato) {
        this->dato = dato;
        this->anterior = nullptr;
        this->siguiente = nullptr;
        this->abajo = nullptr;
    };

};