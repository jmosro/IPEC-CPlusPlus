#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Número es par o impar.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int numero; // variable para almacenar número ingresado

	printf("Ingrese numero: "); // imprimir salida de datos
	scanf(" %i", &numero); // entrada de datos
	
	if(numero % 2 == 0 ) // si la división entera es 0 entonces es par
		printf("Numero %i es par\n", numero);  // imprimir salida de datos
	else // si la división entera es diferente de 0 entonces es impar
		printf("Numero %i es impar\n", numero); // imprimir salida de datos
	
	return 0; // retorno del programa al sistema
}
