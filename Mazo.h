// Mazo.h
#ifndef MAZO_H
#define MAZO_H

#include "Carta.h" // Incluye la clase Carta
#include <vector>

class Mazo {
private:
    std::vector<Carta> cartas; // Contenedor para almacenar las cartas

public:
    Mazo(); // Constructor
    void inicializar(); // Inicializa el mazo con todas las cartas
    void barajar(); // Baraja las cartas del mazo
    Carta sacarCarta(); // Saca una carta del mazo
    void mostrar() const; // Muestra las cartas del mazo
    bool estaVacio() const; // Función para verificar si el mazo está vacío

    // Método para obtener las cartas del mazo
    const std::vector<Carta>& obtenerCartas() const;
};

#endif // MAZO_H
