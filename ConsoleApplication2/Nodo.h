#pragma once
#include "stdafx.h"
#include "Nodo.h"
#include "Lista.h"

using namespace std;

template<class T>
class Nodo {

private:

public:
	

	Nodo<T>* hijo;

	T numero;

	Nodo();

	Nodo(T);

	~Nodo();

	void agrega(T);

	void agrega(Nodo<T>*);

	T valor();

	Nodo<T>* descendiente();
};