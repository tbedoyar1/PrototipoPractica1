//
// Created by juanc on 16/08/2025.
//



#ifndef NODO_H
#define NODO_H

#include <string>

class Nodo {
protected:
    std::string name;
    int room;
    Nodo* next;
    Nodo* prev;
public:
    Nodo(std::string name, int room, Nodo* next, Nodo* prev);

   //Getters
    std::string getName();
    int getRoom();
    Nodo* getNext();
    Nodo* getPrev();

    //Setters
    void setNext(Nodo* next);
    void setPrev(Nodo* prev);
};

#endif //NODO_H
