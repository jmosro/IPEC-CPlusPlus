#include <stdio.h>
#include <string.h>

/**
* @brief   Concatenar todas las partes del nombre de la persona.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    // Variables para almacenar el nombre de la persona
    char primerNombre[50];
    char segundoNombre[50];
    char primerApellido[50];
    char segundoApellido[50];
    char nombreCompleto[255];

    printf("Primer Nombre: "); // imprimir salida de datos
    scanf(" %s", primerNombre); // entrada de datos
    printf("Segundo Nombre: "); // imprimir salida de datos
    scanf(" %s", segundoNombre); // entrada de datos
    printf("Primer Apellido: "); // imprimir salida de datos
    scanf(" %s", primerApellido); // entrada de datos
    printf("Segundo Apellido: "); // imprimir salida de datos
    scanf(" %s", segundoApellido); // entrada de datos

    strcpy(nombreCompleto, primerNombre); // proceso función copiar cadena de carácteres
    strcat(nombreCompleto, " "); // proceso función anexar al final cadena de carácteres
    strcat(nombreCompleto, segundoNombre); // proceso función anexar al final cadena de carácteres
    strcat(nombreCompleto, " "); // proceso función anexar al final cadena de carácteres
    strcat(nombreCompleto, primerApellido); // proceso función anexar al final cadena de carácteres
    strcat(nombreCompleto, " "); // proceso función anexar al final cadena de carácteres
    strcat(nombreCompleto, segundoApellido); // proceso función anexar al final cadena de carácteres

    printf("Su nombre completo es:\n%s\n", nombreCompleto); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}
