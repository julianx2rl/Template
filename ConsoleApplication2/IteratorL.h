#pragma once
#include "stdafx.h"
#include "Iterator.h"
using namespace std;

template<class T>
class IteratorL : public Iterator<T> {

private:

public:

	Nodo<T>* actual;

	Enlazada<T>* busqueda;

	IteratorL(Enlazada<T>*);

	Iterator<T>* operator=(T);

	Iterator<T>* operator++();

	Iterator<T>* operator++(T);

	Iterator<T>* operator--();

	Iterator<T>* operator--(T);

	T operator*();

	bool operator==(Iterator<T>*);

	~IteratorL();
};