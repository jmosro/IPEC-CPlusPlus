#include <stdio.h>
#include "03.TablaMultiplicar.hpp"

/**
* @brief   Tabla de multiplicar de un número.
* @class   TablaMultiplicar
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void TablaMultiplicar(void){
    int numTabla;

    printf("Ingresar la tabla de multiplicar\n");
    printf("Rango entre 1 a 10\n");
    printf("Tabla de multiplicar: ");
    
    scanf(" %i", &numTabla);
    if(numTabla>=0 && numTabla<=10)
        CalcularTablaMultiplicar(numTabla);
    else
        printf("Numero de tabla de multiplicar no valido\n");

    return;
}

void CalcularTablaMultiplicar(int numeroTabla){
    int anchoColumna = 3;
    printf("%s\n", "-----------------");
    for(int i=1; i<=10; i++){
        printf("|");
        printf("%*i", anchoColumna, i);
        printf(" * ");
        printf("%*i", anchoColumna-1, numeroTabla);
        printf(" = ");
        printf("%*i", anchoColumna, i*numeroTabla);
        printf("|\n");
    }
    printf("%s\n", "-----------------");
    return;
}
