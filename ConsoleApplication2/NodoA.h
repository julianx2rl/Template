#pragma once
#include "stdafx.h"
#include "Arbol.h"
using namespace std;

template<class T>
class NodoA {

	template <class T>
	friend class Arbol;

	template <class T>
	friend class Iterador;

private:

	T valor;
	NodoA<T> *padre;
	NodoA<T> *hijoP;
	NodoA<T> *hijoG;

public:

	NodoA();

	NodoA(T elemento);

	~NodoA();
};