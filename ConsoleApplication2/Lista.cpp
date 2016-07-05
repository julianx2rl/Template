#include "stdafx.h"

#include "Lista.h"

using namespace std;

/**
*@brief Constructor convencional de la clase Lista.
*/

template<class T>
Lista<T>::Lista() {
}

/**
*@brief Destructor convencional de la clase Lista.
*/

template<class T>
Lista<T>::~Lista() {
}

/**
*@brief Imprime el contenido de la lista.
*/

template<class T>
void Lista<T>::imprimir() {
}

/**
*@brief Agrega un elemento la lista.
*/

template<class T>
void Lista<T>::agrega(T elemento) {

}

/**
*@brief Borra el elemento según su posicion.
*/

template<class T>
void Lista<T>::borrar(int posicion) {
}

/**
*@brief Operador para imprimir sus valores  con comodidad.
*/

template<class T>
ostream & operator<<(ostream & out, Lista<T> & c) {
	return out << "Numero" << "]";
}