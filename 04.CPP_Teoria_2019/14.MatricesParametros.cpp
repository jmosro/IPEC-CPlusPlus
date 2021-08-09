#include <stdio.h>

#define FIL 2
#define COL 3

int maximo(int a[][COL]); // prototipo de función
void imprimirMatriz(int a[][COL]); // prototipo de función

/**
* @brief   Ejemplo de matriz como parámetro.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void){
    int matriz[FIL][COL]; // variable para almacenar enteros en un array bidimensional
    int i, j; // variable para el control de la sentencia de repetición

    // Se llena la matriz con datos
    for (i=0; i<FIL; i++) // sentencia de repetición
        for (j=0; j<COL; j++) // sentencia de repetición
            matriz[i][j]=i+j; // asignar contenido al array bidimensional

    imprimirMatriz(matriz); // proceso función imprimir contenido de array bidimensional
    printf("El maximo es %d\n", maximo(matriz));  // imprimir salida de datos

    return 0; // retorno del programa al sistema
}

int maximo(int a[][COL]){ // proceso función obtener el número mayor del array bidimensional
    int i, j, m; // variable para el control de la sentencia de repetición
    m = a[0][0]; // asignar contenido a la variable
    for(i=0; i<FIL; i++) // sentencia de repetición
        for(j=0; j<COL; j++) // sentencia de repetición
            if(m<a[i][j]) // si la variable m es menor al contenido del array bidimensional
                m=a[i][j]; // asignar contenido a la variable
    return m; // retorno del resultado
}

void imprimirMatriz(int a[][COL]){ // proceso función imprimir contenido de array bidimensional
    int i, j; // variable para el control de la sentencia de repetición
    for(i=0; i<FIL; i++){ // sentencia de repetición
        for(j=0; j<COL; j++) // sentencia de repetición
            printf("%i\t",a[i][j]); // imprimir salida de datos
        printf("\n"); // imprimir salida de datos
    }
    return; // retorno del resultado
}
