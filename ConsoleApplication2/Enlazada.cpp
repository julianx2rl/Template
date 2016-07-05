#include "stdafx.h"

#include "Enlazada.h"

using namespace std;

/**
*@brief Constructor convencional de la clase Enlazada.
*/
template<class T>
Enlazada<T>::Enlazada() : Lista() {
}

/**
*@brief Destructor convencional de la clase Enlazada.
*/
template<class T>
Enlazada<T>::~Enlazada() {
}

/**
*@brief Imprime el contenido de la Enlazada.
*/
template<class T>
void Enlazada<T>::imprimir() {
	Nodo* tmp = primero;
	//bool terminado = false;
	while (tmp != NULL) {
		cout << tmp->valor() << endl;
		tmp = tmp->descendiente();		
	}
}

/**
*@brief Agrega un elemento la Enlazada.
*/
template<class T>
void Enlazada<T>::agrega(T elemento) {
	if (primero == NULL) {
		primero = new Nodo(elemento);
	}
	else {
		Nodo<T>* tmp = new Nodo(elemento);
		tmp = primero;
		bool terminado = false;
		while (terminado == false) {
			Nodo* foe = (tmp)->descendiente();
			if (foe != NULL) {
				tmp = (tmp)->descendiente();
			}
			else {
				tmp->agrega(elemento);
				terminado = true;
			}
		}
	}
}

/**
*@brief Borra el elemento según su posicion.
*/
template<class T>
void Enlazada<T>::borrar(int pos) {
	Nodo<T>* tmp = primero;
	--pos;
	for (pos; pos >= 0; --pos) {
		if (pos == 0) {
			Nodo* tem = tmp->descendiente();
			Nodo* tom = tem->descendiente();
			tem = NULL;
			tmp ->agrega(tom);
		}
		else {
			tmp = tmp->descendiente();
		}
	}
}

/**
*@brief Operador para imprimir sus valores  con comodidad.
*/
template<class T>
ostream & operator<<(ostream & out, Enlazada<T> & c) {
	int valor = c.primero->valor();
	return out << "Numero" << valor << "]";
}