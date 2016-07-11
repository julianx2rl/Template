/**
* @file Arbol.h
* @version 1.0
* @date 26 / 06 / 2016
* @author Julian Arguedas Torres B50587
* @title Clase Arbol
* @brief
*/

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

	/**
	* @param primero: Primer nodo en el arbol
	*/

	NodoA<T>* primero;
	
	/**
	* @brief Constructor por defecto del Arbol
	*/

	Arbol() : Lista<T>() {
	}

	/**
	* @brief Destructor por defecto del Arbol
	*/

	~Arbol() {
		delete this->primero;
	}

	/**
	* @brief Imprime todos los valores de los nodos
	*/

	void imprimir(NodoA<T>* n) {
		cout << n->valor << endl;
		if (n->hijoP != NULL) {
			imprimir(n->hijoP);
		}
		else if (n->hijoG != NULL) {
			imprimir(n->hijoG);
		}
	}

	/**
	* @brief Agrega un nuevo nodo al Arbol
	*/

	void agrego(T elemento) {
		if (primero == NULL) {
			primero = new NodoA<T>(NULL, elemento);
		}
		else {
			this->agrega(elemento, primero);
		}
	}

	/**
	* @brief Es la segunda parte del metodo agragar, es para no tener que meter a la raíz como parametro del metodo cada vez que se quiere agregar algo!
	*/

	void agrega(T elemento, NodoA<T>* n) {
		if (n->valor > elemento) {
			if (n->hijoP != NULL) {
				agrega(elemento, n->hijoP);
			}
			else {
				n->hijoP = new NodoA<T>(n, elemento);
			}
		}
		else if (n->valor < elemento) {
			if (n->hijoG != NULL) {
				agrega(elemento, n->hijoG);
			}
			else {
				n->hijoG = new NodoA(n, elemento);
			}
		}
		else {
			// No se agregarán dos valores iguales.
		}
	}

	/**
	* @brief Retorna el iterador al inicio del arbol
	*/

	IteradorB<T> begin() {
		return IteradorB<T>(raiz);
	}

	/**
	* @brief Retorna el iterador con nodo nulo
	*/

	IteradorB<T> end() {
		return IteradorB<T>(NULL);
	}

	/**
	* @brief Busca el nodo con menor valor al alcance
	*/

	NodoA<T>* buscarMenor(NodoA<T>* actual) {
		NodoA<T>* resultado;
		if (actual->hijoP != NULL) {
			resultado = this->buscarMenor(actual->hijoP);
		}
		else {
			resultado = actual;
		}
		return resultado;
	}

	/**
	* @brief Busca el nodo especificado
	*/

	NodoA<T>* buscar(NodoA<T>* actual, T buscado) {
		NodoA<T>* resultado = new NodoA();
		T valore = actual->valor;
		if (valore == buscado) {
			resultado = actual;
		}
		else if ((valore > buscado) && (actual->hijoP != NULL)) {
			resultado = this->buscar(actual->hijoP, buscado);
		}
		else if ((valore < buscado) && (actual->hijoG != NULL)) {
			resultado = this->buscar(actual->hijoG, buscado);
		}
		else {
		}
		return resultado;
	}

	/**
	* @brief Busca el nodo con mayor valor al alcance
	*/

	NodoA<T>* buscarMayor(NodoA<T>* actual) {
		NodoA<T>* resultado;
		if (actual->hijoG != NULL) {
			resultado = this->buscarMayor(actual->hijoG);
		}
		else {
			resultado = actual;
		}
		return resultado;
	}
};