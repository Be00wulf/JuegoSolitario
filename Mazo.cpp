#include <iostream>
#include "Mazo.h"
#include <algorithm> // Para std::shuffle
#include <random> // Para std::default_random_engine

Mazo::Mazo() {
    // inicializar(); // Inicializa el mazo al crear un objeto Mazo->ERROR:IMPRIME 2 VECES Xd
}

void Mazo::inicializar() {
    // Valores de las cartas
    std::vector<std::string> valores = {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

    // Tipos
    std::vector<std::string> tipos = {"E3", "<3", "!!", "<>"};

    // Colores
    std::vector<std::string> colores = {"N", "R"};

    // ID inicial
    int ID = 0;


    // Iterar sobre los valores, tipos y colores para crear todas las combinaciones de cartas
    for (const auto& valor : valores) {
        for (const auto& tipo : tipos) {
            std::string color;
            // Verificar el tipo de carta y asignar el color correspondiente
            if (tipo == "E3" || tipo == "!!") {
                color = "N"; // Negro para treboles y espadas
            } else {
                color = "R"; // Rojo para corazones y diamantes
            }
            // Crear la carta con el valor, tipo y color correspondientes
            cartas.push_back(Carta(valor, tipo, color, ID++));
        }
    } 
    // std:: cout << cartas.size();     //REVISANDO TAMAÑO DEL MAZO
}

void Mazo::barajar() {
    // Baraja con el algoritmo de Fisher-Yates
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cartas.begin(), cartas.end(), g);
}

Carta Mazo::sacarCarta() {
    // Saca una carta del mazo y la devuelve
    // Asegúrate de que el mazo no esté vacío antes de llamar a este método
    Carta carta = cartas.back();
    cartas.pop_back();
    return carta;
}

void Mazo::mostrar() const {
    // Muestra las cartas del mazo
    for (const Carta& carta : cartas) {
        carta.mostrarCarta(); 
    }
}

bool Mazo::estaVacio() const {
    return cartas.empty();
}

const std::vector<Carta>& Mazo::obtenerCartas() const {
    return cartas;
}