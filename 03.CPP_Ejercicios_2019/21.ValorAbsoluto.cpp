#include <stdio.h>

/**
* @brief   Calcular el valor absoluto.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void){
    double numero, absoluto;

    printf("Ingresar un numero: "); // imprimir salida de datos
    scanf(" %lf", &numero); // entrada de datos

    // Calcular el valor absoluto
    if(numero >= 0) absoluto = numero;
    else absoluto = -numero;

    printf("Valor absoluto de %lf es %lf", numero, absoluto); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}
