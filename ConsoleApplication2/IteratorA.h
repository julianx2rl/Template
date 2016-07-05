#pragma once
#include "stdafx.h"
#include "Iterator.h"
using namespace std;

template<class T>
class IteratorA : public Iterator<T> {

private:

public:

	T actual;

	Array<T>* listado;

	IteratorA(Array<T>*);

	Iterator* operator=(T);

	Iterator* operator++();
	
	Iterator* operator++(T);
	
	Iterator* operator--();
	
	Iterator* operator--(T);
	
	T operator*();
	
	bool operator==(Iterator<T>*);

	~IteratorA();
};