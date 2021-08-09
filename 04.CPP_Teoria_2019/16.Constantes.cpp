#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();
#define PI 3.14159 // constante global

/**
* @brief   Ejemplo de variable constante, calcular el área de un círculo.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	float radius, area; // variables para almacenar los datos del cículo
	
	printf("Calcular el area de un circulo\n"); // imprimir salida de datos
	printf("radius? "); // imprimir salida de datos
	scanf(" %f", &radius); // entrada de datos
	area = PI * radius * radius; // proceso para calcular el área del círculo
	printf("%f \n", area); // imprimir salida de datos
	
	return 0; // retorno del programa al sistema
}
