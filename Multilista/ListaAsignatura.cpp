#include "ListaAsignatura.h"
#include "Lista.h"

void Lista::insertarDelante(string cod, string desc)
{
    NodoAsignatura* nuevo = new NodoAsignatura(cod, desc);

    if (primero == nullptr) {
        primero = nuevo;
    }
    else {
        nuevo->siguiente = primero;
        primero->anterior = nuevo;
        primero = nuevo;
    }
}

void Lista::eliminar(string cod) {
    if (primero == nullptr) {
        cout << "La lista de asignaturas esta vacia" << endl;
        return;
    }

    NodoAsignatura* actual = primero;
    NodoAsignatura* anterior = nullptr;

    while (actual != nullptr) {
        if (actual->codigo == cod) {
            if (actual == primero) {
                primero = primero->siguiente;

                if (primero != nullptr) {
                    primero->anterior = nullptr;
                }
            }
            else {
                anterior->siguiente = actual->siguiente;

                if (actual->siguiente != nullptr) {
                    actual->siguiente->anterior = anterior;
                }
            }

            delete actual;
            cout << "Se elimino la asignatura" << endl;
            return;
        }

        anterior = actual;
        actual = actual->siguiente;
    }

    cout << "No se encontro la asignatura" << endl;
}

void Lista::mostrar() {
    if (primero == nullptr) {
        cout << "La lista de asignaturas esta vacia" << endl;
        return;
    }

    NodoAsignatura* p = primero;

    while (p != nullptr) {
        cout << "Codigo: " << p->codigo << endl;
        cout << "Descripcion: " << p->descripcion << endl;
        cout << "----------------------------------" << endl;
        p = p->siguiente;
    }
}

int Lista::contarAsignaturas() {
    int contador = 0;
    NodoAsignatura* paux = primero;

    while (paux != nullptr) {
        contador++;
        paux = paux->siguiente;
    }

    return contador;
}