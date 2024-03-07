#include <iostream>
using namespace std;

#include "Carta.h"
#include "Mazo.h"
#include "Barajador.h"
#include "Queue.h"

// #include "ListaDoblementeEnlazada.h"
// #include "MovementDriver.h"
#include "Node.h"
#include<stdlib.h> //new y delete


int main() {
    //MENU

    //MOSTRANDO MAZO BARAJADO
    Mazo mazo;
    mazo.inicializar();
    mazo.barajar();

    Barajador barajador(mazo.obtenerCartas());
    std::cout << "Cartas revueltas:" << std::endl;
    barajador.mostrarRevuelto();

    std::cout << "\n\n" << std::endl;

    // Crear una cola para almacenar las cartas
    Queue<Carta> cola;

    // Llenar la cola con las primeras 24 cartas del mazo
    for (int i = 0; i < 24; ++i) {
        cola.add(mazo.sacarCarta());
    }

    // Mostrar cómo funciona la cola sacando y mostrando las cartas
    std::cout << "Cartas en la cola:" << std::endl;
    while (!cola.isEmpty()) {
        Carta carta = cola.remove();
        std::cout << "Valor de la carta: ";
        carta.mostrarCarta();
        std::cout << std::endl;
    }


    return 0;
}
