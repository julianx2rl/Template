/**
* @file Array.h
* @version 1.0
* @date 26 / 06 / 2016
* @author Julian Arguedas Torres B50587
* @title Clase Array
* @brief
*/

#pragma once
#include "stdafx.h"
#include "Lista.h"
using namespace std;

template<class T>
class Array : public Lista<T> {

	friend class IteratorA;

private:

	/**
	* @param list: Es el array de tipo T
	* @param numero: Capacidad de la lista
	* @param isize: Capacidad por defecto
	* @param size: Espacios ocupados
	*/

	T* list;

	int numero;

	const int isize = 5;

	int size;

public:

	/**
	* @brief Constructor por defeto del Array
	*/

	Array() : Lista<T>() {
		list = new T[isize];
		this->numero = isize;
		size = 0;
	}

	/**
	* @brief Destructor del Array
	*/

	~Array() {
	}

	/**
	* @brief Imprime todos los valores contenidos en el array
	*/

	void imprimir() {
		int i = 0;
		while (list[i] != NULL) {
			cout << list[i];
			++i;
		}
	}

	/**
	* @brief Agrega un nuevo valor al array
	*/

	void agrega(T elemento) {
		if (size == numero) {
			numero *= 2;
			T* tmp = new T[numero];
			for (int i = 0; i < size;++i) {
				tmp[i] = list[i];
			}
			list = tmp;
		}
		list[size] = elemento;
		++size;
	}

	/**
	* @brief Borra el valor en la posicion indicada
	*/

	void borrar(int pos) {
		if (list[pos] != NULL && pos < numero) {
			list[pos] = NULL;
			--size;
			if (pos != numero) {
				for (int i = pos; i < numero; ++i) {
					int j = list[pos];
					list[pos] = list[pos + 1];
					list[pos + 1] = j;
					if (pos + 2 < numero) {
						if (list[pos + 1] == list[pos + 2]) {
							break;
						}
					}
				}
			}
		}
		else {
		}
	}
};