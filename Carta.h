#ifndef CARTA_H
#define CARTA_H

#include <string>
#include <vector>

class Carta {
private:
    std::string valor;
    std::string color;
    std::string tipo;
    bool estaVolteada;
    int ID;

public:
    // Constructor vacío
    Carta(); //: valor(""), color(""), tipo(""), estaVolteada(false), ID(0) {}

    Carta(std::string valor, std::string tipo, std::string color, int ID); // Constructor que inicializa los atributos

    // Métodos para acceder a los atributos de la carta
    std::string getValor() const;
    std::string getTipo() const;
    std::string getColor() const;
    bool getEstaVolteada() const;
    int getID() const;

    void voltearCarta();
    void mostrarCarta() const; //si esta volteada
};

#endif // CARTA_H
