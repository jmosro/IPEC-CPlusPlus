#include <stdio.h>
#define TAM 5

void leerVector(int a[], int longitud); // prototipo de función

/**
* @brief   Ejemplo de vectores como parámetros. Función leerVector().
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void){
	int v[TAM]; // variable para almacenar un vector

	printf("Introduzca los elementos del Vector\n"); // imprimir salida de datos
	leerVector(v, TAM); // proceso función almacenar datos en el vector
	
	return 0; // retorno del programa al sistema
}

void leerVector(int a[], int longitud){ // proceso función almacenar datos en el vector
	int i; // variable auxiliar
	for (i=0; i<longitud; i++) // sentencia de repetición
		scanf("%d", &a[i]); // entrada de datos
	return; // retorno del resultado
}
