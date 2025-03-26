#include "Carta.h"
Carta::Carta(std::string c, int v) : color(c), valor(v) {}
void Carta::mostrar() const {
    std::string bg_color;
    if (color == "rojo") bg_color = BG_RED;
    else if (color == "verde") bg_color = BG_GREEN;
    else if (color == "azul") bg_color = BG_BLUE;
    else if (color == "amarillo") bg_color = BG_YELLOW;
    std::cout << bg_color << WHITE << " " << valor << " " << RESET;
}