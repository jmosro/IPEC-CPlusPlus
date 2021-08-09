#include <stdio.h>
#include <stdlib.h>

/**
* @brief   Ejemplo de uso de punteros2.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {
    int u = 3; // variable para almacenar un número
    int v; // variable para almacenar un número
    int *pu; // puntero a variable u
    int *pv; // puntero a variable v

    pu = &u; // asignar la dirección de memoría de u al puntero pu
    v = *pu; // asignar el contenido del puntero pu a la variable v
    pv = &v; // asignar la dirección de memoría de v al puntero pv

    printf("u=%i &u=%x pu=%x *pu=%i\n", u, &u, pu, *pu); // imprimir salida de datos
    printf("v=%i &v=%x pv=%x *pv=%i\n", v, &v, pv, *pv); // imprimir salida de datos

    return 0; // retorno del programa al sistema
}
