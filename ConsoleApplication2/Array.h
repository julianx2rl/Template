#pragma once
#include "stdafx.h"
#include "Lista.h"
using namespace std;

template<class T>
class Array : public Lista<T> {

	friend class IteratorA;

private:

	T* list;

	int numero;

	const int isize = 5;

	int size;

public:

	Array();

	~Array();

	void imprimir();

	void agrega(T);

	void borrar(int);
};