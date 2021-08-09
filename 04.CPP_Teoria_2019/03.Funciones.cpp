#include <stdio.h>

int suma(int, int); // prototipo de función

/**
* @brief   Ejemplo de uso de funciones. Función suma().
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    int n1, n2, resultado; // variables para almacenar operandos

    printf("Ingresar 2 numeros: "); // imprimir salida de datos
    scanf(" %i %i", &n1, &n2); // entrada de datos

    resultado = suma(n1, n2); // proceso función sumar 2 operandos
    printf("La suma de %i y %i es %i\n", n1, n2, resultado); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}

int suma(int a, int b) { // proceso función sumar 2 operandos
    int r; // variable para almacenar el resultado
    r = a + b; // sumar 2 variables de tipo entero
    return r; // retorno del resultado
}
