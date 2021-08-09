#include <stdio.h>
#include <math.h>
#include "06.SumaRepetitivaPotenciaCreciente.hpp"

/**
* @brief   Sumar 2^1+2^2+...+2^n Suma repetitiva potencia creciente.
* @class   SumaRepetitivaPotenciaCreciente
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void SumaRepetitivaPotenciaCreciente(void){
    int numLimite=0;
    long unsigned resultado=0;

    printf("Ingresar numero para suma repetitiva en potencia creciente\n");
    printf("Numero limite: ");
    scanf(" %i", &numLimite);

    CalcularSumaRepetitivaPotenciaCreciente(numLimite, &resultado);
    printf("2^1 + 2^2 + 2^n hasta n=%i es: %lu\n", numLimite, resultado);
    
    return;
}

void CalcularSumaRepetitivaPotenciaCreciente(int numeroLimite, long unsigned *resultado){
    printf("Proceso: ");
    for(int i=1; i<=numeroLimite; i++){
        printf("(2^%i)",i);
        if(i!=numeroLimite)
            printf("+");
        else
            printf("=");
        *resultado += pow(2,i); // pow(base,exponente)
    }
    printf("%lu\n", *resultado);
    return;
}
