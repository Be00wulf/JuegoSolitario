// #include "ListaDoblementeEnlazada.h"
// #include "Carta.h"
// #include <iostream>
// #include "Nodo.h"
// #include "Nodo.cpp"
// #include <stdlib.h>

// template <class T>
// ListaDoblementeEnlazada<T>::ListaDoblementeEnlazada() : inicio(nullptr), fin(nullptr) {}

// template <class T>
// void ListaDoblementeEnlazada<T>::agregarAlInicio(T valor) {
//     Nodo<T>* nuevoNodo = new Nodo<T>(valor);
//     if (isEmpty()) {
//         inicio = fin = nuevoNodo;
//     } else {
//         nuevoNodo->setSiguiente(inicio);
//         inicio->setAnterior(nuevoNodo);
//         inicio = nuevoNodo;
//     }
// }

// template <class T>
// void ListaDoblementeEnlazada<T>::agregarAlFinal(T valor) {
//     Nodo<T>* nuevoNodo = new Nodo<T>(valor);
//     if (isEmpty()) {
//         inicio = fin = nuevoNodo;
//     } else {
//         nuevoNodo->setAnterior(fin);
//         fin->setSiguiente(nuevoNodo);
//         fin = nuevoNodo;
//     }
// }

// template <typename T>
// bool ListaDoblementeEnlazada<T>::isEmpty(){
//     return this->inicio == NULL && fin == NULL;
// }







// // Otros métodos de la lista...

// template class ListaDoblementeEnlazada<Carta>;  // Es necesario para evitar errores de enlace al utilizar plantillas en clases.
