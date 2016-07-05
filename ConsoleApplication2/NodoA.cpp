#include "stdafx.h"

#include "NodoA.h"

using namespace std;

/**
*@brief Constructor convencional de la clase NodoA.
*/

template<class T>
NodoA<T>::NodoA() {
	this->valor = NULL;
	this->padre = NULL;
	this->hijoP = NULL;
	this->hijoG = NULL;
}

/**
*@brief Constructor apropiado de la clase NodoA.
*/

template<class T>
NodoA<T>::NodoA(T elemento) {
		this->valor = elemento;
		this->padre = NULL;
		this->hijoP = NULL;
		this->hijoG = NULL;
}

/**
*@brief Destructor convencional de la clase NodoA.
*/

template<class T>
NodoA<T>::~NodoA() {
}