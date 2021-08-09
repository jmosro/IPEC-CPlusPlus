#include <stdio.h>
#include <math.h>

struct tPunto{ // estructura de datos
    float x, y, z; // variables para almacenar coordenada x, y, z
};

void leePunto(struct tPunto *p); // prototipo de función
float distancia(struct tPunto p); // prototipo de función

/**
* @brief   Ejemplo de structuras como parámetro.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void){
    struct tPunto pto; // variable para almacenar una estructura

    leePunto(&pto); // proceso función pedir datos
    printf("distancia del punto al origen: %f\n", distancia(pto)); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}

float distancia(struct tPunto p){ // proceso función calcular distancia
    return sqrt(p.x * p.x + p.y * p.y + p.z * p.z); // retorno del resultado // proceso función calcular raíz cuadrada
}
void leePunto(struct tPunto *p){ // proceso función pedir datos
    printf ("X: "); scanf("%f", &(*p).x); // imprimir salida de datos // entrada de datos
    printf ("Y: "); scanf("%f", &(*p).y); // imprimir salida de datos // entrada de datos
    printf ("Z: "); scanf("%f", &(*p).z); // imprimir salida de datos // entrada de datos
    return; // retorno del resultado
}
