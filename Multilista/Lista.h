#pragma once
#include <iostream>
#include "Nodo.h"
#include "NodoAsignatura.h"
#include "NodoEstudiante.h"
using namespace std;

class Lista {
protected:
    NodoAsignatura* primero;

public:
    Lista() {
        primero = nullptr;
    }
    void insertarDelante(string cod, string desc);
    void eliminar(string cod);
    void mostrar();
    void insertarEstudiante(string codasig, string codest, string nom, string dir, string sex);
    void eliminarEstudiante(string codest);
    void mostrarEstudiantes(string codasig);
    void mostrarTodo();
    int contarEstudiantesAsignatura(string codasig);
    int contarAsignaturas();
    void mostrarEstudiantesHombres();
    void mostrarEstudiantesMujeres();
};