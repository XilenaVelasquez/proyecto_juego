# Juego de Cartas 

Este proyecto implementa un sencillo juego de cartas en el que los jugadores compiten por acumular más cartas ganando rondas.

---

## Características
- Hasta 4 jugadores.
- Cartas con colores y valores aleatorios.
- Ganador basado en la cantidad de cartas acumuladas.
- Uso de colores en la consola para mostrar cartas.

---

## Instalación y Ejecución
### Requisitos
- Sistema Operativo: Windows, Linux o MacOS.
- Compilador: g++ (GNU Compiler Collection) compatible con C++11 o superior.
- Terminal que soporte colores ANSI.

### Compilar el código
Ejecuta el siguiente comando en la terminal:
g++ main.cpp Juego.cpp Jugador.cpp Mazo.cpp Carta.cpp -o juego

### Ejecutar el juego
./juego
---


## Cómo Jugar
1. **Inicio del juego**  
   - Se solicitarán los nombres de los 4 jugadores.

2. **Ronda de juego**  
   - Cada jugador verá sus cartas en la mano.  
   - Elegirá una carta ingresando su número.  
   - Se comparan las cartas jugadas:  
     - Si un jugador juega la carta más alta dentro del color dominante, gana la ronda.  
   - El ganador acumula las cartas jugadas.  

3. **Fin del juego**  
   - Se juegan rondas hasta que los jugadores no tengan más cartas en la mano.  
   - El jugador con más cartas acumuladas gana la partida.  

---

## Ejemplo de Partida
### Inicio
Ingrese el nombre del Jugador 1: Ana Ingrese el nombre del Jugador 2: Luis Ingrese el nombre del Jugador 3: Carlos Ingrese el nombre del Jugador 4: Marta

### Ronda 1
Nueva ronda! Ana elige una carta:

🔴 5

🟢 8
Ingrese el número de la carta a jugar: 1

Luis elige una carta:

🔴 7 Ingrese el número de la carta a jugar: 1 ...

Ganador de la ronda: Luis

### Final
El ganador del juego es Luis con 15 cartas acumuladas!

---

## Autor
**Xilena Piedrahita Velasquez**  
Contacto: xilenavelasquez6@gmail.com
