cmake_minimum_required(VERSION 3.29)
project(listaEnlazadaTarea)

set(CMAKE_CXX_STANDARD 20)

add_executable(listaEnlazadaTarea main.cpp
        Nodo.cpp
        ListaEnlazadaPersonalizada.cpp)
