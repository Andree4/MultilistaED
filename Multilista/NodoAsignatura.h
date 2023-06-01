#pragma once
#include "Nodo.h"
#include "NodoEstudiante.h"
using namespace std;
class NodoAsignatura : public Nodo
{
public:
    string codigo;
    string descripcion;
    NodoAsignatura* siguiente;
    NodoAsignatura* anterior;
    NodoEstudiante* pestudiante;

    NodoAsignatura(string cod, string desc) {
        codigo = cod;
        descripcion = desc;
        siguiente = nullptr;
        anterior = nullptr;
        pestudiante = nullptr;
    }
};