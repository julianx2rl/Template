/**
* @file NodoA.h
* @version 1.0
* @date 26 / 06 / 2016
* @author Julian Arguedas Torres B50587
* @title Clase NodoA
* @brief
*/

#pragma once
#include "stdafx.h"
#include "Arbol.h"
using namespace std;

template<class T>
class NodoA {

	template<class T>
	friend ostream& operator<<(ostream&, NodoA<T>&);

	template <class T>
	friend class Arbol;

	template <class T>
	friend class Iterador;

private:

	T valor;
	NodoA<T> *padre;
	NodoA<T> *hijoP;
	NodoA<T> *hijoG;

public:

	/**
	* @brief Constructor del Nodo Array
	*/
	NodoA() {
		this->valor = NULL;
		this->padre = NULL;
		this->hijoP = NULL;
		this->hijoG = NULL;
	}

	/**
	* @brief Constructor con valor del Nodo Array
	*/
	NodoA(T elemento) {
		this->valor = elemento;
		this->padre = NULL;
		this->hijoP = NULL;
		this->hijoG = NULL;
	}

	/**
	* @brief Destructor del Nodo Array
	*/
	~NodoA() {
	}
};

template<class T>
ostream & operator<<(ostream & out, NodoA<T> & a) {
	//a.imprimir(a.raiz, out, 0);
	//return out;
}