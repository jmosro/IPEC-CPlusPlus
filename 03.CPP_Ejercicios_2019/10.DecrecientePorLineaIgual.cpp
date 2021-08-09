#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Forma decreciente de 3 números. Si se repiten imprimirlos en la misma línea.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int num1, num2, num3; // variables para almacenar los números
	int mayor, medio, menor; // variables auxiliares para ordenar los valores

	printf("Ingrese 3 numeros\n"); // imprimir salida de datos
	scanf(" %i", &num1); // entrada de datos
	scanf(" %i", &num2); // entrada de datos
	scanf(" %i", &num3); // entrada de datos
	
	// Imprimir en orden decreciente los números ingresados
	printf("\nOrden decreciente:\n"); // imprimir salida de datos
	if(num1 >= num2 && num1 >= num3) { // num1 es el primero mayor
		printf("%i ", num1);
		if(num2 >= num3) {
			printf("%i ", num2); // num2 es el segundo mayor
			printf("%i\n", num3); // num3 es el tercero mayor
			mayor = num1; // ordenar los datos introducidos
			medio = num2; // ordenar los datos introducidos
			menor = num3; // ordenar los datos introducidos
		} else {
			printf("%i ", num3); // num3 es el segundo mayor
			printf("%i\n", num2); // num2 es el tercero mayor
			mayor = num1; // ordenar los datos introducidos
			medio = num3; // ordenar los datos introducidos
			menor = num2; // ordenar los datos introducidos
		}
	}
	else if(num2 >= num1 && num2 >= num3) { // num2 es el primero mayor
		printf("%i ", num2);
		if(num1 >= num3) {
			printf("%i ", num1); // num1 es el segundo mayor
			printf("%i\n", num3); // num3 es el tercero mayor
			mayor = num2; // ordenar los datos introducidos
			medio = num1; // ordenar los datos introducidos
			menor = num3; // ordenar los datos introducidos
		} else {
			printf("%i ", num3); // num3 es el segundo mayor
			printf("%i\n", num1); // num1 es el tercero mayor
			mayor = num2; // ordenar los datos introducidos
			medio = num3; // ordenar los datos introducidos
			menor = num1; // ordenar los datos introducidos
		}
	}
	else if(num3 >= num1 && num3 >= num2) { // num3 es el primero mayor
		printf("%i ", num3);
		if(num1 >= num2) {
			printf("%i ", num1); // num1 es el segundo mayor
			printf("%i\n", num2); // num2 es el tercero mayor
			mayor = num3; // ordenar los datos introducidos
			medio = num1; // ordenar los datos introducidos
			menor = num2; // ordenar los datos introducidos
		} else {
			printf("%i ", num2); // num2 es el segundo mayor
			printf("%i\n", num1); // num1 es el tercero mayor
			mayor = num3; // ordenar los datos introducidos
			medio = num2; // ordenar los datos introducidos
			menor = num1; // ordenar los datos introducidos
		}
	}
	
	// Imprimir en una única línea los iguales entre mayor, medio y menor
	printf("\nLineas en numeros iguales:\n"); // imprimir salida de datos
	if(mayor == medio && medio == menor) {
		printf("%i %i %i\n", mayor, medio, menor); // imprimir salida de datos
	} else if(mayor == medio) {
		printf("%i %i\n", mayor, medio); // imprimir salida de datos
		printf("%i\n", menor); // imprimir salida de datos
	} else if(medio == menor) {
		printf("%i\n", mayor); // imprimir salida de datos
		printf("%i %i\n", medio, menor); // imprimir salida de datos
	} else {
		printf("%i\n", mayor); // imprimir salida de datos
		printf("%i\n", medio); // imprimir salida de datos
		printf("%i\n", menor); // imprimir salida de datos
	}
	
	return 0; // retorno del programa al sistema
}
