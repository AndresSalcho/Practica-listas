#pragma once
#include "nodo.h"

template <class T>
class lista
{
private:
	nodo<T>* cabeza;
public:
	lista();
	~lista();
	void agregarFinal(T);
	void borrar(T);
	void imprimirObjeto(T);
	void imprimirALL();
};

template<class T>
lista<T>::lista() {
	cabeza = NULL;
}

template<class T>
lista<T>::~lista() {
}

template<class T>
void lista<T>::agregarFinal(T data) {
	if (cabeza == NULL) {
		cabeza = new nodo<T>(data);
	}
	else {
		nodo<T>* temp = cabeza;
		while (temp->getSiguiente() != NULL) {
			temp = temp->getSiguiente();
		}
		temp->setDato(data);
	}
}

template <class T>
void lista<T>::imprimirALL() {
	if (cabeza == NULL) {
		cout << "La lista se encuentra vacia";
	}
	else {
		nodo<T>* temp = cabeza;
		while (temp->getSiguiente() != NULL) {
			cout << temp->getDato();
			temp = temp->getSiguiente();
		}
	}
}


