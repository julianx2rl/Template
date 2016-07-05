#pragma once
#include "stdafx.h"
#include "NodoA.h"
#include "Lista.h"
#include"IteratorB.h"
using namespace std;

template<class T>
class Arbol : public Lista<T> {

private:

public:

	NodoA<T>* primero;
	
	Arbol();

	virtual ~Arbol();

	void imprimir(NodoA<T>*);

	void agrego(T);

	void agrega(T, NodoA<T>*);

	IteradorB<T> begin();

	IteradorB<T> end();

	NodoA<T>* buscarMenor(NodoA<T>*);

	NodoA<T>* buscarMayor(NodoA<T>*);

	NodoA<T>* buscar(NodoA<T>*, T);

	void borrar(T);
};