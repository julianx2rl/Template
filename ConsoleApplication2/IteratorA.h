/**
* @file IteratorA.h
* @version 1.0
* @date 26 / 06 / 2016
* @author Julian Arguedas Torres B50587
* @title Clase IteratorA
* @brief
*/

#pragma once
#include "stdafx.h"
#include "Iterator.h"
using namespace std;

template<class T>
class IteratorA : public Iterator<T> {

private:

	template<class T>
	friend ostream& operator<<(ostream&, IteratorA<T>&);

public:

	/**
	* @param Valor actual del Iterador
	* @param listado la lista Array del iterador
	*/
	T actual;

	Array<T>* listado;

	/**
	* @brief Constructor defecto de la lista
	*/
	IteratorA(Array<T>* listo) : Iterator<T>(listo) {
		this->listado = listo;
		this->actual = (this->listado)->list[0];
		this->posicion = 0;
	}

	/**
	* @brief Destructor defecto del Iterador
	*/
	~IteratorA() {
	}

	/**
	* @brief Iguala el valor actual
	*/
	Iterator<T>* operator=(T otra) {
		(listado)->list[posicion] = otra;
		this->actual = (listado)->list[posicion];

	}

	/**
	* @brief Avanza un expacio
	*/
	Iterator<T>* operator++() {
		++(this->posicion);
		this->actual = (listado)->list[posicion];
	}

	/**
	* @brief Retrocede un expacio
	*/
	Iterator<T>* operator--() {
		if (this->posicion > 0) {
			--(this->posicion);
		}
		this->actual = (listado)->list[posicion];
	}

	/**
	* @brief Retrocede un expacio
	*/
	Iterato<T>* operator--(T dummie) {
		if (this->posicion > 0) {
			--(this->posicion);
		}
		this->actual = (listado)->list[posicion];
	}

	/**
	* @brief Avanza un expacio
	*/
	Iterator<T>* operator++(T dummie) {
		++(this->posicion);
		this->actual = (listado)->list[posicion];
	}

	/**
	* @brief obtiene el valor del expacio
	*/
	T operator*() {
		int num = (listado)->list[posicion];
		return num;
	}

	/**
	* @brief Determina si el valor en el Iterador y otro son iguales
	*/
	bool operator==(Iterator<T>* dummie) {
		bool equal = false;
		if (this == dummie) {
			equal = true;
		}
		else {
			equal = false;
		}
		return equal;
	}
};

template<class T>
ostream & operator<<(ostream & out, IteratorA<T> & otra) {
}