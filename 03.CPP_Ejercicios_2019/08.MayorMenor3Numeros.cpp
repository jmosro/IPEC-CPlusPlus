#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Mayor y menor de 3 números.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int num1, num2, num3; // variables para almacenar los números
	
	printf("Ingrese 3 numeros\n"); // imprimir salida de datos
	scanf(" %i %i %i", &num1, &num2, &num3); // entrada de datos
	
	if(num1 > num2 && num1 > num3) // num1 es el mayor
		printf("Numero %i es mayor\n", num1); // imprimir salida de datos
	else if(num2 > num3) // num2 es el mayor
		printf("Numero %i es mayor\n", num2); // imprimir salida de datos
	else // num3 es el mayor
		printf("Numero %i es mayor\n", num3); // imprimir salida de datos
	
	if(num1 < num2 && num1 < num3) // num1 es el menor
		printf("Numero %i es menor\n", num1); // imprimir salida de datos
	else if(num2 < num3) // num2 es el menor
		printf("Numero %i es menor\n", num2); // imprimir salida de datos
	else // num3 es el menor
		printf("Numero %i es menor\n", num3); // imprimir salida de datos
		
	return 0; // retorno del programa al sistema
}
