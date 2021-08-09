#include <stdio.h>
#include <stdlib.h>

/**
* @brief   Ejemplo de uso de punteros1.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    int edad, otraEdad; // variable para almacenar la edad
    int *ptrEdad; // variable puntero

    edad = 25; // asignar valor a la variable
    printf("Su edad es %i annios\n", edad); // imprimir salida de datos
    otraEdad = 0; // asignar valor a la variable
    ptrEdad = &edad; // asignar valor al puntero la dirección de memoria de edad
    edad += 5; // edad aumenta en 5
    otraEdad = *ptrEdad; // asignar el valor que apunta el puntero ptrEdad

    printf("Ahora usted tiene %i annios\n", otraEdad); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}
