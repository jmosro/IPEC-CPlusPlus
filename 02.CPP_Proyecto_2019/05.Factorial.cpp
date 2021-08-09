#include <stdio.h>
#include "05.Factorial.hpp"

/**
* @brief   Factorial de número.
* @class   Factorial
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void Factorial(void){
    int numLimite=0;
    long double resultado=1; // resultado = 1 para evitar la multiplicación pòr 0

    printf("Ingresar numero para factorial\n");
    printf("Numero limite: ");
    scanf(" %i", &numLimite);
    
    CalcularFactorial(numLimite, &resultado);
    printf("Factorial hasta %i es: %Lf\n", numLimite, resultado);

    return;
}

void CalcularFactorial(int numeroLimite, long double *resultado){
    printf("Proceso: ");
    for(int i=1; i<=numeroLimite; i++){
        printf("%i",i);
        if(i!=numeroLimite)
            printf("*");
        else
            printf("=");
        *resultado *= i;
    }
    printf("%Lf\n", *resultado);
    return;
}
