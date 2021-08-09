#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();
#include <math.h> // pow(); sqrt();

/**
* @brief   Uso de funciones de otras librerías como operadores aritméticos.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	int u = 3; // variable para almacenar los resultados matemáticos
	
	u = pow(2,u); // proceso función base elevado al exponente
	printf("pow(2,3) = %i \n", u); // imprimir salida de datos

	u = sqrt(16); // proceso función cuadrada
	printf("sqrt(16) = %i \n", u); // imprimir salida de datos
	
	return 0; // retorno del programa al sistema
}
