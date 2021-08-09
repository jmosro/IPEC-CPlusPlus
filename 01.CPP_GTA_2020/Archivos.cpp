#include <iostream> // biblioteca para la entrada-salida estandar
#include <fstream> // biblioteca para el manejo de ficheros
using namespace std;

// Prototipos de funciones
void Banner(void);
void Loop(void);

void MenuPrincipal(void);
void SubMenuCaracteres(void);
void SubMenuCadenas(void);
void SubMenuVariables(void);
void SubMenuRegistros(void);

void CaracteresGuardar(void);
void CaracteresLeer(void);
void CadenasGuardar(void);
void CadenasLeer(void);
void VariablesGuardar(void);
void VariablesLeer(void);
void RegistrosGuardar(void);
void RegistrosLeer(void);

// Variables globales
char selected_option;    // almacenar opcion seleccionada del menu opciones
bool loop = true;        // loop del programa

/**
* @brief   Guardar en archivo caracteres, cadenas, variables y registros.
* @brief   Guía de Trabajo Autónomo - GTA.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2020
* @version 1
*/
int main(int argc, char const *argv[]) {
    Loop(); // iniciar el loop principal del programa
    return 0;
}

// Funcion - Banner de archivos
void Banner(void) {
    printf("%s", "********************************\n");
    printf("%s", "*           Archivos           *\n");
    printf("%s", "********************************\n");
    printf("\n");
}

// Funcion - Imprimir menu y retornar opcion seleccionada
void MenuPrincipal(void) {
    printf("%s", "1 -> Caracteres - Archivo texto\n");
    printf("%s", "2 -> Cadenas - Archivo texto\n");
    printf("%s", "3 -> Variables - Archivo texto\n");
    printf("%s", "4 -> Registros - Archivo binario\n");
    printf("%s", "5 -> Salir\n");
    printf("%s", "Respuesta -> ");
    fflush(stdin);
    // getchar(); // comentar si da conflicto entre windows y linux
    scanf("%s", &selected_option);
    fflush(stdin);
}

// Funcion - Submenu caracteres
void SubMenuCaracteres(void) {
    printf("%s", "1 -> Caracteres - Guardar en archivo en texto\n");
    printf("%s", "2 -> Caracteres - Leer desde archivo en texto\n");
    printf("%s", "3 -> Salir\n");
    printf("%s", "Respuesta -> ");
    fflush(stdin);
    // getchar(); // comentar si da conflicto entre windows y linux
    scanf("%s", &selected_option);
    fflush(stdin);
}

// Funcion - Submenu cadenas
void SubMenuCadenas(void) {
    printf("%s", "1 -> Cadenas - Guardar en archivo en texto\n");
    printf("%s", "2 -> Cadenas - Leer desde archivo en texto\n");
    printf("%s", "3 -> Salir\n");
    printf("%s", "Respuesta -> ");
    fflush(stdin);
    // getchar(); // comentar si da conflicto entre windows y linux
    scanf("%s", &selected_option);
    fflush(stdin);
}

// Funcion - Submenu variables
void SubMenuVariables(void) {
    printf("%s", "1 -> Variables - Guardar en archivo en texto\n");
    printf("%s", "2 -> Variables - Leer desde archivo en texto\n");
    printf("%s", "3 -> Salir\n");
    printf("%s", "Respuesta -> ");
    fflush(stdin);
    // getchar(); // comentar si da conflicto entre windows y linux
    scanf("%s", &selected_option);
    fflush(stdin);
}

// Funcion - Submenu registros
void SubMenuRegistros(void) {
    printf("%s", "1 -> Registros - Guardar en archivo en binario\n");
    printf("%s", "2 -> Registros - Leer desde archivo en binario\n");
    printf("%s", "3 -> Salir\n");
    printf("%s", "Respuesta -> ");
    fflush(stdin);
    // getchar(); // comentar si da conflicto entre windows y linux
    scanf("%s", &selected_option);
    fflush(stdin);
}

