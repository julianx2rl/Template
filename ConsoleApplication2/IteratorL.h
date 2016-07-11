/**
* @file IteratorL.h
* @version 1.0
* @date 26 / 06 / 2016
* @author Julian Arguedas Torres B50587
* @title Clase IteratorL
* @brief
*/

#pragma once
#include "stdafx.h"
#include "Iterator.h"
using namespace std;

template<class T>
class IteratorL : public Iterator<T> {

private:

	template<class T>
	friend ostream& operator<<(ostream&, IteratorL<T>&);

public:

	/**
	* @param actual: Nodo actual del Iterador
	* @param busqueda: la lista Array del iterador
	*/
	Nodo<T>* actual;
	Enlazada<T>* busqueda;

	/**
	* @brief Constructor defecto del Iterador
	*/
	IteratorL(Enlazada<T>* listo) : Iterator(listo) {
		this->busqueda = listo;
		this->actual = (busqueda)->primero;
	}

	/**
	* @brief Destructor defecto del Iterador
	*/
	~IteratorL() {
	}

	/**
	* @brief Iguala el valor actual
	*/
	Iterator<T>* operator=(T otra) {
		this->actual->numero = otra;
	}

	/**
	* @brief Avanza un expacio
	*/
	Iterator<T>* operator++() {
		Nodo* tmp = actual;
		++posicion;
		this->actual = (tmp)->hijo;
	}

	/**
	* @brief Avanza un expacio
	*/
	Iterator<T>* operator++(T dummie) {
		Nodo* tmp = actual;
		++posicion;
		this->actual = (tmp)->hijo;
	}

	/**
	* @brief Retrocede un expacio
	*/
	Iterator<T>* operator--() {
		this->actual = busqueda->primero;
		for (int i = 0; i < posicion; ++i) {
			Nodo* tmp = actual;
			this->actual = (tmp)->hijo;
		}
		--posicion;
	}

	/**
	* @brief Retrocede un expacio
	*/
	Iterator<T>* operator--(T dummie) {
		this->actual = busqueda->primero;
		for (int i = 0; i < posicion; ++i) {
			Nodo* tmp = actual;
			this->actual = (tmp)->hijo;
		}
		--posicion;
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

	/**
	* @brief obtiene el valor del expacio
	*/
	T operator*() {
		T num = (this->actual)->numero;
		return num;

	}
};

template<class T>
ostream & operator<<(ostream & out, IteratorL<T> & otra) {
}