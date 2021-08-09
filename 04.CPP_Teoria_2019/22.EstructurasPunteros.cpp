#include <stdio.h>

struct calcular { // estructura de datos
	int num1, num2; // variable para almacenar un número
	int suma; // variable para almacenar un número
	char nombre; // variable para almacenar un carácter
};

/**
* @brief   Ejemplo de copiar struct por punteros.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	
	struct calcular suma1 = {2,3,5,'a'}; // variable para almacenar una estructura
	struct calcular suma2 = {3,4,7,'b'}; // variable para almacenar una estructura
	struct calcular suma3 = {}; // variable para almacenar una estructura
	struct calcular *resul1, *resul2; // variable para almacenar una estructura
	
	printf("%i %i %i %c\n", suma1.num1, suma1.num2, suma1.suma, suma1.nombre); // imprimir salida de datos
	printf("%i %i %i %c\n", suma2.num1, suma2.num2, suma2.suma, suma2.nombre); // imprimir salida de datos
	printf("%i %i %i %c\n", suma3.num1, suma3.num2, suma3.suma, suma3.nombre); // imprimir salida de datos
	
	// Copiar datos entre misma estructura - Sobrecarga implícita de operadores
	suma3 = suma2; // asignar contenido a la estructura de datos
	suma2 = suma1; // asignar contenido a la estructura de datos
	printf("%i %i %i %c\n", suma1.num1, suma1.num2, suma1.suma, suma1.nombre); // imprimir salida de datos
	printf("%i %i %i %c\n", suma2.num1, suma2.num2, suma2.suma, suma2.nombre); // imprimir salida de datos
	printf("%i %i %i %c\n", suma3.num1, suma3.num2, suma3.suma, suma3.nombre); // imprimir salida de datos
	
	// Copiar referencia a la memoria entre misma estructura - Punteros
	resul1 = &suma2; // asignar contenido a la estructura de datos
	resul2 = &suma1; // asignar contenido a la estructura de datos
	printf("%i\n", resul2->num1); // suma1.num1 // imprimir salida de datos
	printf("%i\n", resul1->suma); // suma2.suma // imprimir salida de datos
	printf("%c\n", resul2->nombre); //suma1.nombre // imprimir salida de datos
	
	// Copiar referencia a la memoria entre misma estructura - Punteros
	resul1 = &suma3; // asignar contenido a la estructura de datos
	printf("Se cambia la asignacion de referencia del puntero resul1 con valor: %c", resul1->nombre); // imprimir salida de datos
		
	return 0; // retorno del programa al sistema
}
