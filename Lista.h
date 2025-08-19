#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include <string>
using namespace std;

class Lista {
private:
    Nodo* head;
    Nodo* tail;

public:
    // Constructor
    Lista();

    // Métodos de gestión de la lista
    void crearLista();
    void insertarAlInicio(string name, int room);
    void insertarAlFinal(string name, int room);
    void insertarDespues(string name, int room, Nodo* anterior);
    Nodo* buscar(string name);
    void eliminar(string name);
    Nodo* getUltimo();
    void visualizarLista();

    // 🔹 NUEVAS FUNCIONES PARA ARCHIVOS
    void cargarDesdeArchivo(string nombreArchivo);
    void guardarEnArchivo(string nombreArchivo);
};

#endif
