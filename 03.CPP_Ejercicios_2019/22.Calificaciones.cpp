#include <stdio.h>

#define TOTAL_NOTAS 4
void Promedio(int registroCalif[]);
void Maximo(int registroCalif[]);
void Minimo(int registroCalif[]);

/**
* @brief   Promedio, máximo y mínimo de calificaciones.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void){
    int registro[TOTAL_NOTAS];
    char opcionElegida;

    for(int i=0; i<TOTAL_NOTAS; i++){
        printf("Ingresar calificacion %i: ", i+1); // imprimir salida de datos
        scanf(" %i", &registro[i]); // entrada de datos
    }

    do{
        printf("Eligir una opcion:\n"); // imprimir salida de datos
        printf("1. Promedio\n");
        printf("2. Maximo\n");
        printf("3. Minimo\n");
        printf("0. Salir\n");
        scanf(" %c", &opcionElegida); // entrada de datos

        switch(opcionElegida){
            case '1': Promedio(registro); break;
            case '2': Maximo(registro); break;
            case '3': Minimo(registro); break;
            case '0': break;
        }
    } while(opcionElegida != '0');

    return 0; // retorno del programa al sistema
}

void Promedio(int registroCalif[]){ // calcular el promedio de todas las calificaciones
    int promedio=0;
    for(int i=0; i<TOTAL_NOTAS; i++){
        promedio += registroCalif[i];
    }
    promedio /= TOTAL_NOTAS;
    printf("Promedio: %i\n", promedio); // imprimir salida de datos
    return; // retorno del resultado
}

void Maximo(int registroCalif[]){ // calcular el máximo de todas las calificaciones
    int maximo = registroCalif[0];
    for(int i=0; i<TOTAL_NOTAS; i++)
        if(maximo <= registroCalif[i]) maximo = registroCalif[i];
    printf("Maximo: %i\n", maximo); // imprimir salida de datos
    return; // retorno del resultado
}

void Minimo(int registroCalif[]){ // calcular el mínimo de todas las calificaciones
    int minimo = registroCalif[0];
    for(int i=0; i<TOTAL_NOTAS; i++)
        if(minimo >= registroCalif[i]) minimo = registroCalif[i];
    printf("Minimo: %i\n", minimo); // imprimir salida de datos
    return; // retorno del resultado
}
