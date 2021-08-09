#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Forma decreciente de 3 números.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int num1, num2, num3, aux; // variables para almacenar los números

	printf("Ingrese 3 numeros\n"); // imprimir salida de datos
	scanf(" %i %i %i", &num1, &num2, &num3);  // entrada de datos
	
	if(num1 >= num2 && num1 >= num3) { // num1 es el primero mayor
		printf("%i ", num1);
		if(num2 >= num3) {
			printf("%i ", num2); // num2 es el segundo mayor
			printf("%i\n", num3); // num3 es el tercero mayor
		} else {
			printf("%i ", num3); // num3 es el segundo mayor
			printf("%i\n", num2); // num2 es el tercero mayor
		}
	}
	else if(num2 >= num1 && num2 >= num3) { // num2 es el primero mayor
		printf("%i ", num2);
		if(num1 >= num3) {
			printf("%i ", num1); // num1 es el segundo mayor
			printf("%i\n", num3); // num3 es el tercero mayor
		} else {
			printf("%i ", num3); // num3 es el segundo mayor
			printf("%i\n", num1); // num1 es el tercero mayor
		}
	}
	else if(num3 >= num1 && num3 >= num2) { // num3 es el primero mayor
		printf("%i ", num3);
		if(num1 >= num2) {
			printf("%i ", num1); // num1 es el segundo mayor
			printf("%i\n", num2); // num2 es el tercero mayor
		} else {
			printf("%i ", num2); // num2 es el segundo mayor
			printf("%i\n", num1); // num1 es el tercero mayor
		}
	}
	
	return 0; // retorno del programa al sistema
}
