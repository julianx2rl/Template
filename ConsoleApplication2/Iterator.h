/**
* @file Iterator.h
* @version 1.0
* @date 26 / 06 / 2016
* @author Julian Arguedas Torres B50587
* @title Clase Iterator
* @brief
*/

#pragma once
#include "stdafx.h"
#include "Array.h"
#include "Enlazada.h"
#include "Arbol.h"
#include "Lista.h"
using namespace std;

template<class T>
class Iterator {
protected:

	/**
	* @brief Avanza un expacio
	*/

	Iterator&<T> preincremento() {
		this->operator++();
	}

	/**
	* @brief Avanza un expacio
	*/
	Iterator&<T> postincremento(T dummie) {
		this->operator++(dummie);
	}

	/**
	* @brief Retrocede un expacio
	*/
	Iterator&<T> predisminución() {
		this->operator--();
	}

	/**
	* @brief Retrocede un expacio
	*/
	Iterator&<T> postdisminución(T dummie) {
		this->operator--(dummie);
	}

	/**
	* @brief Cambia el valor de la posicion actual del Iterador
	*/
	Iterator&<T> cambio(T dummie) {
		this->operator=(dummie);
	}

	/**
	* @brief obtiene el valor del expacio
	*/
	T desreferenciacion() {
		this->operator*();
	}

	/**
	* @brief Determina si el valor en el Iterador y otro son iguales
	*/
	bool igualdad(Iterator<T>* dummie) {
		this->operator==(dummie);
	}

public:

	/**
	* @param La lista del iterador
	*/

	Lista<T>* lista;

	/**
	* @param Posicion actual del nodo
	*/

	int posicion;

	/**
	* @brief Constructor defecto del Iterador
	*/
	Iterator(Lista<T>* listo) {
		this->lista = listo;
	}

	/**
	* @brief Destructor defecto del Iterador
	*/
	~Iterator() {
	}

	/**
	* @brief Metodo virtual para avanzar un expacio
	*/
	Iterator<T>* operator++() {
	}

	/**
	* @brief Metodo virtual para avanzar un expacio
	*/
	Iterator<T>* operator++(T dummie) {
	}

	/**
	* @brief Metodo virtual para retrorceder un expacio
	*/
	Iterator<T>* operator--() {
	}

	/**
	* @brief Metodo virtual para retrorceder un expacio
	*/
	Iterator<T>* operator--(T dummie) {
	}

	/**
	* @brief Metodo virtual para igualar valor actual
	*/
	Iterator<T>* operator=(T otra) {
	}

	/**
	* @brief Metodo virtual para desreferenciar
	*/
	T operator*() {
	}

	/**
	* @brief Metodo virtual para determinar igualdad
	*/
	bool operator==(Iterator<T>* dummie) {
	}
};