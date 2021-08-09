#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Convertir un entero a flotante con casting explícito e implícito.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {	
	int edad = 25; // variable para almacenar la edad de la persona
	float tiempo, expresion; // variables para usar conversión de tipos
	
	tiempo = (float) edad + .35; // conversión explícita a tipo float
	expresion = tiempo * edad; // conversión implícita [expresion = tiempo * (float) edad;]
	
	printf("Edad: %i Tiempo: %f Expresion: %f\n", edad, tiempo, expresion); // imprimir salida de datos
	
	return 0; // retorno del programa al sistema
}
