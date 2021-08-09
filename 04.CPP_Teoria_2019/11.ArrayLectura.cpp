#include <stdio.h>

/**
* @brief   Ejemplo de lectura de un array.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(){
    int array[4][2]; // variable tipo array
    int i, j; // variable para almacenar un número
    
    // Lectura array
    for(i=0; i<4; i++) { // sentencia de repetición
        for(j=0; j<2; j++) { // sentencia de repetición
            printf("%i\t\n", array[i][j]); // imprimir salida de datos
        }
    }

    return 0; // retorno del programa al sistema
}
