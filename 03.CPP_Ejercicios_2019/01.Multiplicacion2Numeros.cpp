#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Multiplicación de 2 flotantes.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	float num1, num2, result; // declaración variables
	printf("Ingresar primer numero \n"); // imprimir salida de datos
	scanf(" %f", &num1); // entrada de datos
	printf("Ingresar segundo numero \n"); // imprimir salida de datos
	scanf(" %f", &num2); // entrada de datos
	
	result = num1 * num2; // proceso multiplicación
	printf("El resultado de la multiplicacion es %f \n", result); // imprimir salida de datos
	
	return 0; // retorno del programa al sistema
}
