#include <stdio.h>

void ConjeturaCollatz(int num);

/**
* @brief   Calcular la Conjetura de Collatz.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void){
    int numero;

    printf("Ingresar un numero: "); // imprimir salida de datos
    scanf(" %i", &numero); // entrada de datos
    ConjeturaCollatz(numero);

    return 0;  // retorno del programa al sistema
}

void ConjeturaCollatz(int num){
    printf("%i ", num); // imprimir salida de datos
    while(num != 1){
        if(num%2 == 0) num = num / 2; // Calcular la Conjetura de Collatz
        else num = num*3 + 1;
        printf("%i ", num); // imprimir salida de datos
    }
    return; // retorno del resultado
}
