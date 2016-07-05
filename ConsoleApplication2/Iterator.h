#pragma once
#include "stdafx.h"
#include "Array.h"
#include "Enlazada.h"
#include "Arbol.h"
#include "Lista.h"
using namespace std;

template<class T>
class Iterator {

	template<class T>
	friend ostream & operator<<(ostream &, Iterator<T> &);

protected:

	virtual Iterator& preincremento() = 0;
	virtual Iterator& postincremento(T) = 0;
	virtual Iterator& predisminución() = 0;
	virtual Iterator& postdisminución(T) = 0;
	virtual bool igualdad(Iterator<T>*) = 0;
	virtual int desreferenciacion() = 0;
	virtual Iterator& cambio(int) = 0;

public:

	Lista<T>* lista;

	int posicion;

	Iterator(Lista<T>*);

	~Iterator();

	Iterator<T>* operator=(T);
	Iterator<T>* operator++();
	Iterator<T>* operator++(T);
	Iterator<T>* operator--();
	Iterator<T>* operator--(T);
	int operator*();
	bool operator==(Iterator*);
};

template<class T>
ostream & operator<<(ostream &, Iterator<T> &);