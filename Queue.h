#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"
#include <cstddef>
#include <string>
                                            //RECORDAR: delete
    template <class T>
    class Queue{
        
        public:
            Queue();
            void add(T value);
            T remove();
            T peek();
            bool isEmpty();
            void clear();
        
        private:
            Node<T>* header;
            Node<T>* end;
            bool isEmptyQueue();
    };

    //CASO: TEMPLATES
    template <typename T>
    Queue<T>::Queue(){
        this->header = NULL;
        this->end = NULL;
    }

    /*
    * Función: Insertar elemento al final de la cola
    * Asignar nuevo nodo al final (end)
    * Si la lista está vacía, asignarlo también al inicio (header)
    * Si no, enlazarlo al final
    */
    template <typename T>
    void Queue<T>::add(T value){
        Node<T>* node = new Node<T>(value);
        if(this->isEmpty()){
            this->header = node;
        }
        else{
            end->setNext(node);
        }
        this->end = node;
    }

    /*
    * Función:Remover elemento de la cima de la cola
    * Crear nodo temporal al header
    * Avanzar header al siguiente
    * Almacenar valor del header actual
    * Eliminar header actual
    * Retornar valor almacenado
    */
    template <typename T>
    T Queue<T>::remove(){
        if(!this->isEmptyQueue()){
            Node<T>* node = this->header;
            header = node->getNext();
            T value = node->getValue();
            delete node;
            return value;
        }
    }

    /*
    * Función: Obtener valor de la cima de la cola
    * Devolver valor del header
    */
    template <typename T>
    T Queue<T>::peek() {
        if(!this->isEmptyQueue()){
            return header->getValue();
        }
    }

    /*
    * Función: validar si la cola esta vacia
    * Si el puntero header apunta a NULL devuelve true
    */
    template <typename T>
    bool Queue<T>::isEmpty(){
        return this->header == NULL;
    }

    /*
    * Función: vaciar la cola.
    * Recorre cada nodo hasta que la cola se encuentre vacia, elimina cada nodo recorrido.
    */
    template <typename T>
    void Queue<T>::clear(){
        Node<T>* node;
        while(!this->isEmpty()){
            node = this->header;
            header = header->getNext();
            delete node; 
        }
    }

    /*
    * Función: verificar si la cola esta vacia y lanzar una excepcion.
    * Caso contario devuelve false.
    */
    template <typename T>
    bool Queue<T>::isEmptyQueue(){
        if(this->isEmpty()){
            std::string msg = "Error: La cola se encuentra vacia"; 
            throw msg;
        }
        return false;
    }


#endif /* QUEUE_H */