#include "stdafx.h"
#include "Arbol.h"

using namespace std;

/**
*@brief Constructor convencional de la clase Arbol.
*/
template<class T>
Arbol<T>::Arbol() : Lista() {
}

/**
*@brief Destructor convencional de la clase Arbol.
*/

template<class T>
Arbol<T>::~Arbol() {
}

/**
*@brief Imprime el contenido del Arbol
*/

template<class T>
void Arbol<T>::imprimir(NodoA<T>* n) {
	cout << n->valor << endl;
	if (n->hijoP != NULL) {
		imprimir(n->hijoP);
	}
	else if (n->hijoG != NULL) {
		imprimir(n->hijoG);
	}
}

/**
*@brief Agrega un elemento la Arbol.
*/

template<class T>
void Arbol<T>::agrego(T elemento) {
	if (primero == NULL) {
		primero = new NodoA<T>(NULL, elemento);
	}
	else {
		this->agrega(elemento, primero);
	}
}

template<class T>
void Arbol<T>::agrega(T elemento, NodoA<T>* n) {
	if(n->valor > elemento){
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
*@brief
*/

template<class T>
IteradorB<T> Arbol<T>::begin() {
	return IteradorB<T>(raiz);
}

/**
*@brief
*/

template<class T>
IteradorB<T> Arbol<T>::end() {
	return IteradorB<T>(NULL);
}

/**
*@brief
*/

template<class T>
NodoA<T>* Arbol<T>::buscarMenor(NodoA<T>* actual) {
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
*@brief
*/

template<class T>
NodoA<T>* Arbol<T>::buscar(NodoA<T>* actual, T buscado) {
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
*@brief
*/

template<class T>
NodoA<T>* Arbol<T>::buscarMayor(NodoA<T>* actual) {
	NodoA<T>* resultado;
	if (actual->hijoG != NULL) {
		resultado = this->buscarMayor(actual->hijoG);
	}
	else {
		resultado = actual;
	}
	return resultado;
}

template<class T>
void Arbol<T>::borrar(T pos) {
}