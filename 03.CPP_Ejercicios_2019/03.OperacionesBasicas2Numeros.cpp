#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Suma, resta, multiplicación, división de 2 números.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int num1, num2; // variables para números enteros a ingresar
	int suma, resta, multiplicacion, division; // variables para resultado de operaciones básicas
	
	printf("Ingrese primer numero: "); // imprimir salida de datos
	scanf(" %i", &num1); // salida de datos
	printf("Ingrese segundo numero: "); // imprimir salida de datos
	scanf(" %i", &num2); // salida de datos
	
	suma = num1 + num2; // proceso suma
	resta = num1 - num2; // proceso resta
	multiplicacion = num1 * num2; // proceso multiplicación
	division = num1 / num2; // proceso división
	
	printf("\nSuma: %i", suma); // imprimir salida de datos
	printf("\nResta: %i", resta); // imprimir salida de datos
	printf("\nMultiplicacion: %i", multiplicacion); // imprimir salida de datos
	printf("\nDivision: %i\n", division); // imprimir salida de datos

	return 0; // retorno del programa al sistema
}
