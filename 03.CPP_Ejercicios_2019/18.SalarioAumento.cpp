#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Calcular el salario de un trabajor respecto a la cantidad de años laborados en la misma empresa.
* @brief   >= 10 años se aplica aumento de 10%
* @brief   < 10 AND >= 5 se aplica aumento de 7%
* @brief   < 5 AND >= 3 se aplica aumento de 5%
* @brief   < 3 se aplica aumento de 3%
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
	double montoSalario, montoTotal, aumento;
	short int aniosLaborados;
	
	const double PORCENTAJE_PRIMER_PLUS  = .03; // 03% PLUS
	const double PORCENTAJE_SEGUNDO_PLUS = .05; // 05% PLUS
	const double PORCENTAJE_TERCER_PLUS  = .07; // 07% PLUS
	const double PORCENTAJE_CUARTO_PLUS  = .10; // 10% PLUS
	
	printf("Ingresar monto de salario: "); // imprimir salida de datos
	scanf(" %lf", &montoSalario); // %lf conversion a double
	
	printf("Ingresar anios laborados: "); // imprimir salida de datos
	scanf(" %i", &aniosLaborados); // entrada de datos
	
	montoTotal = montoSalario; // copiar monto salario ingresado
	
	if(aniosLaborados >= 10) { // A partir de 10 años
		aumento = montoSalario * PORCENTAJE_CUARTO_PLUS; // proceso calcular aumento
		montoTotal += aumento;
	} else if(aniosLaborados < 10 && aniosLaborados >= 5) { // A partir de 5 años
		aumento = montoSalario * PORCENTAJE_TERCER_PLUS; // proceso calcular aumento
		montoTotal += aumento;
	} else if(aniosLaborados < 5 && aniosLaborados >= 3) { // A partir de 3 años
		aumento = montoSalario * PORCENTAJE_SEGUNDO_PLUS; // proceso calcular aumento
		montoTotal += aumento;
	} else { // A partir de menos de 3 años
		aumento = montoSalario * PORCENTAJE_PRIMER_PLUS; // proceso calcular aumento
		montoTotal += aumento;
	}
	
	printf("\n"); // salto de línea
	printf("Salario: %.2f Annios de servicio: %i\n", montoSalario, aniosLaborados); // imprimir salida de datos
	printf("Aumento: %.2f Salario Total: %.2f\n", aumento, montoTotal); // imprimir salida de datos
	
	return 0; // retorno del programa al sistema
}