// Loop principal
void Loop(void) {
    while(loop) {
        system("clear");
        Banner();
        MenuPrincipal(); // imprimir menu principal y guardar opcion seleccionada
        system("clear");
        Banner();
        switch (selected_option) {
            case '1': // 1 -> Caracteres - Archivo de texto
                    do {
                        SubMenuCaracteres();
                        switch (selected_option) {
                            case '1': CaracteresGuardar(); break;
                            case '2': CaracteresLeer();    break;
                            case '3': break;
                            default: printf("%s\n\n", "Opcion invalida."); break;
                        }
                    } while (selected_option != '3');
                    break;             
            case '2': // 2 -> Cadenas - Archivo de texto
                    do {
                        SubMenuCadenas();
                        switch (selected_option) {
                            case '1': CadenasGuardar(); break;
                            case '2': CadenasLeer();    break;
                            case '3': break;
                            default: printf("%s\n\n", "Opcion invalida."); break;
                        }
                    } while (selected_option != '3');
                    break;
            case '3': // 3 -> Variables - Archivo de texto
                    do {
                        SubMenuVariables();
                        switch (selected_option) {
                            case '1': VariablesGuardar(); break;
                            case '2': VariablesLeer();    break;
                            case '3': break;
                            default: printf("%s\n\n", "Opcion invalida."); break;
                        }
                    } while (selected_option != '3');
                    break;
            case '4': // 4 -> Registros - Archivo binario
                    do {
                        SubMenuRegistros();
                        switch (selected_option) {
                            case '1': RegistrosGuardar(); break;
                            case '2': RegistrosLeer();    break;
                            case '3': break;
                            default: printf("%s\n\n", "Opcion invalida."); break;
                        }
                    } while (selected_option != '3');
                    break;
            case '5': printf("%s\n", "Salir..."); loop = false; break;
            default: printf("%s\n\n", "Opcion invalida."); break;
        }
    }
}

// Funcion - Caracteres guardar
void CaracteresGuardar(void) {
    ofstream ficherosalida; // manipular fichero de salida
    ficherosalida.open("Caracteres.txt", ios::out); // abrir archivo
    if(!ficherosalida)
        printf("%s\n\n", "No se puede crear o abrir el fichero.");
    else {
        printf("%s\n", "Archivo Caracteres.txt");
        char c, d, e;
        printf("%s", "Caracter 1: "); scanf(" %c", &c); fflush(stdin);
        printf("%s", "Caracter 2: "); scanf(" %c", &d); fflush(stdin);
        printf("%s", "Caracter 3: "); scanf(" %c", &e); fflush(stdin);
        ficherosalida.put(c);
        ficherosalida.put(d);
        ficherosalida.put(e);
        printf("%s\n\n", "Se guardo con exito en el archivo.");
        ficherosalida.close();
    }
}
// Funcion - Caracteres leer
void CaracteresLeer(void) {
    ifstream ficheroentrada; // manipular fichero de entrada
    ficheroentrada.open("Caracteres.txt", ios::in); // abrir archivo
    if(!ficheroentrada)
        printf("%s\n\n", "No se puede crear o abrir el fichero.");
    else {
        printf("%s\n", "Archivo Caracteres.txt");
        char c;
        ficheroentrada.get(c);
        while(!ficheroentrada.eof()) {
            printf("%s %c\n", "char: ", c);
            ficheroentrada.get(c);
        }
        printf("%s\n\n", "Se leyo con exito en el archivo.");
        ficheroentrada.close();
    }
}


// Funcion - Cadenas guardar
void CadenasGuardar(void) {
    ofstream ficherosalida; // manipular fichero de salida
    ficherosalida.open("Cadenas.txt", ios::out); // abrir archivo
    if(!ficherosalida)
        printf("%s\n\n", "No se puede crear o abrir el fichero.");
    else {
        printf("%s\n", "Archivo Cadenas.txt");
        char c[256] = "Texto por defecto";
        printf("%s", "Cadena: "); scanf(" %256[^\n]s", c); fflush(stdin);
        ficherosalida.write(c, sizeof(c));
        printf("%s\n\n", "Se guardo con exito en el archivo.");
        ficherosalida.close();
    }
}
// Funcion - Cadenas leer
void CadenasLeer(void) {
    ifstream ficheroentrada; // manipular fichero de entrada
    ficheroentrada.open("Cadenas.txt", ios::in); // abrir archivo
    if(!ficheroentrada)
        printf("%s\n\n", "No se puede crear o abrir el fichero.");
    else {
        printf("%s\n", "Archivo Cadenas.txt");
        char c[256];
        ficheroentrada.read(c, sizeof(c));
        printf("%s %s\n", "Cadena: ", c);
        printf("%s\n\n", "Se leyo con exito en el archivo.");
        ficheroentrada.close();
    }
}


