#include <stdlib.h>
#include <stdio.h>

/**
* @brief   Ejemplo de cambio de color de la consola.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    /* Colores
    0 = Negro
    1 = Azul
    2 = Verde
    3 = Aguamarina
    4 = Rojo
    5 = Purpura
    6 = Amarillo
    7 = Blanco
    8 = Gris
    9 = Azul claro
    A = Verde claro
    B = Aguamarina claro
    C = Rojo claro
    D = Purpura claro
    E = Amarillo claro
    F = Blanco brillante
    */
    system("color 6F"); // color XY -> X: fondo de la consola Y: color de texto
    system("mode con: cols=60 lines=20"); // tamaño de la pantalla

    return 0; // retorno del programa al sistema
}
