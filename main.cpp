#include <iostream>
using namespace std;
#include "Carta.h"
#include "Mazo.h"
#include "Barajador.h"
// #include "ListaDoblementeEnlazada.h"
// #include "Queue.h"
// #include "MovementDriver.h"
#include "Node.h"
#include<stdlib.h> //new y delete


int main() {
    //MENU

    //MOSTRANDO NODO
    Mazo mazo;
    mazo.inicializar();
    mazo.barajar();

    //Node<Carta> nodo1 = new Node(mazo.sacarCarta());
    Node<Carta>* nodo1 = new Node<Carta>(mazo.sacarCarta());
    Node<Carta>* nodo2 = new Node<Carta>(mazo.sacarCarta());
    Node<Carta>* nodo3 = new Node<Carta>(mazo.sacarCarta());


    // Mostrar la carta del nodo
    std::cout << "Valor del nodo 1: ";
    nodo1->getValue().mostrarCarta();
    std::cout << std::endl;

    std::cout << "Valor del nodo 2: ";
    nodo2->getValue().mostrarCarta();
    std::cout << std::endl;

    std::cout << "Valor del nodo 3: ";
    nodo3->getValue().mostrarCarta();
    std::cout << std::endl;


    return 0;
}
