/**
* @file Nodo.h
* @version 1.0
* @date 26 / 06 / 2016
* @author Julian Arguedas Torres B50587
* @title Clase Nodo
* @brief
*/

#pragma once
#include "stdafx.h"
#include "Nodo.h"
#include "Lista.h"

using namespace std;

template<class T>
class Nodo {

private:

	template<class T>
	friend ostream& operator<<(ostream&, Nodo<T>&);

public:
	
	/**
	* @param Hijo del Nodo
	*/
	Nodo<T>* hijo;

	/**
	* @brief Valor que contiene el nodo
	*/
	T numero;

	/**
	* @brief Constructor por defecto del Nodo
	*/
	Nodo() {
		numero = NULL;
	}

	/**
	* @brief Constructor con valor del Nodo
	*/
	Nodo(T numeral) {
		numero = numeral;
	}

	/**
	* @brief Destructor por defecto del Nodo
	*/
	~Nodo() {
	}

	/**
	* @brief Le da un hijo con valor al nodo
	*/
	void agrega(T numero) {
		this->hijo = new Nodo(numero);
	}

	/**
	* @brief Le da un hijo directamente al nodo
	*/
	void agrega(Nodo<T>* numero) {
		this->hijo = numero;
	}

	/**
	* @brief Retorna el valor del nodo
	*/
	T valor() {
		T j = this->numero;
		return j;
	}

	/**
	* @brief Retorna el hijo del nodo
	*/
	Nodo<T>* descendiente() {
		T j = this->hijo;
		return j;
	}
};

template<class T>
ostream & operator<<(ostream & out, Nodo<T> & a) {
	//a.imprimir(a.raiz, out, 0);
	//return out;
}