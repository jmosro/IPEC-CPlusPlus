#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Crear un menú y hasta que elija la opción salir, entonces salir.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    char opcionLetra; // variable para almacenar carácter
    
    do {
        printf("Seleccionar opcion:\n"); // imprimir salida de datos
        printf("1: Archivo\n"); // imprimir salida de datos
        printf("2: Buscar\n"); // imprimir salida de datos
        printf("3: Salir\n"); // imprimir salida de datos
        scanf(" %c", &opcionLetra); // entrada de datos
        
        switch(opcionLetra) {
            case '1': printf("Menu Archivo seleccionado\n"); break; // imprimir salida de datos
            case '2': printf("Menu Buscar seleccionado\n"); break; // imprimir salida de datos
            case '3': printf("Menu Salir seleccionado\n"); break; // imprimir salida de datos
            default: printf("Opcion no valida: %c\n", opcionLetra); break; // imprimir salida de datos
        }
        printf("\n");
    } while(opcionLetra != '3'); // condición de parada: opción salir
    
	return 0; // retorno del programa al sistema
}
