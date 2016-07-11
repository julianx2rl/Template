/**
* @file Enlazada.h
* @version 1.0
* @date 26 / 06 / 2016
* @author Julian Arguedas Torres B50587
* @title Clase Enlazada
* @brief
*/

#pragma once
#include "stdafx.h"
#include "Nodo.h"
#include "Lista.h"
using namespace std;

template<class T>
class Enlazada : public Lista<T>{

	friend class IteratorL;

private:

	template<class T>
	friend ostream& operator<<(ostream&, Enlazada<T>&);

public:

	/**
	* @param primero: Primer nodo en la lista
	*/

	Nodo<T>* primero;

	/**
	* @brief Constructor por defecto de la lista
	*/

	Enlazada() : Lista<T>() {
	}

	/**
	* @brief Destructor por defecto de la lista
	*/

	~Enlazada() {
	}

	/**
	* @brief Imprime todos los valores de los nodos
	*/

	void imprimir() {
		Nodo<T>* tmp = primero;
		//bool terminado = false;
		while (tmp != NULL) {
			cout << tmp->valor() << endl;
			tmp = tmp->descendiente();
		}
	}

	/**
	* @brief Agrega un nuevo nodo a la lista
	*/

	void agrega(T elemento) {
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
	* @brief Borra un Nodo en la posicion dada
	*/

	void borrar(int pos) {
		Nodo<T>* tmp = primero;
		--pos;
		for (pos; pos >= 0; --pos) {
			if (pos == 0) {
				Nodo* tem = tmp->descendiente();
				Nodo* tom = tem->descendiente();
				tem = NULL;
				tmp->agrega(tom);
			}
			else {
				tmp = tmp->descendiente();
			}
		}
	}
};

template<class T>
ostream & operator<<(ostream & out, Enlazada<T> & c) {
	int valor = c.primero->valor();
	return out << "Numero" << valor << "]";
}