#include "Lista.h"

void Lista::mostrarTodo() {
    if (primero == nullptr) {
        cout << "La Lista esta vacia" << endl;
        return;
    }

    NodoAsignatura* paux = primero;

    while (paux != nullptr) {
        cout << "Codigo de Asignatura: " << paux->codigo << endl;
        cout << "Descripcion: " << paux->descripcion << endl;
        cout << "----------------------------------" << endl;

        if (paux->pestudiante == nullptr) {
            cout << "No hay estudiantes en esta asignatura" << endl;
        }
        else {
            NodoEstudiante* estActual = paux->pestudiante;

            while (estActual != nullptr) {
                cout << "Codigo de Estudiante: " << estActual->codigo << endl;
                cout << "Nombre: " << estActual->nombre << endl;
                cout << "Direccion: " << estActual->direccion << endl;
                cout << "Sexo: " << estActual->sexo << endl;
                cout << "----------------------------------" << endl;
                estActual = estActual->siguiente;
            }
        }

        paux = paux->siguiente;
    }
}





