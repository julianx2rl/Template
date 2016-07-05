#include "stdafx.h"

#include "Array.h"

using namespace std;

/**
*@brief Constructor convencional de la clase Array.
*/
template<class T>
Array<T>::Array() : Lista(){
	list = new T[isize];
	this-> numero = isize;
	size = 0;
}

/**
*@brief Destructor convencional de la clase Array.
*/
template<class T>
Array<T>::~Array() {
}

/**
*@brief Imprime el contenido de la Array.
*/
template<class T>
void Array<T>::imprimir() {
	int i = 0;
	while (list[i] != NULL) {
		cout << list[i];
		++i;
	}
}

/**
*@brief Agrega un elemento la Array.
*/
template<class T>
void Array<T>::agrega(T elemento) {

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
*@brief Borra el elemento según su posicion.
*/
template<class T>
void Array<T>::borrar(int pos) {
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