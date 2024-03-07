#ifndef BARAJADOR_H
#define BARAJADOR_H

#include "Carta.h"
#include <vector>

class Barajador {
private:
    std::vector<Carta> cartas;

public:
    // Constructor vacío
    Barajador();

    // Constructor que recibe las cartas del mazo
    Barajador(const std::vector<Carta>& mazo);

    // Método para revolver las cartas
    void revolver();

    // Método para mostrar las cartas revueltas
    void mostrarRevuelto() const;
};

#endif // BARAJADOR_H
