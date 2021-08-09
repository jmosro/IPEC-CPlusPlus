#include <stdio.h>

void demo(int valor); // prototipo de función

/**
* @brief   Ejemplo de paso de parámetros por valor. Función demo().
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    int num = 10; // variable para almacenar un número
    printf("Num antes de llamar la funcion demo: %i\n", num); // imprimir salida de datos

    demo(num); // proceso función demo
    printf("Num despues de llamar la funcion demo: %i\n", num); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}

void demo(int valor) { // proceso función demo
    printf("Num dentro de demo: %i\n", valor); // imprimir salida de datos
    valor = 999; // asignar un nuevo dato a la variable
    printf("Num dentro de demo: %i\n", valor); // imprimir salida de datos
    return; // retorno del resultado
}
