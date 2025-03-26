#ifndef JUGADOR_H
#define JUGADOR_H
#include "Carta.h"
#include <vector>
class Jugador {
public:
    std::string nombre;
    std::vector<Carta> mano;
    std::vector<Carta> acumuladas;
    Jugador(std::string n);
    void agregarCarta(Carta c);
    void acumularCartas(const std::vector<Carta>& cartas);
    void mostrarMano();
    Carta jugarCarta(int indice);
    int contarCartasAcumuladas() const;
};
#endif

