#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

#define CONSTANTE_ENTRE_BASES 10
#define FACTOR_KG_KG  1
#define FACTOR_KG_HG  10
#define FACTOR_KG_DAG 100
#define FACTOR_KG_G   1000
#define FACTOR_KG_DG  10000
#define FACTOR_KG_CG  100000
#define FACTOR_KG_MG  1000000

/**
* @brief   Programa para pasar de KG a cualquier unidad de medida.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    char opcionLetra; // variable para almacenar carácter
    int valorConvertir, resultado; // variable para almacenar los datos
    
    do {
        printf("Seleccione base a convertir\n"); // imprimir salida de datos
        printf("1: Kilogramos a Kilogramos\n");
        printf("2: Kilogramos a Hectogramos\n");
        printf("3: Kilogramos a Decagramos\n");
        printf("4: Kilogramos a Gramos\n");
        printf("5: Kilogramos a Decigramos\n");
        printf("6: Kilogramos a Centigramos\n");
        printf("7: Kilogramos a Miligramos\n");
        printf("8: Salir del programa\n");
        
        scanf(" %c", &opcionLetra); // entrada de datos
        if(opcionLetra != '8') { // opción salir no es seleccionado
        	printf("Ingrese valor a convertir en formato entero: "); // imprimir salida de datos
        	scanf(" %i", &valorConvertir); // entrada de datos
		}
        
        switch(opcionLetra) {
            case '1': // KG a KG
                resultado = valorConvertir * FACTOR_KG_KG; // proceso convertir de base con factor
                printf("%i KG equivale a %i KG\n", valorConvertir, resultado); // imprimir salida de datos
                break;
            case '2': // KG a HG
                resultado = valorConvertir * FACTOR_KG_HG; // proceso convertir de base con factor
                printf("%i KG equivale a %i HG\n", valorConvertir, resultado); // imprimir salida de datos
                break;
            case '3': // KG a DAG
                resultado = valorConvertir * FACTOR_KG_DAG; // proceso convertir de base con factor
                printf("%i KG equivale a %i DAG\n", valorConvertir, resultado); // imprimir salida de datos
                break;
            case '4': // KG a G
                resultado = valorConvertir * FACTOR_KG_G; // proceso convertir de base con factor
                printf("%i KG equivale a %i G\n", valorConvertir, resultado); // imprimir salida de datos
                break;
            case '5': // KG a DG
                resultado = valorConvertir * FACTOR_KG_DG; // proceso convertir de base con factor
                printf("%i KG equivale a %i DG\n", valorConvertir, resultado); // imprimir salida de datos
                break;
            case '6': // KG a CG
                resultado = valorConvertir * FACTOR_KG_CG; // proceso convertir de base con factor
                printf("%i KG equivale a %i CG\n", valorConvertir, resultado); // imprimir salida de datos
                break;
            case '7': // KG a KG
                resultado = valorConvertir * FACTOR_KG_MG; // proceso convertir de base con factor
                printf("%i KG equivale a %i MG\n", valorConvertir, resultado); // imprimir salida de datos
                break;
            case '8': break; // opción salir seleccionado
            default: printf("Opcion no valida: %c\n", opcionLetra); break; // imprimir salida de datos
        }
        printf("\n"); // salto de línea
    } while(opcionLetra != '8'); // condición de parada: opción salir
    
	return 0; // retorno del programa al sistema
}
