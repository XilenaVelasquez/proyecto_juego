#include "Jugador.h"
#include <iostream>
Jugador::Jugador(std::string n) : nombre(n) {}
void Jugador::agregarCarta(Carta c) {
    mano.push_back(c);
}
void Jugador::acumularCartas(const std::vector<Carta>& cartas) {
    acumuladas.insert(acumuladas.end(), cartas.begin(), cartas.end());
}
void Jugador::mostrarMano() {
    for (size_t i = 0; i < mano.size(); ++i) {
        std::cout << i + 1 << ". ";
        mano[i].mostrar();
        std::cout << " ";
    }
    std::cout << std::endl;
}
Carta Jugador::jugarCarta(int indice) {
    Carta carta = mano[indice];
    mano.erase(mano.begin() + indice);
    return carta;
}
int Jugador::contarCartasAcumuladas() const {
    return acumuladas.size();
}