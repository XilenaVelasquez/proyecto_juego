#ifndef MAZO_H
#define MAZO_H
#include "Carta.h"
#include <vector>
#include <algorithm>
class Mazo {
public:
    std::vector<Carta> cartas;
    Mazo();
    void barajar();
    Carta repartirCarta();
};
#endif