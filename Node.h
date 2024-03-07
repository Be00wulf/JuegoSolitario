#ifndef NODE_H
#define NODE_H
#include <iostream>
template <class T>


class Node {
private:
    T value; 
    Node<T>* next;
    Node<T>* previous; 

public:
    // Constructor predeterminado
    Node();
    // Constructor con valor inicial
    Node(T value);

    // Métodos de configuración
    void setValue(T value);
    void setPrevious(Node<T>* previous);
    void setNext(Node<T>* next);

    // Métodos de obtención
    T getValue();
    Node<T>* getPrevious();
    Node<T>* getNext();   
};

//#include "Node.cpp"  // Incluimos las definiciones de las funciones miembro aquí


//INCLUYENDO
template <typename T>
Node<T>::Node(){
    this->value = NULL;
    this->previous = NULL;
    this->next = NULL;
}

// Constructor con valor inicial
template <typename T>
Node<T>::Node(T value){
    this->value = value;
    this->previous = NULL;
    this->next = NULL;
}

// S
template <typename T>
void Node<T>::setValue(T value){
    this->value = value;
}

template <typename T>
void Node<T>::setPrevious(Node<T>* previous){
    this->previous = previous;
}

template <typename T>
void Node<T>::setNext(Node<T>* next){
    this->next = next;
}

// G
template <typename T>
T Node<T>::getValue(){
    return this->value;
}

template <typename T>
Node<T>* Node<T>::getPrevious(){
    return this->previous;
}

template <typename T>
Node<T>* Node<T>::getNext(){
    return this->next;
}


#endif /* NODO_H */