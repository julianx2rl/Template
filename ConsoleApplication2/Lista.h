#pragma once
#include "stdafx.h"
#include "Nodo.h"
using namespace std;

template<class T>
class Lista {

	template<class T>
	friend ostream & operator<<(ostream &, Lista &);

private:

public:
	
	Lista();

	virtual ~Lista();

	virtual void imprimir();

	virtual void agrega(T);

	virtual void borrar(int);

	// virtual void iterator();

	// virtual void finale();
};

template<class T>
ostream & operator<<(ostream & out, Lista<T> & a) {
	//a.imprimir(a.raiz, out, 0);
	//return out;
}