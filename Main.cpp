#include "Juego.h"
#include <cstdlib>
#include <ctime>
int main() {
    std::srand(std::time(nullptr));
    Juego juego;
    juego.jugar();
    return 0;
}

