#ifndef JUEGO_H
#define JUEGO_H
#include "Mazo.h"
#include "Jugador.h"
class Juego {
private:
    Mazo mazo;
    std::vector<Jugador> jugadores;
    void repartirCartas();
    void jugarRonda();
    Jugador* determinarGanador();
public:
    Juego();
    void jugar();
};
#endif

