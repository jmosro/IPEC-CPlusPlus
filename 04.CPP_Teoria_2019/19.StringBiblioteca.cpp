#include <stdio.h>
#include <string.h>

/**
* @brief   Ejemplo de uso de funciones de la biblioteca string.h
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    char color[] = "rojo"; // variable para almacenar una cadena de caracteres
    char grosor[] = "grueso"; // variable para almacenar una cadena de caracteres
    char descripcion[1024]; // variable para almacenar una cadena de caracteres
    int largo; // variable para almacenar el largo de la cadena de caracteres
    char *posicion; // posicion del carácter en la cadena de caracteres
    int esIgualCadena; // almacenar si es igual entre 2 cadenas de caracteres

    // Copiar texto en variable
    strcpy(descripcion, "Lapiz0 colo0r "); // proceso función copiar datos de tipo carácter

    // Concatenar texto en variable
    // Destino, fuente(String a concatenar), tamaño concatenar
    strncat(descripcion, color, 20); // proceso función anexar al final cadena de caracteres
    strncat(descripcion, " de trazo ", 20); // proceso función anexar al final cadena de caracteres
    strncat(descripcion, grosor, 20); // proceso función anexar al final cadena de caracteres
    printf("%s\n", descripcion); // imprimir salida de datos

    // Calcular tamaño total
    largo = strlen(descripcion); // proceso función cálcular tamaño hasta el carácter '\0' y no llegar hasta el carácter 1024
    printf("Largo cadena descripcion: %i\n", largo); // imprimir salida de datos

    // Encontrar primer carácter
    posicion = strchr(descripcion, 'j'); // proceso función encontrar carácter
    printf("Posicion de j: %i\n", posicion-descripcion+1); // imprimir salida de datos

    // Encontrar primer texto
    posicion = strstr(descripcion, "rojo"); // proceso función encontrar cadena de caracteres
    printf("Posicion de rojo: %i\n", posicion-descripcion+1); // imprimir salida de datos

    // Comparacion de cadenas de caracteres
    esIgualCadena = strcmp(color, "rojo"); // proceso función comparar si son iguales las cadenas de caracteres
    printf("Cadena %s es igual a 'rojo': %i\n", color, esIgualCadena); // imprimir salida de datos
    esIgualCadena = strcmp(color, "azul"); // proceso función comparar si son iguales las cadenas de caracteres
    printf("Cadena %s es igual a 'azul': %i\n", color, esIgualCadena); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}
