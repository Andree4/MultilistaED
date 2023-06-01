#include "ListaEstudiante.h"
#include "Lista.h"

void Lista::insertarEstudiante(string codasig, string codest, string nom, string dir, string sex) {
    NodoAsignatura* paux = primero;

    while (paux != nullptr) {
        if (paux->codigo == codasig) {
            NodoEstudiante* nuevo = new NodoEstudiante(codest, nom, dir, sex);

            if (paux->pestudiante == nullptr) {
                paux->pestudiante = nuevo;
            }
            else {
                NodoEstudiante* estActual = paux->pestudiante;

                while (estActual->siguiente != nullptr) {
                    estActual = estActual->siguiente;
                }

                estActual->siguiente = nuevo;
                nuevo->anterior = estActual;
            }

            cout << "Se agrego un nuevo estudiante" << endl;
            return;
        }

        paux = paux->siguiente;
    }

    cout << "No se encontro el codigo de la asignatura" << endl;
}

void Lista::eliminarEstudiante(string codest) {
    if (primero == nullptr) {
        cout << "La Lista esta vacia" << endl;
        return;
    }

    NodoAsignatura* paux = primero;

    while (paux != nullptr) {
        NodoEstudiante* estActual = paux->pestudiante;

        while (estActual != nullptr) {
            if (estActual->codigo == codest) {
                if (estActual == paux->pestudiante) {
                    paux->pestudiante = paux->pestudiante->siguiente;

                    if (paux->pestudiante != nullptr) {
                        paux->pestudiante->anterior = nullptr;
                    }
                }
                else {
                    estActual->anterior->siguiente = estActual->siguiente;

                    if (estActual->siguiente != nullptr) {
                        estActual->siguiente->anterior = estActual->anterior;
                    }
                }

                delete estActual;
                cout << "Se elimino el estudiante" << endl;
                return;
            }

            estActual = estActual->siguiente;
        }

        paux = paux->siguiente;
    }

    cout << "No se encontro el codigo del estudiante" << endl;
}

void Lista::mostrarEstudiantes(string codasig) {
    NodoAsignatura* paux = primero;

    while (paux != nullptr) {
        if (paux->codigo == codasig) {
            if (paux->pestudiante == nullptr) {
                cout << "No hay estudiantes en esta asignatura" << endl;
                return;
            }

            NodoEstudiante* estActual = paux->pestudiante;

            while (estActual != nullptr) {
                cout << "Codigo: " << estActual->codigo << endl;
                cout << "Nombre: " << estActual->nombre << endl;
                cout << "Direccion: " << estActual->direccion << endl;
                cout << "Sexo: " << estActual->sexo << endl;
                cout << "----------------------------------" << endl;
                estActual = estActual->siguiente;
            }

            return;
        }

        paux = paux->siguiente;
    }

    cout << "No se encontro el codigo de la asignatura" << endl;
}

int Lista::contarEstudiantesAsignatura(string codasig) {
    NodoAsignatura* paux = primero;

    while (paux != nullptr) {
        if (paux->codigo == codasig) {
            int contador = 0;
            NodoEstudiante* estActual = paux->pestudiante;

            while (estActual != nullptr) {
                contador++;
                estActual = estActual->siguiente;
            }

            return contador;
        }

        paux = paux->siguiente;
    }

    return 0;
}

void Lista::mostrarEstudiantesHombres() {
    if (primero == nullptr) {
        cout << "La Lista esta vacia" << endl;
        return;
    }

    NodoAsignatura* paux = primero;
    bool encontrado = false;

    while (paux != nullptr) {
        NodoEstudiante* estActual = paux->pestudiante;

        while (estActual != nullptr) {
            if (estActual->sexo == "masculino" || "Masculino" || "Hombre" || "hombre") {
                cout << "Codigo de Estudiante: " << estActual->codigo << endl;
                cout << "Nombre: " << estActual->nombre << endl;
                cout << "Direccion: " << estActual->direccion << endl;
                cout << "Sexo: " << estActual->sexo << endl;
                cout << "Asignatura: " << paux->descripcion << endl;
                cout << "----------------------------------" << endl;
                encontrado = true;
            }

            estActual = estActual->siguiente;
        }

        paux = paux->siguiente;
    }

    if (!encontrado) {
        cout << "No hay estudiantes hombres en la Lista" << endl;
    }
}

void Lista::mostrarEstudiantesMujeres() {
    if (primero == nullptr) {
        cout << "La Lista esta vacia" << endl;
        return;
    }

    NodoAsignatura* paux = primero;
    bool encontrado = false;

    while (paux != nullptr) {
        NodoEstudiante* estActual = paux->pestudiante;

        while (estActual != nullptr) {
            if (estActual->sexo == "femenino" || "Femenino" || "Mujer" || "mujer") {
                cout << "Codigo de Estudiante: " << estActual->codigo << endl;
                cout << "Nombre: " << estActual->nombre << endl;
                cout << "Direccion: " << estActual->direccion << endl;
                cout << "Sexo: " << estActual->sexo << endl;
                cout << "Asignatura: " << paux->descripcion << endl;
                cout << "----------------------------------" << endl;
                encontrado = true;
            }

            estActual = estActual->siguiente;
        }

        paux = paux->siguiente;
    }

    if (!encontrado) {
        cout << "No hay estudiantes mujeres en la Lista" << endl;
    }
}