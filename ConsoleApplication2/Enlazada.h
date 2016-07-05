#pragma once
#include "stdafx.h"
#include "Nodo.h"
#include "Lista.h"
using namespace std;

template<class T>
class Enlazada : public Lista<T>{

	friend class IteratorL;

private:

public:

	Nodo<T>* primero;

	Enlazada();

	~Enlazada();

	void imprimir();

	void agrega(T);

	void borrar(int);
};