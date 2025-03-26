#include "Mazo.h"
Mazo::Mazo() {
    std::string colores[] = {"rojo", "verde", "azul", "amarillo"};
    for (const auto& color : colores) {
        for (int i = 1; i <= 9; ++i) {
            cartas.emplace_back(color, i);
        }
    }
    barajar();
}
void Mazo::barajar() {
    std::random_shuffle(cartas.begin(), cartas.end());
}
Carta Mazo::repartirCarta() {
    Carta carta = cartas.back();
    cartas.pop_back();
    return carta;
}