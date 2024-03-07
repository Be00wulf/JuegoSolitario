#include <iostream>
#include "Barajador.h"
#include <algorithm> // Para std::shuffle       REVISAR ORDENAMIENTO
#include <random> // Para std::default_random_engine

Barajador::Barajador() {
    // Constructor vacío
}

Barajador::Barajador(const std::vector<Carta>& mazo) : cartas(mazo) {
    // Constructor que recibe las cartas del mazo
}

void Barajador::revolver() {
    //Fisher-Yates  FY
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cartas.begin(), cartas.end(), g);
}

void Barajador::mostrarRevuelto() const {
    for (const Carta& carta : cartas) {
        carta.mostrarCarta();
    }
}