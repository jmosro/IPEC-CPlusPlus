#include <stdio.h>
#include <stdlib.h>

/**
* @brief   Ejemplo de uso de printf().
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {

    printf("Hola, usted se llama %s. Tiene %i annios, mide %f\n", "Sara", 21, 1.68); // imprimir salida de datos
    printf("La inicial de tu apellido es %c\n", 'P'); // imprimir salida de datos
    printf("Adios\n\n"); // imprimir salida de datos

    char nombre[10] = "Sara"; // variable para almacenar las características de la persona
    int edad = 21; // variable para almacenar las características de la persona
    float altura = 1.68; // variable para almacenar las características de la persona
    char letra = 'P'; // variable para almacenar las características de la persona
    
    printf("Hola, usted se llama %s. Tiene %i annios, mide %f\n", nombre, edad, altura); // imprimir salida de datos
    printf("La inicial de tu apellido es %c\n", letra); // imprimir salida de datos
    printf("Adios\n"); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}
