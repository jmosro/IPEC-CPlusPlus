#include <stdio.h>
#include "08.SumaElementosArreglo.hpp"

/**
* @brief   Sumar elementos de un arreglo.
* @class   SumaElementosArreglo
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void SumaElementosArreglo(void){

    int totalElementos=0, sumatoria=0;

    printf("Ingresar numero total para el arreglo\n");
    printf("Cantidad limite: ");
    scanf(" %i", &totalElementos);

    CalcularSumaElementosArreglo(totalElementos, &sumatoria);
    printf("Sumatoria total: %i\n", sumatoria);
    
    return;
}

void CalcularSumaElementosArreglo(int numeroLimite, int *sumaTotal){
    int miArreglo[numeroLimite]; // crear el arreglo

    printf("Ingrese elementos del arreglo:\n");
    for(int i=1; i<=numeroLimite; i++){
        printf("Elemento %i de %i: ", i, numeroLimite);
        scanf(" %i", &miArreglo[i-1]);
    }
    printf("\n");

    printf("Sumatoria de elementos:\n");
    for(int i=0; i<numeroLimite; i++){
        *sumaTotal += miArreglo[i];
        printf("%i", miArreglo[i]);
        if(i!=numeroLimite-1)
            printf("+");
        else
            printf("=");
    }
    printf("%i\n", *sumaTotal);
    return;
}
