#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Mes del año de acuerdo al número que se ingresa.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int mesAnno; // variable para almacenar el mes del año

	printf("Ingrese numero de mes del anno\n"); // imprimir salida de datos
	scanf(" %i", &mesAnno); // entrada de datos
	
	switch(mesAnno) {
		case 1: printf("%i es enero\n", mesAnno); break; // imprimir salida de datos
		case 2: printf("%i es febrero\n", mesAnno); break; // imprimir salida de datos
		case 3: printf("%i es marzo\n", mesAnno); break; // imprimir salida de datos
		case 4: printf("%i es abril\n", mesAnno); break; // imprimir salida de datos
		case 5: printf("%i es mayo\n", mesAnno); break; // imprimir salida de datos
		case 6: printf("%i es junio\n", mesAnno); break; // imprimir salida de datos
		case 7: printf("%i es julio\n", mesAnno); break; // imprimir salida de datos
		case 8: printf("%i es agosto\n", mesAnno); break; // imprimir salida de datos
		case 9: printf("%i es septiembre\n", mesAnno); break; // imprimir salida de datos
		case 10: printf("%i es octubre\n", mesAnno); break; // imprimir salida de datos
		case 11: printf("%i es noviembre\n", mesAnno); break; // imprimir salida de datos
		case 12: printf("%i es diciembre\n", mesAnno); break; // imprimir salida de datos
		default: printf("Numero %i no es mes del anno\n", mesAnno); // imprimir salida de datos
	}
	
	return 0; // retorno del programa al sistema
}
