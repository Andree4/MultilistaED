#include "Lista.h"

int main() {
    Lista multilista;
    int opcion;
    string codigoAsig, NombreAsig, codigoEst, nombreEst, direccionEst, sexoEst;
    do {
        cout << "MENU" << endl;
        cout << "1. Insertar una asignatura" << endl;
        cout << "2. Eliminar una asignatura" << endl;
        cout << "3. Mostrar toda la lista de asignaturas" << endl;
        cout << "4. Insertar un estudiante en una asignatura" << endl;
        cout << "5. Eliminar un estudiante" << endl;
        cout << "6. Mostrar todos los estudiantes de una asignatura" << endl;
        cout << "7. Mostrar toda la multilista" << endl;
        cout << "8. Cantidad de estudiantes en una determinada asignatura" << endl;
        cout << "9. Cuantas asignaturas se imparten" << endl;
        cout << "10. Mostrar todos los estudiantes del sexo masculino" << endl;
        cout << "11. Mostrar todos los estudiantes del sexo femenino" << endl;
        cout << "12. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cout << "----------------------------------------------" << endl;

        switch (opcion) {
        case 1:
            cout << "Ingrese el codigo de la asignatura: ";
            cin >> codigoAsig;
            cout << "Ingrese el nombre de la asignatura: ";
            cin >> NombreAsig;
            multilista.insertarDelante(codigoAsig, NombreAsig);
            cout << "Se agrego la asignatura." << endl;
            cout << "----------------------------------------------" << endl;
            break;
        case 2:
            cout << "Ingrese el codigo de la asignatura a eliminar: ";
            cin >> codigoAsig;
            multilista.eliminar(codigoAsig);
            break;
        case 3:
            multilista.mostrar();
            cout << "----------------------------------------------" << endl;
            break;
        case 4:
            cout << "Ingrese el codigo de la asignatura: ";
            cin >> codigoAsig;
            cout << "Ingrese el codigo del estudiante: ";
            cin >> codigoEst;
            cout << "Ingrese el nombre del estudiante: ";
            cin >> nombreEst;
            cout << "Ingrese la direccion del estudiante: ";
            cin >>direccionEst;
            cout << "Ingrese el sexo del estudiante: ";
            cin >> sexoEst;
            multilista.insertarEstudiante(codigoAsig, codigoEst, nombreEst, direccionEst, sexoEst);
            cout << "----------------------------------------------" << endl;
            break;
        case 5:
            cout << "Ingrese el codigo del estudiante a eliminar: ";
            cin >> codigoEst;
            multilista.eliminarEstudiante(codigoEst);
            cout << "----------------------------------------------" << endl;
            break;
        case 6:
            cout << "Ingrese el codigo de la asignatura: ";
            cin >> codigoAsig;
            multilista.mostrarEstudiantes(codigoAsig);
            cout << "----------------------------------------------" << endl;
            break;
        case 7:
            multilista.mostrarTodo();
            cout << "----------------------------------------------" << endl;
            break;
        case 8:
            cout << "Ingrese el codigo de la asignatura: ";
            cin >> codigoAsig;
            cout << "Cantidad de estudiantes: " << multilista.contarEstudiantesAsignatura(codigoAsig) << endl;
            cout << "----------------------------------------------" << endl;
            break;
        case 9:
            cout << "Cantidad de asignaturas: " << multilista.contarAsignaturas() << endl;
            cout << "----------------------------------------------" << endl;
            break;
        case 10:
            multilista.mostrarEstudiantesHombres();
            break;
        case 11:
            multilista.mostrarEstudiantesMujeres();
            break;
        case 12:
            cout << "Fin del programa" << endl;
            break;
        default:
            cout << "Opcion invalida. Intente nuevamente." << endl;
            break;
        }

        cout << endl;
    } while (opcion != 12);

    return 0;
}