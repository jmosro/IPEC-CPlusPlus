#include <stdio.h>

int suma(int a, int b); // prototipo de función

/**
* @brief   Ejemplo de paso de parámetros por valor constante. Función suma().
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int n1, n2, resu; // variables para almacenar operandos

	printf("Dar 2 numeros\n"); // imprimir salida de datos
	scanf(" %i %i", &n1, &n2); // entrada de datos

	resu = suma(n1, n2); // proceso función suma
	printf("La suma de %i y %i es %i\n", n1, n2, resu); // imprimir salida de datos

	return 0; // retorno del programa al sistema
}

int suma(const int a, const int b) { // proceso función suma
	int r; // variable para almacenar el resultado
	r = a + b; // sumar 2 variables de tipo entero
	return r; // retorno del resultado
}
