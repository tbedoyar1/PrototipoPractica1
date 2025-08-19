//
// Created by juanc on 17/08/2025.
//
#include "Lista.h"
#include <iostream>
using namespace std;

int main() {
    bool estado = true;
    Lista lista;

    // ✅ Cargar lista desde archivo al inicio
    lista.cargarDesdeArchivo("hotel.txt");

    cout << "Lista de habitaciones cargada desde archivo:" << endl;
    lista.visualizarLista();

    while (estado) {
        string name;
        int room;
        int opcion;

        cout << "\nSeleccione una opcion:" << endl;
        cout << "1. Insertar al inicio" << endl;
        cout << "2. Insertar al final" << endl;
        cout << "3. Insertar despues de un huesped" << endl;
        cout << "4. Buscar habitacion" << endl;
        cout << "5. Eliminar huesped" << endl;
        cout << "6. Visualizar lista" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese nombre y numero de habitacion:" << endl;
                cin >> name >> room;
                lista.insertarAlInicio(name, room);
                break;

            case 2:
                cout << "Ingrese el nombre y el numero de habitacion:" << endl;
                cin >> name >> room;
                lista.insertarAlFinal(name, room);
                break;

            case 3: {
                string ant;
                cout << "Ingrese el nombre del huesped anterior:" << endl;
                cin >> ant;
                cout << "Ingrese el nombre y numero de habitacion a insertar:" << endl;
                cin >> name >> room;
                lista.insertarDespues(name, room, lista.buscar(ant));
                break;
            }

            case 4: {
                cout << "Ingrese el nombre del huesped a buscar:" << endl;
                cin >> name;
                Nodo* foundNode = lista.buscar(name);
                if (foundNode) {
                    cout << "Habitacion encontrada: "
                         << foundNode->getName()
                         << ", Numero: "
                         << foundNode->getRoom() << endl;
                } else {
                    cout << "Habitacion no encontrada." << endl;
                }
                break;
            }

            case 5:
                cout << "Ingrese el nombre del huesped a eliminar:" << endl;
                cin >> name;
                lista.eliminar(name);
                break;

            case 6:
                lista.visualizarLista();
                break;

            case 0:
                // ✅ Guardar en archivo antes de salir
                lista.guardarEnArchivo("hotel.txt");
                cout << "Datos guardados en hotel.txt. Saliendo..." << endl;
                estado = false;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    }

    return 0;
}
