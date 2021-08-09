#include <stdio.h>

/**
* @brief   Ejemplo de uso de matrices.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int array[4][2]; // variable para almacenar un array bidimensional
	
	// Escritura array
	for(int i=0; i<4; i++) { // sentencia de repetición
		for(int j=0; j<2; j++) { // sentencia de repetición
			printf("Introduzca un elemento [%i][%i] = ", i, j); // imprimir salida de datos
			scanf(" %i", &array[i][j]); // entrada de datos
		}
	}
	
	// Lectura array
	for(int i=0; i<4; i++) { // sentencia de repetición
		for(int j=0; j<2; j++) { // sentencia de repetición
			printf("Datos en elemento [%i][%i] = %i\n", i, j, array[i][j]); // imprimir salida de datos
		}
	}
	
	return 0; // retorno del programa al sistema
}
