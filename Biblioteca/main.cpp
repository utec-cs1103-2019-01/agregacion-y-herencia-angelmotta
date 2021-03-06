#include <iostream>
#include "Revista.h"
#include "Biblioteca.h"
#include "Volumen.h"
#include "Libro.h"


#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - onlt do this in one cpp file
#include "catch.hpp"

#ifndef CATCH_CONFIG_MAIN

int main() {
    Biblioteca biblio(0,0,10,10);   //Max Revistas 10, Max Libros 10; Libros y Revistas iniciales 0
    Volumen* puntero = new Revista(1,"Pc World",1);
    Volumen* puntero2 = new Revista(2,"Economy",2);
    Volumen* puntero3 = new Libro(3, "CS fundamentals Book", 1);
    Volumen* puntero4 = new Libro(4, "Data Structures Book", 2);
    Volumen* puntero5 = new Libro(5, "C++ Cook Book", 3);
    biblio.incluir(puntero);
    biblio.incluir(puntero2);
    biblio.incluir(puntero3);
    biblio.incluir(puntero4);
    biblio.incluir(puntero5);
    std::cout << "Numero de Libros en Biblioteca: " << biblio.numLibros << std::endl;
    std::cout << "Numero de Revistas en Biblioteca: " << biblio.numRevistas << std::endl;
    biblio.mostrarBiblioteca();
    //puntero2->mostrar();

    //Revista* pointer_revista = dynamic_cast<Revista*>(puntero);
    //pointer_revista->mostrar(biblio.vector_vols);        // Polimorfismo invocando clase Hija
    return 0;
}

#endif