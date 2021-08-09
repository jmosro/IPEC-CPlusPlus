#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include <iostream> // cout
using namespace std;
#include <string.h>

/**
* @brief   Estructura de dato tipo lista enlazada doble.
* @brief   Guía de Trabajo Autónomo - GTA.
* @class   main
* @author  Jesús Alberto Moscoso Agüero
* @author  J. Mosro - jmosro.14@gmail.com
* @date    2020
* @version 1
*/

template <class T> class ListaDoble;

template <class T>
class Nodo {
    protected:
    private: T *dato;
    public: Nodo *sig; Nodo *ant;
    Nodo(T dato, Nodo<T> *siguiente=NULL, Nodo<T> *anterior=NULL) {
        this->dato = new T(dato);
        this->sig = siguiente;
        this->ant = anterior;
    }
    ~Nodo() {
        cout << "Eliminar: " << *this->dato << endl; // llamar al operator<< de la clase DATO
        delete this->dato;
        this->sig = NULL;
        this->ant = NULL;
    }
    friend class ListaDoble<T>; // clase amiga que puede usar las variables privadas
};

template <class T>
class ListaDoble {
    protected:
    private: Nodo<T> *primerNodo;
             Nodo<T> *ultimoNodo;
             Nodo<T> *actual;
    public:
    ListaDoble() { primerNodo = ultimoNodo = actual = NULL; }
    ~ListaDoble() { moverActualPrimero(); while(!esVacia()) eliminarActual(); };
    bool esVacia() { return primerNodo == NULL; };

    void moverActualPrimero(void);
    void ingresarFinal(T& dato);
    void eliminarActual(void);
    bool buscar(T& dato);
    void imprimirTodo(void);
};

template <class T>
void ListaDoble<T>::imprimirTodo(void) {
    moverActualPrimero();
    while(actual != NULL) {
        cout << *actual->dato << endl; // llamar al operator<< de la clase DATO
        actual = actual->sig;
    }
}

template <class T>
bool ListaDoble<T>::buscar(T& dato) {
    moverActualPrimero();
    while(actual != NULL) {
        if(dato == *actual->dato) { // llamar al operator== de la clase DATO
            cout << "Valor Encontrado: " << *actual->dato << endl;
            return true;
        } else
            actual = actual->sig;            
    }
    cout << "Valor No Encontrado: " << dato << endl;
    return false;
}

template <class T>
void ListaDoble<T>::ingresarFinal(T& dato) {
    Nodo<T> *aux = new Nodo<T>(dato); // llamar al constructor de copia de la clase DATO
    if(esVacia())
        primerNodo = ultimoNodo = actual = aux;
    else {
        ultimoNodo->sig = aux;
        aux->ant = ultimoNodo;
        ultimoNodo = aux;
        actual = ultimoNodo;
    }
}

template <class T>
void ListaDoble<T>::moverActualPrimero(void) {
    if(primerNodo) actual = primerNodo;
}

template <class T>
void ListaDoble<T>::eliminarActual(void) {
    if(esVacia() || actual == NULL)
        return;
    else if(primerNodo == ultimoNodo) {
        delete primerNodo;
        primerNodo = ultimoNodo = actual = NULL;
    } else if(primerNodo == actual) {
        Nodo<T> *aux = primerNodo;
        primerNodo = primerNodo->sig;
        primerNodo->ant = NULL;
        delete aux;
        aux = NULL;
    } else if(ultimoNodo == actual) {
        Nodo<T> *aux = ultimoNodo;
        ultimoNodo = ultimoNodo->ant;
        ultimoNodo->sig = NULL;
        delete aux;
        aux = NULL;
    } else {
        actual->ant->sig = actual->sig;
        actual->sig->ant = actual->ant;
        delete actual;
    }
    moverActualPrimero();
}

#endif // LISTADOBLE_H
