//CAMBIAR estaVolteada = true;    A FALSE, QUE ES LO QUE DEBE SER POR DEFECTO

#include "Carta.h"
#include <iostream>


Carta::Carta() {
    // Inicialización de valores por defecto
    valor = "";
    tipo = "";
    color = "";
    estaVolteada = true;
    ID = -1; // Valor inválido por defecto
}


// Constructor que inicializa todos los atributos
Carta::Carta(std::string valor, std::string tipo, std::string color, int ID) {
    this->valor = valor;
    this->tipo = tipo;
    this->color = color;
    estaVolteada = true;
    this->ID = ID;
}

std::string Carta::getValor() const {
    return valor;
}

std::string Carta::getTipo() const {
    return tipo;
}

std::string Carta::getColor() const {
    return color;
}

bool Carta::getEstaVolteada() const {
    return estaVolteada;
}

int Carta::getID() const {
    return ID;
}

void Carta::voltearCarta() {
    estaVolteada = !estaVolteada;
}

void Carta::mostrarCarta() const {
    if (estaVolteada) {
        std::cout << valor << " " << tipo << " " << color << std::endl;
    } else {
        std::cout << "La carta está volteada" << std::endl;
    }
}

// Definición del operador de inserción para la clase Carta
std::ostream& operator<<(std::ostream& os, const Carta& carta) {
    os << carta.getValor() << " " << carta.getTipo() << " " << carta.getColor();
    return os;
}

//probando el toString para mostrar la carta
std::string Carta::toString() const {
    std::string result;
    if (estaVolteada) {
        result += valor + " " + tipo + " " + color;
    } else {
        result += "Carta volteada";
    }
    return result;
}
