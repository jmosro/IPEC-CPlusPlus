#include <stdio.h>
#include "09.IndiceElementosArreglo.hpp"

/**
* @brief   Imprimir el elemento del arreglo con su índice.
* @class   IndiceElementosArreglo
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void IndiceElementosArreglo(void){

    int totalElementos=0;

    printf("Ingresar numero total para el arreglo\n");
    printf("Cantidad limite: ");
    scanf(" %i", &totalElementos);

    CalcularIndiceElementosArreglo(totalElementos);
    
    return;
}

void CalcularIndiceElementosArreglo(int numeroLimite){
    int miArreglo[numeroLimite]; // crear el arreglo

    printf("Ingrese elementos del arreglo:\n");
    for(int i=1; i<=numeroLimite; i++){
        printf("Elemento %i de %i: ", i, numeroLimite);
        scanf(" %i", &miArreglo[i-1]);
    }
    printf("\n");

    printf("Mostrar indice y elemento del arreglo:\n");
    for(int i=0; i<numeroLimite; i++){
        printf("Indice -> %i Valor -> %i\n", i, miArreglo[i]);
    }
    return;
}
