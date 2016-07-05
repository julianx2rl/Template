#include "stdafx.h"

#include "Nodo.h"

using namespace std;

/**
*@brief Constructor convencional de la clase Nodo.
*/

template<class T>
Nodo<T>::Nodo() {
	numero = NULL;
}

/**
*@brief Constructor apropiado de la clase Nodo.
*/

template<class T>
Nodo<T>::Nodo(T numeral) {
	numero = numeral;
}

/**
*@brief Destructor convencional de la clase Nodo.
*/

template<class T>
Nodo<T>::~Nodo() {
}

/**
*@brief Agrega un Nodo al nodo.
*/

template<class T>
void Nodo<T>::agrega(T numero) {
	hijo = new Nodo(numero);
}

/**
*@brief Agrega un Nodo al nodo.
*/

template<class T>
void Nodo<T>::agrega(Nodo<T>* numero) {
	hijo = numero;
}

/**
*@brief Obtiene numero del nodo.
*/

template<class T>
T Nodo<T>::valor() {
	return numero;
}

/**
*@brief Obtiene hijo del nodo.
*/

template<class T>
Nodo<T>* Nodo<T>::descendiente() {
	return hijo;
}