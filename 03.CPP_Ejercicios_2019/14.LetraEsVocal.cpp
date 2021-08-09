#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Pedir una letra y decir si es vocal.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    char letra; // variable para almacenar la letra

    printf("Ingresar una letra\n"); // imprimir salida de datos
    scanf(" %c", &letra); // entrada de datos
    
    switch(letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf("Letra: %c es vocal\n", letra); break; // imprimir salida de datos
        default: printf("Letra: %c es consonante\n", letra); break; // imprimir salida de datos
    }
    
	return 0; // retorno del programa al sistema
}
