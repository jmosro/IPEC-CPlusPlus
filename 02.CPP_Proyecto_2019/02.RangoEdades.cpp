#include <stdio.h>
#include "02.RangoEdades.hpp"

#define ninnez_str       "Ninnez"
#define ninnez_min       0
#define ninnez_max       12
#define adolescencia_str "Adolescencia"
#define adolescencia_min 13
#define adolescencia_max 17
#define juventud_str     "Juventud"
#define juventud_min     18
#define juventud_max     25
#define adultez_str      "Adultez"
#define adultez_min      26
#define adultez_max      64
#define vejez_str        "Vejez"
#define vejez_min        65
#define vejez_max        -1

/**
* @brief   Etapa de la vida según la edad.
* @class   RangoEdades
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-noviembre
* @version 1
*/
void RangoEdades(void) {
    int edad;

    printf("Ingresar su edad: ");
    scanf(" %i", &edad);

    CalcularRangoEdad(edad);
    
    return;
}

void CalcularRangoEdad(int edad) {
         if( (edad >= ninnez_min)       && (edad <= ninnez_max)       ) printf("Rango: %i a %i -> %s\n", ninnez_min,       ninnez_max,       ninnez_str);
    else if( (edad >= adolescencia_min) && (edad <= adolescencia_max) ) printf("Rango: %i a %i -> %s\n", adolescencia_min, adolescencia_max, adolescencia_str);
    else if( (edad >= juventud_min)     && (edad <= juventud_max)     ) printf("Rango: %i a %i -> %s\n", juventud_min,     juventud_max,     juventud_str);
    else if( (edad >= adultez_min)      && (edad <= adultez_max)      ) printf("Rango: %i a %i -> %s\n", adultez_min,      adultez_max,      adultez_str);
    else if( (edad >= vejez_min)                                      ) printf("Rango: %i a %i -> %s\n", vejez_min,        vejez_max,        vejez_str);
    return;
}
