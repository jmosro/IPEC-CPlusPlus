#include <stdio.h>
#include "10.MayorElementoArreglo.hpp"

/**
* @brief   Calcular el mayor elemento de un arreglo.
* @class   MayorElementoArreglo
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void MayorElementoArreglo(void){

    int totalElementos=0, mayorElem=0;

    printf("Ingresar numero total para el arreglo\n");
    printf("Cantidad limite: ");
    scanf(" %i", &totalElementos);

    CalcularMayorElementoArreglo(totalElementos, &mayorElem);
    printf("Elemento mayor: %i\n", mayorElem);
    
    return;
}

void CalcularMayorElementoArreglo(int numeroLimite, int *mayorElemento){
    int miArreglo[numeroLimite]; // crear el arreglo

    printf("Ingrese elementos del arreglo:\n");
    for(int i=1; i<=numeroLimite; i++){
        printf("Elemento %i de %i: ", i, numeroLimite);
        scanf(" %i", &miArreglo[i-1]);
    }
    if(numeroLimite <= 0)
        *mayorElemento = 0;
    else
        *mayorElemento = miArreglo[0];
    for(int i=0; i<numeroLimite; i++){
        if(*mayorElemento <= miArreglo[i]){
            *mayorElemento = miArreglo[i];
        }
    }
    return;
}
