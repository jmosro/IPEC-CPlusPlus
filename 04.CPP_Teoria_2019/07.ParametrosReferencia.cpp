#include <stdio.h>

void intercambio(int *x, int *y); // prototipo de función

/**
* @brief   Ejemplo de paso de parámetros por referencia. Función intercambio().
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    int i = 3; // variable para almacenar un número
    int j = 50; // variable para almacenar un número

    printf("Antes de llamar a la funcion intercambio i=%i y j=%i\n", i, j); // imprimir salida de datos
    intercambio(&i, &j); // proceso función intercambio
    printf("Despues de llamar a la funcion intercambio i=%i y j=%i\n", i, j); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}

void intercambio(int *x, int *y) { // proceso función intercambio
    int aux; // variable para almacenar un valor temporal - auxiliar
    aux = *x; // asignar un valor a la variable - el contenido de x, asignarlo al valor aux
    *x = *y; // asignar un valor a la variable - el contenido de y, asignarlo al contenido de x
    *y = aux; // asignar un valor a la variable - el valor aux, asignarlo al contenido de y
    return; // retorno del resultado
}
