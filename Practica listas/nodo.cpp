#include "nodo.h"

template <class T>
nodo<T>::nodo(T dato) {
	Dato = dato;
	Siguiente = NULL;
}

template <class T>
nodo<T>::~nodo() {
}

template <class T>
void nodo<T>::setDato(T* dato) {
	this.Dato = dato;
}

template <class T>
void nodo<T>::setSiguiente(T* siguiente) {
	this.Siguiente = siguiente;
}

template <class T>
T* nodo<T>::getDato() {
	return Dato;
}

template <class T>
nodo<T> *nodo<T>::getSiguiente() {
	return Siguiente;
}