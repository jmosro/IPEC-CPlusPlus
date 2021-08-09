#include <stdio.h>

struct Catalogo{
    char nombrePelicula[50];
    int precio;
    bool seleccionado;
};
void Descuento(int* subtotal, int* total, int* descuento, int cantidadPeliculas, struct Catalogo miCarrito[], int lenght);

/**
* @brief   Carrito de compras de películas.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2019-septiembre
* @version 1
*/
int main(void) {

    int subtotal=0, total=0, descuento=0, cantidadPeliculas=0;
    struct Catalogo miCarrito[5] = { // base de datos
        {"Maze Runner", 1200, false},
        {"Elysium", 1150, false},
        {"Chappie", 1100, false},
        {"Ladrones", 1050, false},
        {"Dejavu", 1000, false}
    };

    printf("Eligir la pelicula\n");
    for(int i=0; i<sizeof(miCarrito)/sizeof(miCarrito[0]); i++){
        char esSeleccionado;
        printf("Comprar: %s : %i : y/n : ", miCarrito[i].nombrePelicula, miCarrito[i].precio);
        scanf(" %c", &esSeleccionado);
        if(esSeleccionado == 'y') miCarrito[i].seleccionado = true;
        else miCarrito[i].seleccionado = false;
    }

    printf("--------------------\n");
    printf("Peliculas a comprar:\n");
    for(int i=0; i<sizeof(miCarrito)/sizeof(miCarrito[0]); i++){
        if(miCarrito[i].seleccionado == true){
            printf("%i: %s: %i\n", i+1, miCarrito[i].nombrePelicula, miCarrito[i].precio);
            subtotal += miCarrito[i].precio;
            cantidadPeliculas++;
        }
    }
    printf("--------------------\n");
    printf("Subtotal: %i\n", subtotal);
    printf("Cantidad: %i\n", cantidadPeliculas);
    printf("--------------------\n");

    Descuento(&subtotal, &total, &descuento, cantidadPeliculas, miCarrito, sizeof(miCarrito)/sizeof(miCarrito[0]));
    total = subtotal - descuento;
    printf("Descuento: %i\n", descuento);
    printf("Total: %i\n", total);

    return 0; // retorno del programa al sistema
}

void Descuento(int* subtotal, int* total, int* descuento, int cantidadPeliculas, struct Catalogo miCarrito[], int lenght){
    int precio1=0, precio2=0, precio3=0;
    if(cantidadPeliculas == 3) {
        for(int i=0; i<lenght; i++){
            if(miCarrito[i].seleccionado == true){
                if(precio1 == 0) precio1 = miCarrito[i].precio;
                else if(precio2 == 0) precio2 = miCarrito[i].precio;
                else if(precio3 == 0) precio3 = miCarrito[i].precio;
            }
        }
        // Calcular el precio mayor
        if(precio1 >= precio2 && precio1 >= precio3)      *descuento = precio1;
        else if(precio2 >= precio1 && precio2 >= precio3) *descuento = precio2;
        else if(precio3 >= precio1 && precio3 >= precio2) *descuento = precio3;
    }
    return; // retorno del resultado
}
