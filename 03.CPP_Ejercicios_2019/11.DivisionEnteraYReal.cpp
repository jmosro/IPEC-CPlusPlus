#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Diferentes tipos de resultado entre división de enteros y reales.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	// Declaración de constantes y variables
	int u=3;
	int n1=7, n2=2, n3;
	float r1=7, r2=2, r3;
	
	printf("Entero entre entero, asignado a entero \t"); // imprimir salida de datos
	n3 = n1 / n2; // proceso usando casting
	printf("%i \n", n3); // imprimir salida de datos
	
	printf("Real entre real, asignado a real \t"); // imprimir salida de datos
	r3 = r1 / r2; // proceso usando casting
	printf("%f \n", r3); // imprimir salida de datos
	
	printf("Real entre entero, asignado a entero \t"); // imprimir salida de datos
	n3 = r1 / n2; // proceso usando casting
	printf("%i \n", n3); // imprimir salida de datos
	
	printf("Real entre entero, asignado a real \t"); // imprimir salida de datos
	r3 = r1 / n2; // proceso usando casting
	printf("%f \n", r3); // imprimir salida de datos
	
	return 0; // retorno del programa al sistema
}
