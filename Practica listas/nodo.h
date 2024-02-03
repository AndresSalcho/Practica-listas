#pragma once
#include <iostream>

using namespace std;

template <class T> class nodo
{
private:
	T Dato; 
	nodo<T>* Siguiente;
public:
	nodo(T dato);
	~nodo();
	void setDato(T dato);
	void setSiguiente(nodo<T>* siguiente);
	T getDato();
	nodo<T>* getSiguiente();
};

template <class T>
nodo<T>::nodo(T dato) {
	Dato = dato;
	Siguiente = NULL;
}

template <class T>
nodo<T>::~nodo(){}

template <class T>
void nodo<T>::setDato(T dato) {
	this->Dato = dato;
}

template <class T>
void nodo<T>::setSiguiente(nodo<T>* siguiente) {
	this->Siguiente = siguiente;
}

template <class T>
T nodo<T>::getDato() {
	return Dato;
}

template <class T>
nodo<T>* nodo<T>::getSiguiente() {
	return Siguiente;
}

