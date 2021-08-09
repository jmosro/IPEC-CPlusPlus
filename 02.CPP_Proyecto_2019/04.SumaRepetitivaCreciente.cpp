#include <stdio.h>
#include "04.SumaRepetitivaCreciente.hpp"

/**
* @brief   Sumar 1+2+3+..+n Suma repetitiva creciente.
* @class   SumaRepetitivaCreciente
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void SumaRepetitivaCreciente(){
    int numLimite=0, resultado=0;

    printf("Ingresar numero para suma repetitiva creciente\n");
    printf("Numero limite: ");
    scanf(" %i", &numLimite);
    
    CalcularSumaRepetitivaCreciente(numLimite, &resultado);
    printf("Suma creciente repetiva hasta %i es: %i\n", numLimite, resultado);

    return;
}

void CalcularSumaRepetitivaCreciente(int numeroLimite, int *resultado){
    printf("Proceso: ");
    for(int i=1; i<=numeroLimite; i++){
        printf("%i",i);
        if(i!=numeroLimite)
            printf("+");
        else
            printf("=");
        *resultado += i;
    }
    printf("%i\n", *resultado);
    return;
}
