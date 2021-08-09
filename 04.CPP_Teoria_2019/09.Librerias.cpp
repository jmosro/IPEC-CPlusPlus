#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_CADENA 80 // constante global

/**
* @brief   Ejemplo de uso de librerías.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    char nombre[TAM_CADENA]; // variable para almacenar el nombre de la persona
    char apellidos[TAM_CADENA]; // variable para almacenar los apellidos de la persona
    char nombreCompleto[TAM_CADENA * 2 + 1]; // variable para almacenar el nombre completo de la persona

    printf("Introduzca su nombre:\n"); // imprimir salida de datos
    gets(nombre); // entrada de datos
    printf("Introduzca sus apellidos:\n"); // imprimir salida de datos
    gets(apellidos); // entrada de datos

    // Iniciar el nombre completo vacio
    strcpy(nombreCompleto, "");  // proceso función copiar cadena de caracteres
    // Concatenar el nombre
    strcat(nombreCompleto, nombre); // proceso función anexar al final cadena de caracteres
    // Concatenar en blanco
    strcat(nombreCompleto, " "); // proceso función anexar al final cadena de caracteres
    // Concatenar los apellidos
    strcat(nombreCompleto, apellidos); // proceso función anexar al final cadena de caracteres

    printf("Su nombre completo es: %s\n", nombreCompleto); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}
