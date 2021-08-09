#include <stdio.h>

struct coordenadas { // estructura de datos
	float x; // variable para almacenar coordenada x
	float y; // variable para almacenar coordenada y
};

/**
* @brief   Ejemplo de estructuras struct.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main (void) {
	// Se declara dos variables del tipo coordenadas
	struct coordenadas puntoA, puntoB; // variables para almacenar estructuras 
	
	// Se lee los valores del punto A
	printf("Coordenada x del punto A: "); // imprimir salida de datos
	scanf(" %f", &(puntoA.x)); // entrada de datos
	printf("Coordenada y del punto A: "); // imprimir salida de datos
	scanf(" %f", &(puntoA.y)); // entrada de datos
	
	// Se lee los valores del punto B
	printf ("Coordenada x del punto B: "); // imprimir salida de datos
	scanf (" %f", &(puntoB.x)); // entrada de datos
	printf ("Coordenada y del punto B: "); // imprimir salida de datos
	scanf (" %f", &(puntoB.y)); // entrada de datos
	
	// Se compara si son con los mismos puntos
	if ((puntoA.x == puntoB.x) && (puntoA.y == puntoB.y)) // comparar estructuras de datos
		printf("A y B son iguales\n"); // imprimir salida de datos
	else
		printf("A y B son distintos\n"); // imprimir salida de datos
		
	return 0; // retorno del programa al sistema
}
