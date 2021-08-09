#include <stdio.h>

#define TAM1 5 // constante global
#define TAM2 3 // constante global

void leerVector(int a[], int num); // prototipo de función
void imprimirVector(const int a[], int n); // prototipo de función
void copiarVectores(const int a[], const int b[], int c[], int t1, int t2); // prototipo de función

/**
* @brief   Ejemplo de copiar vectores.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void){
	int v1[TAM1], v2[TAM2], v3[TAM1+TAM2]; // variables para almacenar vectores

	printf("Introduzca los elementos del Vector1\n"); // imprimir salida de datos
	leerVector(v1, TAM1); // proceso función almacenar datos en el vector
	printf("Introduzca los elementos del Vector2\n"); // imprimir salida de datos
	leerVector(v2, TAM2); // proceso función almacenar datos en el vector

	copiarVectores(v1,v2,v3,TAM1,TAM2); // proceso función copiar vectores

	printf("Los vectores introducidos son\n"); // imprimir salida de datos
	imprimirVector(v1, TAM1); // proceso función imprimir datos del vector
	imprimirVector(v2, TAM2); // proceso función imprimir datos del vector
	printf("El vector obtenido es\n"); // imprimir salida de datos
	imprimirVector(v3, TAM1+TAM2); // proceso función imprimir datos del vector

	return 0; // retorno del programa al sistema
}

void leerVector(int a[], int n){ // proceso función almacenar datos en el vector
	int i; // variable auxiliar
	for (i=0; i<n; i++) // sentencia de repetición
		scanf("%d", &a[i]); // entrada de datos
	return; // retorno del resultado
}

void imprimirVector(const int a[], int n){ // proceso función imprimir datos del vector
	int i; // variable auxiliar
	for (i=0; i<n; i++) // sentencia de repetición
		printf("%d\n", a[i]); // imprimir salida de datos
	return; // retorno del resultado
}

void copiarVectores(const int a[], const int b[], int c[], int t1, int t2){ // proceso función copiar vectores
	int i; // variable auxiliar
	for (i=0; i<t1+t2; i++){ // sentencia de repetición
		if (i<t1) // copiar el vector a en c
		c[i]=a[i]; // asignar contenido al vector
		else // copiar el vector b en c
		c[i]=b[i-t1]; // asignar contenido al vector
	}
	return; // retorno del resultado
}
