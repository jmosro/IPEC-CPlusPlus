#include <stdio.h>
#include <stdlib.h>

/**
* @brief   Ejemplo de uso de scanf().
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    int dni; // variable para almacenar la cédula del estudiante
    float nota; // variable para almacenar la nota del estudiante
    char nombre[100]; // variable para almacenar el nombre del estudiante

    // Leer en una misma línea 2 o más datos
    printf("Introduzca su dni y su nota\n"); // imprimir salida de datos
    scanf(" %i %f", &dni, &nota); // entrada de datos
    printf("La nota del alumno %i es: %f\n\n", dni, nota); // imprimir salida de datos

    // Leer hasta el carácter de salto de línea
    printf("Introduzca su nombre con apellidos entre espacios:\n"); // imprimir salida de datos
    scanf(" %[^\n]s", &nombre); // entrada de datos
    printf("Su nombre completo es: %s\n\n", nombre); // imprimir salida de datos

    // Leer y cortar la palabra hasta el carácter espacio
    printf("Introduzca su nombre con apellidos entre espacios:\n"); // imprimir salida de datos
    scanf(" %s", &nombre); // entrada de datos
    printf("Su nombre es: %s\n\n", nombre); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}
