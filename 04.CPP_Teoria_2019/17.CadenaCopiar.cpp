#include <stdio.h>
#include <string.h>

/**
* @brief   Ejemplo de copiar una cadena dentro de otra cadena.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    char str1[] = "hello world"; // variable para almacenar una cadena de carateres
    char str2[50]; // variable para almacenar una cadena de carateres

    printf("String 1: [%s]\n", str1); // imprimir salida de datos
    printf("String 2: [%s]\n", str2); // imprimir salida de datos
    strcpy(str2, str1); // proceso función copiar datos de cadena de carateres
    printf("String 1: [%s]\n", str1); // imprimir salida de datos
    printf("String 2: [%s]\n", str2); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}
