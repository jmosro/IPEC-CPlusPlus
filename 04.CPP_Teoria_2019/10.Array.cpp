#include <stdio.h>

/**
* @brief   Ejemplo de uso de array.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    int i; // variable para almacenar un número
    int numeros[] = {4,8,15,16,23,42}; // variable de tipo array
    numeros[6] = 100; // asignar contenido a variable
    numeros[8] = 110; // asignar contenido a variable

    for(i=0; i<=5; i++) { // sentencia de repetición
        printf("Elemento %i: %i\n", i, numeros[i]); // imprimir salida de datos
    }
    printf("\n"); // imprimir salida de datos

    // Uso incorrecto de los array en caso de fuera de limite
    for(i=0; i<=10; i++) { // sentencia de repetición
        printf("Elemento %i: %i\n", i, numeros[i]); // imprimir salida de datos
    }

    return 0; // retorno del programa al sistema
}
