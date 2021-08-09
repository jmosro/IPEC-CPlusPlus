#include <stdio.h> // printf(); scanf();
#include <stdlib.h> // system();

/**
* @brief   Elegir tipo de triángulo y calcular el perímetro del triángulo.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    char opcionLetra; // variable para almacenar carácter
    int perimetro, lado1, lado2, lado3; // variables para guardar los lados del triángulo

    do {
        printf("Seleccionar tipo de triangulo:\n"); // imprimir salida de datos
        printf("1: Equilatero\n"); // imprimir salida de datos
        printf("2: Isoceles\n"); // imprimir salida de datos
        printf("3: Escaleno\n"); // imprimir salida de datos
        printf("4: Salir\n"); // imprimir salida de datos
        scanf(" %c", &opcionLetra); // entrada de datos

        switch(opcionLetra) {
            case '1':
                printf("Equilatero: Ingrese valor del lado unico: "); // información
                scanf(" %i", &lado1); // entrada de datos
                perimetro = lado1 * 3; // proceso calcular perímetro
                printf("Equilatero: Perimetro: %i\n", perimetro); // resultado
                break;
            case '2':
                printf("Isoceles: Ingrese valor de 2 lados\n"); // información
                printf("Ingrese lado igual: "); // información
                scanf(" %i", &lado1); // entrada de datos
                printf("Ingrese lado diferente: "); // información
                scanf(" %i", &lado2); // entrada de datos
                perimetro = lado1 * 2 + lado2; // proceso calcular perímetro
                printf("Isoceles: Perimetro: %i\n", perimetro); // resultado
                break;
            case '3':
                printf("Escaleno: Ingrese valor de 3 lados\n"); // información
                printf("Ingrese lado1: "); // información
                scanf(" %i", &lado1); // entrada de datos
                printf("Ingrese lado2: "); // información
                scanf(" %i", &lado2); // entrada de datos
                printf("Ingrese lado3: "); // información
                scanf(" %i", &lado3); // entrada de datos
                perimetro = lado1 + lado2 + lado3; // proceso calcular perímetro
                printf("Escaleno: Perimetro: %i\n", perimetro); // resultado
                break;
            case '4': break; // opción salir seleccionado
            default: printf("Opcion no valida: %c\n", opcionLetra); break; // default
        }
        printf("\n"); // salto de línea
    } while(opcionLetra != '4'); // condición de parada: opción salir

	return 0; // retorno del programa al sistema
}

