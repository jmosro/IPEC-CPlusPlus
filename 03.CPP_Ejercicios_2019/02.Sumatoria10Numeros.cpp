#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Sumatoria de 10 números. Mitad con enteros y mitad con flotante.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	// Declaración de variables
	int n1, n2, n3, n4, n5;
	float n6, n7, n8, n9, n10;
	int sumatoria;
	
	printf("Ingrese valor entero 1: "); // imprimir salida de datos
	scanf(" %i", &n1); // entrada de datos
	printf("Ingrese valor entero 2: "); // imprimir salida de datos
	scanf(" %i", &n2); // entrada de datos
	printf("Ingrese valor entero 3: "); // imprimir salida de datos
	scanf(" %i", &n3); // entrada de datos
	printf("Ingrese valor entero 4: "); // imprimir salida de datos
	scanf(" %i", &n4); // entrada de datos
	printf("Ingrese valor entero 5: "); // imprimir salida de datos
	scanf(" %i", &n5); // entrada de datos
	
	printf("Ingrese valor flotante 6: "); // imprimir salida de datos
	scanf(" %f", &n6); // entrada de datos
	printf("Ingrese valor flotante 7: "); // imprimir salida de datos
	scanf(" %f", &n7); // entrada de datos
	printf("Ingrese valor flotante 8: "); // imprimir salida de datos
	scanf(" %f", &n8); // entrada de datos
	printf("Ingrese valor flotante 9: "); // imprimir salida de datos
	scanf(" %f", &n9); // entrada de datos
	printf("Ingrese valor flotante 10: "); // imprimir salida de datos
	scanf(" %f", &n10); // entrada de datos
	
	sumatoria = n1+n2+n3+n4+n5 + n6+n7+n8+n9+n10; // proceso sumatoria
	printf("Resultado sumatoria: %i \n", sumatoria); // imprimir salida de datos
	
	return 0; // retorno del programa al sistema
}
