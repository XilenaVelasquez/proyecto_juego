#ifndef CARTA_H
#define CARTA_H
#include <iostream>
#define BG_RED "\x1B[41m"
#define BG_GREEN "\x1B[42m"
#define BG_BLUE "\x1B[44m"
#define BG_YELLOW "\x1B[43m"
#define WHITE "\x1B[37m"
#define RESET "\x1b[0m"

class Carta {
public:
    std::string color;
    int valor;
    Carta(std::string c, int v);
    void mostrar() const;
};
#endif

