#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Día de la semana de acuerdo al número que se ingresa.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int diaSemana; // variable para almacenar el día de la semana
	
	printf("Ingrese numero de la dia semana "); // imprimir salida de datos
	scanf(" %i", &diaSemana); // entrada de datos
	
	switch(diaSemana) {
		case 1: printf("%i es domingo\n", diaSemana); break; // imprimir salida de datos
		case 2: printf("%i es lunes\n", diaSemana); break; // imprimir salida de datos
		case 3: printf("%i es martes\n", diaSemana); break; // imprimir salida de datos
		case 4: printf("%i es miercoles\n", diaSemana); break; // imprimir salida de datos
		case 5: printf("%i es jueves\n", diaSemana); break; // imprimir salida de datos
		case 6: printf("%i es viernes\n", diaSemana); break; // imprimir salida de datos
		case 7: printf("%i es sabado\n", diaSemana); break; // imprimir salida de datos
		default: printf("Numero %i no es dia de la semana\n", diaSemana); // imprimir salida de datos
	}
	
	return 0; // retorno del programa al sistema
}
