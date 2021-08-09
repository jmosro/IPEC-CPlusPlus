#include <stdio.h>

/**
* @brief   Ejemplo de punteros en array.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    int lista[6] = {7, 10, 4, -2, 30, 6}; // variable para almacenar un array con números

    // imprimir dirección de memoria - indice 0
    printf("%x\n", &lista[0]);
    // imprimir dirección de memoria - p -> puntero - indice 0
    printf("%p\n", lista);
    // imprimir dirección de memoria - indice 1
    printf("%p\n", lista+1);
    // imprimir contenido de memoria - indice 1
    printf("%i\n", *(lista+1)); // -> equivale al contenido de la dir mem
    printf("%x\n", (lista+1)); // -> equivale a dir mem

    return 0; // retorno del programa al sistema
}
