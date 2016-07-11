/**
* @file Lista.h
* @version 1.0
* @date 26 / 06 / 2016
* @author Julian Arguedas Torres B50587
* @title Clase Lista
* @brief
*/

#pragma once
#include "stdafx.h"
#include "Nodo.h"
using namespace std;

template<class T>
class Lista {

	template<class T>
	friend ostream & operator<<(ostream &, Lista<T> &);

private:

public:
	
	/**
	* @brief Constructor por defecto de la lista
	*/
	Lista() {
	}

	/**
	* @brief Destructor por defecto de la lista
	*/
	virtual ~Lista() {
	}

	/**
	* @brief Imprime todos los valores de los nodos
	*/
	virtual void imprimir() {
	}

	/**
	* @brief Agrega un nuevo nodo a la lista
	*/
	virtual void agrega(T) {
	}

	/**
	* @brief Borra un Nodo en la posicion dada
	*/
	virtual void borrar(int) {
	}
};

template<class T>
ostream & operator<<(ostream & out, Lista<T> & a) {
	//a.imprimir(a.raiz, out, 0);
	//return out;
}