//
// Created by juanc on 16/08/2025.
//
#include <string>
#include "Nodo.h"

using namespace std;
Nodo::Nodo(string name, int room, Nodo* next, Nodo* prev)
    : name(name), room(room), next(next), prev(prev) {}
// Getters
string Nodo::getName() {
    return name;
}
int Nodo::getRoom() {
    return room;
}
Nodo* Nodo::getNext() {
    return next;
}
Nodo* Nodo::getPrev() {
    return prev;
}
// Setters
void Nodo::setNext(Nodo* next) {
    this->next = next;
}
void Nodo::setPrev(Nodo* prev) {
    this->prev = prev;
}