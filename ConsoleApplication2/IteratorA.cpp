#include "stdafx.h"
#include "IteratorA.h"

template<class T>
IteratorA<T>::IteratorA(Array<T>* listo) : Iterator<T>(listo) {
	this->listado = listo;
	this->actual = (listado)->list[0];
	this->posicion = 0;
}

template<class T>
IteratorA<T>::~IteratorA() {
}

template<class T>
Iterator<T>* IteratorA::operator=(T otra) {
	(listado)->list[posicion] = otra;
	this->actual = (listado)->list[posicion];

}

template<class T>
Iterator<T>* IteratorA::operator++() {
	++posicion;
	this->actual = (listado)->list[posicion];
}

template<class T>
Iterator<T>* IteratorA::operator--() {
}

template<class T>
Iterato<T>* IteratorA::operator--(T dummie) {
}

template<class T>
Iterator<T>* IteratorA::operator++(T dummie) {
	++posicion;
	this->actual = (listado)->list[posicion];
}

template<class T>
T IteratorA<T>::operator*() {
	int num = (listado)->list[posicion];
	return num;
}

template<class T>
bool IteratorA<T>::operator==(Iterator<T>* dummie) {
	bool equal = false;
	if (this == dummie) {
		equal = true;
	}
	else {
		equal = false;
	}
	return equal;
}

template<class T>
ostream & operator<<(ostream & out, IteratorA<T> & otra) {
}