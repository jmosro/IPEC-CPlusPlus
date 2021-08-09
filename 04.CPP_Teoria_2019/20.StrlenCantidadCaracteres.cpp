#include <stdio.h>
#include <string.h>

/**
* @brief   Ejemplo de uso de strlen() de la biblioteca string.h
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    char texto[255]; // variable para almacenar una cadena de caracteres
    int longitud; // variable para almacenar el tamaño de una cadena de caracteres

    // Tipos incompatibles -> const char[38] a char[255]
    //texto = "Informatica en Desarrollo de Software";
    strcpy(texto, "Informatica en Desarrollo de Software"); // proceso función copiar cadena de caracteres
    longitud = strlen(texto); // proceso función calcular el tamaño de la cadena de caracteres
    printf("La oracion 'Informatica en Desarrollo de Software' tiene %i caracteres\n", longitud); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}
