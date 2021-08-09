#include <stdio.h>
#include <math.h>

/**
* @brief   Calculadora para las operación matemáticas fundamentales.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    int operador1, operador2, acumulador; // variables para operandos
    int opcion; // variable para el menú de opciones
    operador1, operador2, acumulador = 0, 0, 0; // inicializar los valores

    do {
        printf("Seleccione una opcion\n");
        printf("1: Sumar 2 numeros\n");
        printf("2: Restar 2 numeros\n");
        printf("3: Multiplicar 2 numeros\n");
        printf("4: Dividir 2 numeros\n");

        printf("5: Sumar al anterior\n");
        printf("6: Restar al anterior\n");
        printf("7: Multiplicar al anterior\n");
        printf("8: Dividir al anterior\n");

        printf("9: Potencia base y exponente\n");
        printf("10: Imprimir ultimo resultado\n");
        printf("Escriba 0 para salir\n");
        scanf(" %i", &opcion); // entrada de datos

        // Bloque switch - Ingreso de datos
        switch(opcion) {
            case 0: printf("Salir\n"); break;

            case 1: printf("Suma: Ingrese 2 numeros: ");
                    scanf(" %i %i", &operador1, &operador2);
                    break;
            case 2: printf("Resta: Ingrese 2 numeros: ");
                    scanf(" %i %i", &operador1, &operador2);
                    break;
            case 3: printf("Multiplicacion: Ingrese 2 numeros: ");
                    scanf(" %i %i", &operador1, &operador2);
                    break;
            case 4: printf("Division: Ingrese 2 numeros: ");
                    scanf(" %i %i", &operador1, &operador2);
                    break;

            case 5: printf("Suma al anterior: Ingrese numero: ");
                    scanf(" %i", &operador2);
                    break;
            case 6: printf("Resta al anterior: Ingrese numero: ");
                    scanf(" %i", &operador2);
                    break;
            case 7: printf("Multiplicacion al anterior: Ingrese numero: ");
                    scanf(" %i", &operador2);
                    break;
            case 8: printf("Division al anterior: Ingrese numero: ");
                    scanf(" %i", &operador2);
                    break;

            case 9: printf("Potencia: Ingrese la base y el exponente ");
                    scanf(" %i %i", &operador1, &operador2);
                    break;
            case 10: printf("Acumulado: %i\n", acumulador);
        }


        // Bloque switch - Cálculo de Operaciones
        switch(opcion) {
            case 1: acumulador = operador1 + operador2; break;
            case 2: acumulador = operador1 - operador2; break;
            case 3: acumulador = operador1 * operador2; break;
            case 4: if(operador2 != 0) acumulador = operador1 / operador2;
                    else acumulador = 0;
                    break;
            case 5: operador1 = acumulador; acumulador = operador1 + operador2; break;
            case 6: operador1 = acumulador; acumulador = operador1 - operador2; break;
            case 7: operador1 = acumulador; acumulador = operador1 * operador2; break;
            case 8: operador1 = acumulador;
                    if(operador2 != 0) acumulador = operador1 / operador2;
                    else acumulador = 0;
                    break;
            case 9: acumulador = pow(operador1, operador2); break;
        }

        // Bloque switch - Salida de datos
        switch(opcion) {
            case 1: printf("Suma: %i + %i = %i\n", operador1, operador2, acumulador); break;
            case 2: printf("Resta: %i - %i = %i\n", operador1, operador2, acumulador); break;
            case 3: printf("Multiplicacion: %i * %i = %i\n", operador1, operador2, acumulador); break;
            case 4: if(operador2 != 0) printf("Division: %i / %i = %i\n", operador1, operador2, acumulador);
                    else printf("Division: %i / %i = %i -> Error Division entre 0\n", operador1, operador2, acumulador);
                    break;
            case 5: printf("Suma: %i + %i = %i\n", operador1, operador2, acumulador); break;
            case 6: printf("Resta: %i - %i = %i\n", operador1, operador2, acumulador); break;
            case 7: printf("Multiplicacion: %i * %i = %i\n", operador1, operador2, acumulador); break;
            case 8: if(operador2 != 0) printf("Division: %i / %i = %i\n", operador1, operador2, acumulador);
                    else printf("Division: %i / %i = %i -> Error Division entre 0\n", operador1, operador2, acumulador);
                    break;
            case 9: printf("Potencia: Base: %i Exponente: %i = %i\n", operador1, operador2, acumulador); break;
        }

        printf("\n");
    } while(opcion != 0);

    return 0; // retornar el control al sistema
}
