#include <stdio.h>
#include "07.Fibonacci.hpp"

/**
* @brief   Calcular serie fibonacci.
* @class   Fibonacci
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void Fibonacci(void){
    int numLimite=0;

    printf("Ingresar numero para fibonacci\n");
    printf("Numero limite: ");
    scanf(" %i", &numLimite);

    CalcularFibonacci(numLimite);
    
    return;
}

void CalcularFibonacci(int numeroLimite){
    printf("Proceso Serie Fibonacci: ");
    for(int i=0; i<=numeroLimite; i++){
        printf("%i ", fibonacciRecursivo(i));
    }
    printf("\n");
    return;
}

int fibonacciRecursivo(int n){
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacciRecursivo(n - 2) + fibonacciRecursivo(n - 1);
}
