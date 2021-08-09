#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NPROD 4 // constante global

struct tipoProducto { // estructura de datos
    char nombre[15]; // variable para almacenar el nombre del producto
    char codigo[10]; // variable para almacenar el código del producto
    float precio; // variable para almacenar el precio del producto
    int esFalso; // 1 si es falso, 0 si verdadero // variable auxiliar
};

void comprobarProducto(struct tipoProducto *p); // prototipo de función

/**
* @brief   Ejemplo de estructura como parámetro.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void){
    // Array de cuatro productos
    struct tipoProducto prod[NPROD]; // variable para almacenar productos
    int i, numFalsos=0; // variables auxiliares

    // Inicializamos los datos
    strcpy(prod[0].codigo, "UEX1002"); // proceso función copiar cadena de caracteres
    strcpy(prod[1].codigo, "UEX2002"); // proceso función copiar cadena de caracteres
    strcpy(prod[2].codigo, "UET3002"); // proceso función copiar cadena de caracteres
    strcpy(prod[3].codigo, "UEZ1002"); // proceso función copiar cadena de caracteres

    // Comprobar cuantos productos son falsos.
    for(i=0; i<NPROD; i++){ // sentencia de repetición
        comprobarProducto(&prod[i]); // proceso función comprobar si es producto válido
        numFalsos += prod[i].esFalso; // contar los productos falsos
    }
    printf ("Hay %i productos falsos\n", numFalsos); // imprimir salida de datos
    
    return 0; // retorno del programa al sistema
}

void comprobarProducto (struct tipoProducto *p) {  // proceso función comprobar si es producto válido
    // Función que recibe como parámetro una estructura de tipo producto
    // y modifica el valor del elemento esFalso en función del código del producto
    // son verdaderos los productos cuyos códigos empiecen por UEX
    (*p).esFalso = 1; // asignar contenido a la variable
    //verificamos si el código es correcto
    if((((*p).codigo[0]=='U') && ((*p).codigo[1]=='E')) && ((*p).codigo[2]=='X')){ // comparar si las letras del producto es válido
        (*p).esFalso = 0; // asignar contenido a la variable
    }
    return; // retorno del resultado
}
