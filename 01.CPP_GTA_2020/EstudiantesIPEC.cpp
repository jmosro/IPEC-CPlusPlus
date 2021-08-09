/* ********************************************************************
   *                 Gestion de codigo por estudiante                 *
   *                 en IPEC Santo Domingo de Heredia                 *
   *     A cada estudiante se le asocia a su nombre completo, un      *
   *  identificador unico de tipo numerico o alfanumerico como forma  *
   *   de etiqueta asociativa en otras partes de la base de datos.    *
   ********************************************************************
*/

#include "ListaDoble.hpp"
#include <iostream>
using namespace std;

class CuentaEstudiante {
    private:
        char *codigo; // almacenar el codigo del estudiante
        char *nombreEstudiante; // almacenar el nombre del estudiante
    public:
    CuentaEstudiante(char *c_codigo, char *c_nombreEstudiante) {
        if(c_codigo) {
            codigo = new char[strlen(c_codigo)+1];
            strcpy(codigo, c_codigo);
        } else codigo = NULL;
        if(c_nombreEstudiante) {
            nombreEstudiante = new char[strlen(c_nombreEstudiante)+1];
            strcpy(nombreEstudiante, c_nombreEstudiante);
        } else nombreEstudiante = NULL;
    }
    ~CuentaEstudiante() {
        if(codigo) delete[] codigo;
        if(nombreEstudiante) delete[] nombreEstudiante;
     }
    CuentaEstudiante(const CuentaEstudiante &clon) : codigo(NULL), nombreEstudiante(NULL) { *this = clon; } // llama a operator=
    CuentaEstudiante &operator=(const CuentaEstudiante &clon) { // constructor de copia
        if(this != &clon) {
            // clon codigo
            if(codigo) delete[] codigo;
            if(clon.codigo) {
                codigo = new char[strlen(clon.codigo)+1];
                strcpy(codigo, clon.codigo);
            } else codigo = NULL;
            // clon nombreEstudiante
            if(nombreEstudiante) delete[] nombreEstudiante;
            if(clon.nombreEstudiante) {
                nombreEstudiante = new char[strlen(clon.nombreEstudiante)+1];
                strcpy(nombreEstudiante, clon.nombreEstudiante);
            } else nombreEstudiante = NULL;
        }
        return *this;
    }
    bool operator==(const CuentaEstudiante &c) const { return !strcmp(codigo, c.codigo); }
    const char* getCodigo() const { return codigo; }
    const char* getNombreEstudiante() const { return nombreEstudiante; }
};
ostream& operator<<(ostream &os, const CuentaEstudiante& registro) {
    printf("| %-10.10s | %-22.22s |", registro.getCodigo(), registro.getNombreEstudiante());
    os << "";
    return os;
}

char selected_option;         // almacenar opción seleccionada del menú opciones
bool loop = true;             // loop del programa
ListaDoble<CuentaEstudiante> listaRegEstudiantes; // lista de registros de estudiantes

// Funcion - Imprimir menu y retornar opcion seleccionada
void Menu(void) {
    printf("%s", "1 -> Ingresar registro estudiante\n");
    printf("%s", "2 -> Buscar codigo estudiante\n");
    printf("%s", "3 -> Eliminar registro estudiante\n");
    printf("%s", "4 -> Listar todos registros estudiantes\n");
    printf("%s", "5 -> Salir\n");
    printf("%s", "Respuesta -> ");
    fflush(stdin);
    // getchar(); // comentar si da conflicto entre windows y linux
    scanf("%s", &selected_option);
    fflush(stdin);
    //printf("\n");
}

// Funcion - Validar si es correcto el codigo de registro del estudiante
bool EsValidoCodigoEstudiante(char registroEstudiante[]) {
    // implementar la validacion de n digitos
    return true;
}

// Loop principal
void Loop(void) {
    while(loop) {
        Menu(); // imprimir menu
        if(selected_option == '1') { // 1 -> Ingresar registro estudiante
            char nombreUsuario[257];
            char codigoUsuario[10];
            printf("%s", "Ingresar nombre del estudiante a crear -> ");
            // getchar(); // comentar si da conflicto entre windows y linux
            scanf("%256[^\n]s", nombreUsuario);
            fflush(stdin);
            do {
                printf("%s", "Ingresar el codigo [10 digitos] del estudiante a crear -> ");
                // getchar(); // comentar si da conflicto entre windows y linux
                scanf("%10[^\n]s", codigoUsuario);
                fflush(stdin);
            } while(!EsValidoCodigoEstudiante(codigoUsuario));
            CuentaEstudiante nuevaCuenta(codigoUsuario, nombreUsuario);
            listaRegEstudiantes.ingresarFinal(nuevaCuenta);
            printf("%s\n\n", "Agregado...");               

        } else if(selected_option == '2') { // 2 -> Buscar codigo estudiante
            char codigoUsuario[10];
            printf("%s", "Ingresar 10 digitos del codigo de estudiante a buscar -> ");
            // getchar(); // comentar si da conflicto entre windows y linux
            scanf("%10[^\n]s", codigoUsuario);
            fflush(stdin);
            CuentaEstudiante cuentaABuscar(codigoUsuario, NULL);
            listaRegEstudiantes.buscar(cuentaABuscar);
            printf("%s", "\n");

        } else if(selected_option == '3') { // 3 -> Eliminar registro estudiante
            // buscar la cuenta a eliminar
            char codigoUsuario[10];
            printf("%s", "Ingresar 10 digitos del codigo de estudiante a eliminar -> ");
            // getchar(); // comentar si da conflicto entre windows y linux
            scanf("%10[^\n]s", codigoUsuario);
            fflush(stdin);
            CuentaEstudiante cuentaABuscar(codigoUsuario, NULL);
            bool encontrado;
            encontrado = listaRegEstudiantes.buscar(cuentaABuscar);
            // eliminar el valor encontrado
            if(encontrado) {
                listaRegEstudiantes.eliminarActual();
                printf("%s", "Eliminado...\n\n");
            } else printf("%s\n\n", "Valor No Eliminado...");

        } else if(selected_option == '4') { // 4 -> Listar todos registros estudiantes
            printf("%s\n", "----- Listado de estudiantes IPEC -----");
            listaRegEstudiantes.imprimirTodo();
            printf("%s\n", "-----   Fin de estudiantes IPEC   -----");
            printf("%s", "\n");

        } else if(selected_option == '5') { // 5 -> Salir
            printf("%s\n", "Salir...");
            loop = false;
        } else {
            printf("%s\n\n", "Opcion invalida.");
        }
    }
}

/**
* @brief   Gestión de código por estudiante en IPEC Santo Domingo de Heredia.
* @brief   Guía de Trabajo Autónomo - GTA.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2020
* @version 1
*/
int main(int argc, char const *argv[]) {
    printf("%s", "**********************************************************\n");
    printf("%s", "* Gestion de codigo por estudiante de IPEC Santo Domingo *\n");
    printf("%s", "**********************************************************\n");
    printf("\n");
    Loop(); // iniciar el loop principal del programa
    return 0;
}
