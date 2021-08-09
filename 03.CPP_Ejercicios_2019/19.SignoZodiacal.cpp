#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Signo zodiacal usando el día y mes de nacimiento.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int dia, mes; // variables para almacenar el dia y mes
	
	printf("Escribir el dia de nacimiento: "); // imprimir salida de datos
	scanf(" %i", &dia); // entrada de datos
	printf("Escribir el mes de nacimiento: "); // imprimir salida de datos
	scanf(" %i", &mes); // entrada de datos
	
	     if( (dia >= 20 && mes ==  1) || (dia <= 19 && mes ==  2) ) printf("Su signo es: Acuario\n"); // imprimir salida de datos
	else if( (dia >= 20 && mes ==  2) || (dia <= 20 && mes ==  3) ) printf("Su signo es: Piscis\n"); // imprimir salida de datos
	else if( (dia >= 21 && mes ==  3) || (dia <= 20 && mes ==  4) ) printf("Su signo es: Aries\n"); // imprimir salida de datos
	else if( (dia >= 21 && mes ==  4) || (dia <= 20 && mes ==  5) ) printf("Su signo es: Tauro\n"); // imprimir salida de datos
	else if( (dia >= 21 && mes ==  5) || (dia <= 21 && mes ==  6) ) printf("Su signo es: Geminis\n"); // imprimir salida de datos
	else if( (dia >= 22 && mes ==  6) || (dia <= 22 && mes ==  7) ) printf("Su signo es: Cancer\n"); // imprimir salida de datos
	else if( (dia >= 23 && mes ==  7) || (dia <= 23 && mes ==  8) ) printf("Su signo es: Leo\n"); // imprimir salida de datos
	else if( (dia >= 24 && mes ==  8) || (dia <= 23 && mes ==  9) ) printf("Su signo es: Virgo\n"); // imprimir salida de datos
	else if( (dia >= 24 && mes ==  9) || (dia <= 22 && mes == 10) ) printf("Su signo es: Libra\n"); // imprimir salida de datos
	else if( (dia >= 23 && mes == 10) || (dia <= 22 && mes == 11) ) printf("Su signo es: Escorpio\n"); // imprimir salida de datos
	else if( (dia >= 23 && mes == 11) || (dia <= 21 && mes == 12) ) printf("Su signo es: Sagitario\n"); // imprimir salida de datos
	else if( (dia >= 22 && mes == 12) || (dia <= 19 && mes ==  1) ) printf("Su signo es: Capricornio\n"); // imprimir salida de datos
	
	return 0; // retorno del programa al sistema
}