// Funcion - Variables guardar
void VariablesGuardar(void) {
    ofstream ficherosalida; // manipular fichero de salida
    ficherosalida.open("Variables.txt", ios::out); // abrir archivo
    if(!ficherosalida)
        printf("%s\n\n", "No se puede crear o abrir el fichero.");
    else {
        printf("%s\n", "Archivo Variables.txt");
        int entero = 223;
        float flotante = 444.44;
        double doble = 999.99911;
        printf("%s", "Entero: "); scanf(" %d", &entero); fflush(stdin);
        printf("%s", "flotante: "); scanf(" %f", &flotante); fflush(stdin);
        printf("%s", "doble: "); scanf(" %lf", &doble); fflush(stdin);
        ficherosalida.write((char*)(&entero),sizeof(entero));
        ficherosalida.write((char*)(&flotante),sizeof(flotante));
        ficherosalida.write((char*)(&doble),sizeof(doble));
        printf("%s\n\n", "Se guardo con exito en el archivo.");
        ficherosalida.close();
    }
}
// Funcion - Variables leer
void VariablesLeer(void) {
    ifstream ficheroentrada; // manipular fichero de entrada
    ficheroentrada.open("Variables.txt", ios::in); // abrir archivo
    if(!ficheroentrada)
        printf("%s\n\n", "No se puede crear o abrir el fichero.");
    else {
        printf("%s\n", "Archivo Variables.txt");
        int entero = 0;
        float flotante = 0;
        double doble = 0;
        ficheroentrada.read((char*)(&entero),sizeof(entero));
        ficheroentrada.read((char*)(&flotante),sizeof(flotante));
        ficheroentrada.read((char*)(&doble),sizeof(doble));
        printf("%s %d\n", "int: ", entero);
        printf("%s %f\n", "float: ", flotante);
        printf("%s %lf\n", "double: ", doble);
        printf("%s\n\n", "Se leyo con exito en el archivo.");
        ficheroentrada.close();
    }
}


// Funcion - Registros guardar
void RegistrosGuardar(void) {
    ofstream ficherosalida; // manipular fichero de salida
    ficherosalida.open("Registros.txt", ios::binary | ios::out); // abrir archivo
    if(!ficherosalida)
        printf("%s\n\n", "No se puede crear o abrir el fichero.");
    else {
        printf("%s\n", "Archivo Registros.txt");
        struct registro {
            int entero;
            float flotante;
            double doble;
        };
        struct registro miregistro;
        miregistro.entero = 223;
        miregistro.flotante = 444.44;
        miregistro.doble = 999.99911;
        printf("%s", "Registro.entero: "); scanf(" %d", &miregistro.entero); fflush(stdin);
        printf("%s", "Registro.flotante: "); scanf(" %f", &miregistro.flotante); fflush(stdin);
        printf("%s", "Registro.doble: "); scanf(" %lf", &miregistro.doble); fflush(stdin);
        ficherosalida.write((char*)(&miregistro),sizeof(miregistro));
        printf("%s\n\n", "Se guardo con exito en el archivo.");
        ficherosalida.close();
    }
}
// Funcion - Registros leer
void RegistrosLeer(void) {
    ifstream ficheroentrada; // manipular fichero de entrada
    ficheroentrada.open("Registros.txt", ios::binary | ios::in); // abrir archivo
    if(!ficheroentrada)
        printf("%s\n\n", "No se puede crear o abrir el fichero.");
    else {
        printf("%s\n", "Archivo Registros.txt");
        struct registro {
            int entero;
            float flotante;
            double doble;
        };
        struct registro miregistro;
        ficheroentrada.read((char*)(&miregistro),sizeof(miregistro));
        printf("%s %d\n", "int: ", miregistro.entero);
        printf("%s %f\n", "float: ", miregistro.flotante);
        printf("%s %f\n", "double: ", miregistro.doble);
        printf("%s\n\n", "Se leyo con exito en el archivo.");
        ficheroentrada.close();
    }
}
