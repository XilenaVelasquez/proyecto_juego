#include "Juego.h"
#include <iostream>
Juego::Juego() {
    for (int i = 1; i <= 4; ++i) {
        std::string nombre;
        std::cout << "Ingrese el nombre del Jugador " << i << ": ";
        std::cin >> nombre;
        jugadores.emplace_back(nombre);
    }
    repartirCartas();
}
void Juego::repartirCartas() {
    for (int i = 0; i < 4; ++i) {
        for (auto& jugador : jugadores) {
            jugador.agregarCarta(mazo.repartirCarta());
        }
    }
}
void Juego::jugarRonda() {
    std::string colorValido;
    std::vector<Carta> cartasJugadas;
    Jugador* ganadorRonda = nullptr;
    std::cout << "\nNueva ronda!" << std::endl;
    for (auto& jugador : jugadores) {
        std::cout << jugador.nombre << " elige una carta:" << std::endl;
        jugador.mostrarMano();
        int eleccion;
        do {
            std::cout << "Ingrese el número de la carta a jugar: ";
            std::cin >> eleccion;
        } while (eleccion < 1 || eleccion > jugador.mano.size());
        Carta jugada = jugador.jugarCarta(eleccion - 1);
        jugada.mostrar();
        std::cout << "\n";
        if (cartasJugadas.empty()) colorValido = jugada.color;
        if (ganadorRonda == nullptr || (jugada.color == colorValido && jugada.valor > ganadorRonda->mano[0].valor)) {
            ganadorRonda = &jugador;
        }
        cartasJugadas.push_back(jugada);
    }
    ganadorRonda->acumularCartas(cartasJugadas);
    std::cout << "\nGanador de la ronda: " << ganadorRonda->nombre << "\n";
}
Jugador* Juego::determinarGanador() {
    return &(*std::max_element(jugadores.begin(), jugadores.end(), [](const Jugador& a, const Jugador& b) {
    return a.contarCartasAcumuladas() < b.contarCartasAcumuladas();
}));

}
void Juego::jugar() {
    while (!jugadores[0].mano.empty()) {
        jugarRonda();
    }
    Jugador* ganador = determinarGanador();
    std::cout << "\nEl ganador del juego es " << ganador->nombre << " con " << ganador->contarCartasAcumuladas() << " cartas acumuladas!\n";
}
