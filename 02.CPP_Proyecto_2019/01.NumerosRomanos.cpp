#include <stdio.h>
#include <string.h>
#include "01.NumerosRomanos.hpp"

/**
* @brief   Convertir un número entero a romano.
* @class   NumerosRomanos
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void NumerosRomanos(void){

    int entero;
    char romano[20];
    romano[0] = '\0'; // limpiar la cadena de caracteres

    printf("Ingresar un numero entero \n");
    scanf(" %i", &entero);
    CalcularEnteroaRomano(entero, romano);
    printf("%s\n", romano);

    return;
}

void CalcularEnteroaRomano(int entero, char romano[]){
    // Calcular las unidades, decenas y centenas
    int unidades=0, decenas=0, centenas=0, unidades_millar=0;
    if(entero < 4000) {
        unidades = entero % 10; entero /= 10; // 9
        decenas  = entero % 10; entero /= 10; // 99
        centenas = entero % 10; entero /= 10; // 999
        unidades_millar = entero % 10; // tope 3.999
    }

    // Evaluar las unidades de millar
    switch(unidades_millar){
        case 0: strncat(romano, "", 4); break;
        case 1: strncat(romano, "M", 4); break;
        case 2: strncat(romano, "MM", 4); break;
        case 3: strncat(romano, "MMM", 4); break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9: strncat(romano, "", 4); break;
    }

    // Evaluar las centenas
    switch(centenas){
        case 0: strncat(romano, "", 4); break;
        case 1: strncat(romano, "C", 4); break;
        case 2: strncat(romano, "CC", 4); break;
        case 3: strncat(romano, "CCC", 4); break;
        case 4: strncat(romano, "CD", 4); break;
        case 5: strncat(romano, "D", 4); break;
        case 6: strncat(romano, "DC", 4); break;
        case 7: strncat(romano, "DCC", 4); break;
        case 8: strncat(romano, "DCCC", 4); break;
        case 9: strncat(romano, "CM", 4); break;
    }

    // Evaluar las decenas
    switch(decenas){
        case 0: strncat(romano, "", 4); break;
        case 1: strncat(romano, "X", 4); break;
        case 2: strncat(romano, "XX", 4); break;
        case 3: strncat(romano, "XXX", 4); break;
        case 4: strncat(romano, "XL", 4); break;
        case 5: strncat(romano, "L", 4); break;
        case 6: strncat(romano, "LX", 4); break;
        case 7: strncat(romano, "LXX", 4); break;
        case 8: strncat(romano, "LXXX", 4); break;
        case 9: strncat(romano, "XC", 4); break;
    }

    // Evaluar las unidades
    switch(unidades){
        case 0: strncat(romano, "", 4); break;
        case 1: strncat(romano, "I", 4); break;
        case 2: strncat(romano, "II", 4); break;
        case 3: strncat(romano, "III", 4); break;
        case 4: strncat(romano, "IV", 4); break;
        case 5: strncat(romano, "V", 4); break;
        case 6: strncat(romano, "VI", 4); break;
        case 7: strncat(romano, "VII", 4); break;
        case 8: strncat(romano, "VIII", 4); break;
        case 9: strncat(romano, "IX", 4); break;
    }

    return;
}
