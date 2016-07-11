/**
* @file IteratorB.h
* @version 1.0
* @date 26 / 06 / 2016
* @author Julian Arguedas Torres B50587
* @title Clase IteratorB
* @brief
*/

#pragma once
#include "stdafx.h"
#include "Iterator.h"
using namespace std;

template<class T>
class IteratorB : public Iterator<T> {

private:

	template<class T>
	friend ostream& operator<<(ostream&, IteratorB<T>&);

public:

	/**
	* @param espacio: Nodo actual del Iterador
	* @param listado: la lista Array del iterador
	*/
	NodoA<T>* espacio;
	Arbol<T>* listado;

	/**
	* @brief Constructor defecto del Iterador
	*/
	IteratorB(Arbol<T>* listo) : Iterator(listo) {
		NodoA* toah = (listo)->primero;
		this->espacio = (listo)->buscarMenor(toah);
		this->posicion = 0;
	}

	/**
	* @brief Destructor defecto del Iterador
	*/
	~IteratorB() {
	}

	/**
	* @brief Iguala el valor actual
	*/
	Iterator<T>* operator=(T otra) {
		(this->espacio->valor) = otra;
	}

	/**
	* @brief Avanza un expacio
	*/
	Iterator<T>* operator++() {
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

	/**
	* @brief Retrocede un expacio
	*/
	Iterator<T>* operator--() {
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

	/**
	* @brief Retrocede un expacio
	*/
	Iterator<T>* operator--(T dummie) {
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

	/**
	* @brief Avanza un expacio
	*/
	Iterator<T>* operator++(T dummie) {
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

	/**
	* @brief obtiene el valor del expacio
	*/
	int operator*() {
		int num = espacio->valor;
		return num;
	}

	/**
	* @brief Determina si el valor en el Iterador y otro son iguales
	*/
	bool operator==(Iterator<T>* dummie) {
		bool equal = false;
		if (this == dummie) {
			equal = true;
		}
		else {
			equal = false;
		}
		return equal;
	}
};

template<class T>
ostream & operator<<(ostream & out, IteratorB<T> & otra) {
}