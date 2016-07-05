#include "stdafx.h"
#include "IteratorL.h"

template<class T>
IteratorL<T>::IteratorL(Enlazada<T>* listo) : Iterator(listo) {
	this->busqueda = listo;
	this->actual = (busqueda)->primero;
}

template<class T>
IteratorL<T>::~IteratorL() {
}

template<class T>
Iterator<T>* IteratorL::operator=(T otra) {
	this->actual->numero = otra;
}

template<class T>
Iterator<T>* IteratorL::operator++() {
	Nodo* tmp = actual;
	++posicion;
	this->actual = (tmp)->hijo;
}

template<class T>
Iterator<T>* IteratorL::operator++(T dummie) {
	Nodo* tmp = actual;
	++posicion;
	this->actual = (tmp)->hijo;
}

template<class T>
Iterator<T>* IteratorL::operator--() {
	this->actual = busqueda->primero;
	for (int i = 0; i < posicion; ++i) {
		Nodo* tmp = actual;
		this->actual = (tmp)->hijo;
	}
	--posicion;
}

template<class T>
Iterator<T>* IteratorL::operator--(T dummie) {
	this->actual = busqueda->primero;
	for (int i = 0; i < posicion; ++i) {
		Nodo* tmp = actual;
		this->actual = (tmp)->hijo;
	}
	--posicion;
}

template<class T>
bool IteratorL<T>::operator==(Iterator<T>* dummie) {
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
T IteratorL<T>::operator*() {
	T num = this->actual->numero;
	return num;

}

template<class T>
ostream & operator<<(ostream & out, IteratorL<T> & otra) {
}