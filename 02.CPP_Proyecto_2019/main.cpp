#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "01.NumerosRomanos.hpp"
#include "02.RangoEdades.hpp"
#include "03.TablaMultiplicar.hpp"
#include "04.SumaRepetitivaCreciente.hpp"
#include "05.Factorial.hpp"
#include "06.SumaRepetitivaPotenciaCreciente.hpp"
#include "07.Fibonacci.hpp"
#include "08.SumaElementosArreglo.hpp"
#include "09.IndiceElementosArreglo.hpp"
#include "10.MayorElementoArreglo.hpp"

/**
* @brief   Archivo principal main().
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void mostrarMenu(void);
void funcionesMenu(int opcion);

int main(){
    char opcionSeleccionada;

    printf("-----------------------------\n");
    printf("          Proyecto           \n");
    printf("     III Trimestre 2019      \n");
    printf("IPEC Santo Domingo de Heredia\n");
    printf("Jesus Alberto Moscoso Aguero \n");
    printf("-----------------------------\n");
    printf("Digitar 0 -> Mostrar menu\n");
    printf("Digitar s -> Salir\n");
    scanf(" %c", &opcionSeleccionada);

    //////////////////////////////////
    // Bucle de repetición del menu //
    //////////////////////////////////
    while(opcionSeleccionada != 's' && opcionSeleccionada != 'S'){
        if(opcionSeleccionada == '0'){
            mostrarMenu();
            scanf(" %c", &opcionSeleccionada);
            funcionesMenu(opcionSeleccionada);
            if(opcionSeleccionada != 's' && opcionSeleccionada != 'S') {
                printf("Digitar 0 -> Mostrar menu\n");
                printf("Digitar s -> Salir\n");
            }
        } else {
            printf("Opcion no valida\n");
            printf("Digitar 0 -> Mostrar menu\n");
            printf("Digitar s -> Salir\n");
        }
        if(opcionSeleccionada != 's' && opcionSeleccionada != 'S')
            scanf(" %c", &opcionSeleccionada);
    }
    printf("Salir Seleccionado\n");
    //////////////////////////////////////
    // Fin Bucle de repeticion del menu //
    //////////////////////////////////////

    return 0; // retorno del control al sistema
}

void mostrarMenu(void) {
    printf("1 -> Numero entero a romano\n");
    printf("2 -> Etapa de vida segun edad\n");
    printf("3 -> Tabla de multiplicar segun numero tabla\n");
    printf("4 -> Sumar consecutivo\n");
    printf("5 -> Factorial de numero\n");
    printf("6 -> Suma elevado a consecutivo\n");
    printf("7 -> Serie fibonacci\n");
    printf("8 -> Suma elementos de arreglo\n");
    printf("9 -> Imprimir arreglo segun indice\n");
    printf("A -> Mayor elemento segun arreglo\n");
    printf("S -> Salir\n");
    return;
}

void funcionesMenu(int opcion){
    switch(opcion){
        case '1': NumerosRomanos(); break;
        case '2': RangoEdades(); break;
        case '3': TablaMultiplicar(); break;
        case '4': SumaRepetitivaCreciente(); break;
        case '5': Factorial(); break;
        case '6': SumaRepetitivaPotenciaCreciente(); break;
        case '7': Fibonacci(); break;
        case '8': SumaElementosArreglo(); break;
        case '9': IndiceElementosArreglo(); break;
        case 'a':
        case 'A': MayorElementoArreglo(); break;
        case 's': // opción salir - no hacer nada
        case 'S': break; // opción salir - no hacer nada
    }
    return;
}
