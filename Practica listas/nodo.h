#pragma once
#include <iostream>

using namespace std;

template <class T>
class nodo
{
private:
	T Dato; 
	nodo<T> Siguiente; 
public:

	nodo(T dato) {
		Dato = dato;
		Siguiente = NULL;
	};

	~nodo() {
	};

	void setDato(T* dato) {
		this.Dato = dato;
	};
	void setSiguiente(T* siguiente) {
		this.Siguiente = siguiente;
	};
	T* getDato() {
		return Dato;
	};
	nodo<T>* getSiguiente() {
		return Siguiente;
	};
};

