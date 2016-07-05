#pragma once
#include "stdafx.h"
#include "Iterator.h"
using namespace std;

template<class T>
class IteratorB : public Iterator<T> {

private:

public:

	NodoA<T>* espacio;

	Arbol<T>* listado;

	IteratorB(Arbol<T>*);

	Iterator<T>* operator=(T);

	Iterator<T>* operator++();

	Iterator<T>* operator++(T);

	Iterator<T>* operator--();

	Iterator<T>* operator--(T);

	int operator*();

	bool operator==(Iterator<T>*);

	~IteratorB();
};