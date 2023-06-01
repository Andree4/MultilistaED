#pragma once
#include "Nodo.h"
using namespace std;
class NodoEstudiante : public Nodo
{
public:
    string codigo;
    string nombre;
    string direccion;
    string sexo;
    NodoEstudiante* siguiente;
    NodoEstudiante* anterior;

    NodoEstudiante(string cod, string nom, string dir, string genero) {
        codigo = cod;
        nombre = nom;
        direccion = dir;
        sexo = genero;
        siguiente = nullptr;
        anterior = nullptr;
    }
};