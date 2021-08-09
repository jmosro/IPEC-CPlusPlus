/* ********************************************************************
   *                 Gestion de jugadores para Parkour                *
   * Se denomina parkour a una actividad fisica no competitiva basada *
   *  en la capacidad motriz de las personas. Consiste en avanzar en  *
   *  linea recta superando los obstaculos del terreno sin el uso de  *
   *       complementos, soportes ni accesorios de ningun tipo.       *
   ********************************************************************
*/

#include <list> // listas
#include <stdio.h> // printf()
using namespace std;

struct jugador {
    char nombre[257];
    float altura;
    int edad;
};

char selected_option;    // opcion eleccionada del menu
bool loop = true;        // loop del programa
list<jugador> jugadores; // lista de jugadores

// Funcion - Imprimir menu y retornar opcion seleccionada
void Menu(void) {
    printf("%s", "1 -> Ingresar jugador\n");
    printf("%s", "2 -> Listar todos los jugadores\n");
    printf("%s", "3 -> Listar solo nombres\n");
    printf("%s", "4 -> Listar solo alturas\n");
    printf("%s", "5 -> Listar solo edades\n");
    printf("%s", "6 -> Salir\n");
    printf("%s", "Respuesta -> ");
    fflush(stdin);
    scanf(" %s", &selected_option);
    fflush(stdin);
    printf("\n");
}

// Loop principal
void Loop(void) {
    while(loop) {
        Menu(); // imprimir menu
        if(selected_option == '1') { // 1 -> Ingresar jugador
            struct jugador nuevo_jugador;
            printf("%s", "Ingresar nombre del jugador -> ");
            // getchar(); // puede dar conflicto entre windows y linux, sino comentar
            scanf("%256[^\n]s", nuevo_jugador.nombre);
            fflush(stdin);
            printf("%s", "Ingresar altura del jugador -> ");
            scanf("%f", &nuevo_jugador.altura);
            fflush(stdin);
            printf("%s", "Ingresar edad del jugador   -> ");
            scanf(" %d", &nuevo_jugador.edad);
            fflush(stdin);
            printf("Agregado...\n\n");
            jugadores.push_back(nuevo_jugador);

        } else if(selected_option == '2') { // 2 -> Listar todos los datos
            list<jugador>::iterator pos = jugadores.begin();
            int total = 0;
            printf("%s\n", "----- Listado de jugadores Parkour -----");
            while(pos != jugadores.end()) {
                printf("-------------- Jugador %.2d --------------\n", ++total);
                printf("%10s %26.26s\n", "Nombre:", pos->nombre);
                printf("%10s %26.2f\n", "Altura:", pos->altura);
                printf("%10s %26d\n", "Edad:",pos->edad);
                pos++;
            }
            printf("%s\n\n", "---------- Fin Listado Parkour ---------");

        } else if(selected_option == '3') { // 3 -> Listar todos los nombres
            list<jugador>::iterator pos = jugadores.begin();
            int total = 0;
            printf("%s\n", "------ Listado de nombres Parkour ------");
            while(pos != jugadores.end()) {
                printf("%.2d. %-8.8s %-27.27s\n", ++total, "Nombre:", pos->nombre);
                pos++;
            }
            printf("%s\n\n", "---------- Fin Listado Parkour ---------");

        } else if(selected_option == '4') { // 4 -> Listar todas las alturas
            list<jugador>::iterator pos = jugadores.begin();
            int total = 0;
            printf("%s\n", "------ Listado de alturas Parkour ------");
            while(pos != jugadores.end()) {
                printf("%.2d. %-8.8s %7.2f | %-17.17s\n", ++total, "Altura:", pos->altura, pos->nombre);
                pos++;
            }
            printf("%s\n\n", "---------- Fin Listado Parkour ---------");

        } else if(selected_option == '5') { // 5 -> Listar todas las edades
            list<jugador>::iterator pos = jugadores.begin();
            int total = 0;
            printf("%s\n", "------ Listado de edades Parkour -------");
            while(pos != jugadores.end()) {
                printf("%.2d. %-8.8s %7d | %-17.17s\n", ++total, "Edad:", pos->edad, pos->nombre);
                pos++;
            }
            printf("%s\n\n", "---------- Fin Listado Parkour ---------");

        } else if(selected_option == '6') { // 6 -> Salir
            printf("%s\n", "Salir...");
            loop = false;
        } else {
            printf("%s\n", "Opcion invalida.");
        }
    }
}

/**
* @brief   Gestión de jugadores para Parkour.
* @brief   Guía de Trabajo Autónomo - GTA.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2020
* @version 1
*/
int main(int argc, char const *argv[]) {
    printf("%s", "*************************************\n");
    printf("%s", "* Gestion de jugadores para Parkour *\n");
    printf("%s", "*************************************\n");
    printf("\n");
    Loop(); // iniciar el loop principal del programa
    return 0;
}
