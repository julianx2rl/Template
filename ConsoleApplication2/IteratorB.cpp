#include "stdafx.h"
#include "IteratorB.h"

template<class T>
IteratorB<T>::IteratorB(Arbol<T>* listo) : Iterator(listo) {
	NodoA* toah = (listo)->primero;
	this->espacio = (listo)->buscarMenor(toah);
	this->posicion = 0;
}

template<class T>
IteratorB<T>::~IteratorB() {
}

template<class T>
Iterator<T>* IteratorB::operator=(T otra) {
}

template<class T>
Iterator<T>* IteratorB::operator++() {
	if (espacio->hijoG != NULL) {
		NodoA* noel = espacio->hijoG;
		espacio = this->listado->buscarMenor(noel);
	}
	else {
		NodoA* noel = espacio->padre;
		int val = noel->valor;
		if (val > espacio->valor) {
			espacio = noel;
		}
		else {
			NodoA* fancy = new NodoA(espacio->padre, espacio->valor);
			int meta = espacio->valor;
			while ((espacio->valor < meta) && (fancy->padre != NULL)) {
				NodoA* noah = fancy->padre;
				fancy = noah;
			}
			if (fancy->padre != NULL) {
				espacio = fancy;
			}
		}
	}
	return this;
}

template<class T>
Iterator<T>* IteratorB::operator--() {
	if (espacio->hijoP != NULL) {
		NodoA* noel = espacio->hijoP;
		espacio = this->listado->buscarMayor(noel);
	}
	else {
		NodoA* noel = espacio->padre;
		int val = noel->valor;
		if (val < espacio->valor) {
			espacio = noel;
		}
		else {
			NodoA* fancy = new NodoA(espacio->padre, espacio->valor);
			int meta = espacio->valor;
			while ((espacio->valor > meta) && (fancy->padre != NULL)) {
				NodoA* noah = fancy->padre;
				fancy = noah;
			}
			if (fancy->padre != NULL) {
				espacio = fancy;
			}
		}
	}
	return this;
}

template<class T>
Iterator<T>* IteratorB::operator--(T dummie) {
	if (espacio->hijoP != NULL) {
		NodoA* noel = espacio->hijoP;
		espacio = this->listado->buscarMayor(noel);
	}
	else {
		NodoA* noel = espacio->padre;
		int val = noel->valor;
		if (val < espacio->valor) {
			espacio = noel;
		}
		else {
			NodoA* fancy = new NodoA(espacio->padre, espacio->valor);
			int meta = espacio->valor;
			while ((espacio->valor > meta) && (fancy->padre != NULL)) {
				NodoA* noah = fancy->padre;
				fancy = noah;
			}
			if (fancy->padre != NULL) {
				espacio = fancy;
			}
		}
	}
	return this;
}

template<class T>
Iterator<T>* IteratorB::operator++(T dummie) {
	if (espacio->hijoG != NULL) {
		NodoA* noel = espacio->hijoG;
		espacio = this->listado->buscarMenor(noel);
	}
	else {
		NodoA* noel = espacio->padre;
		int val = noel->valor;
		if (val > espacio->valor) {
			espacio = noel;
		}
		else {
			NodoA* fancy = new NodoA(espacio->padre, espacio->valor);
			int meta = espacio->valor;
			while ((espacio->valor < meta) && (fancy->padre != NULL)) {
				NodoA* noah = fancy->padre;
				fancy = noah;
			}
			if (fancy->padre != NULL) {
				espacio = fancy;
			}
		}
	}
	return this;
}

template<class T>
int IteratorB<T>::operator*() {
	int num = espacio->valor;
	return num;
}

template<class T>
bool IteratorB<T>::operator==(Iterator<T>* dummie) {
	bool equal = false;
	if (this == dummie) {
		equal = true;
	}
	else {
		equal = false;
	}
	return equal;
}

template<class T>
ostream & operator<<(ostream & out, IteratorB<T> & otra) {
}