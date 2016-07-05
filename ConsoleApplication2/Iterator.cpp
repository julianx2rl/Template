#include "stdafx.h"
#include "Iterator.h"

template<class T>
Iterator<T>::Iterator(Lista<T>* listo) {
	this->lista = listo;
}

template<class T>
Iterator<T>::~Iterator() {
}

template<class T>
Iterator&<T> Iterator::preincremento() {
	this->operator++();
}

template<class T>
Iterator&<T> Iterator::postincremento(T dummie) {
	this->operator++(dummie);
}

template<class T>
Iterator&<T> Iterator::predisminución() {
	this->operator++();
}

template<class T>
Iterator&<T> Iterator::postdisminución(T dummie) {
	this->operator++(dummie);
}

template<class T>
Iterator&<T> Iterator::cambio(T dummie) {
	this->operator=(dummie);
}

template<class T>
T Iterator::desreferenciacion() {
	this->operator*();
}

template<class T>
bool Iterator<T>::igualdad(Iterator<T>* dummie) {
	this->operator==(dummie);
}

template<class T>
Iterator<T>* Iterator::operator++() {
}

template<class T>
Iterator<T>* Iterator::operator++(T dummie) {
}

template<class T>
Iterator<T>* Iterator::operator--() {
}

template<class T>
Iterator<T>* Iterator::operator--(T dummie) {
}

template<class T>
Iterator<T>* Iterator::operator--(T dummie) {
}

template<class T>
Iterator<T>* Iterator::operator=(T otra) {
}

template<class T>
T Iterator::operator*() {
}

template<class T>
bool Iterator::operator==(Iterator<T>* dummie) {
}

template<class T>
ostream & operator<<(ostream & out, Iterator<T> & otra) {
}