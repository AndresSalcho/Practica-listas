#pragma once
#include "nodo.h"

template <class T>
class lista
{
private:
	nodo<T> *cabeza;
	int size;
public:
	lista();
	~lista();
	int getSize();
	bool isEmpty();
	void agregarFinal(T);
	void agregarInicio(T);
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
int lista<T>::getSize() {
	return size;
}

template<class T>
bool lista<T>::isEmpty() {
	if (cabeza == NULL) {
		return true;
	}
	else {
		return false;
	}
}

template<class T>
void lista<T>::agregarFinal(T data) {
	nodo<T> *nuevo = new nodo<T>(data, nullptr);
	if (isEmpty()) {
		this->cabeza = new nodo<T>(data, nullptr);
	}
	else {
		nodo<T>* temp = this->cabeza;
		while (temp->getSiguiente()) {
			temp = temp->getSiguiente();
		}
		temp->setSiguiente(nuevo);
	}
	this->size++;
}

template<class T>
void lista<T>::agregarInicio(T data) {
	nodo<T>* nuevo = new nodo<T>(data, this->cabeza);
	this->cabeza = nuevo;
	this->size++;
}

template <class T>
void lista<T>::imprimirObjeto(T data) {
	bool found = false;

	if (cabeza == NULL) {
		cout << "La lista se encuentra vacia";
	}
	else {
		nodo<T>* temp = this->cabeza;
		while (temp) {
			if (temp->getDato() == data) {
				cout << temp->getDato();
				found = true;
			}

			temp = temp->getSiguiente();
			
		}
		if(found){
			cout << endl;
		}
		else
		{
			cout << "El elemento no existe en la lista!!!";
		}
	}
}

template <class T>
void lista<T>::imprimirALL() {
	if (cabeza == NULL) {
		cout << "La lista se encuentra vacia";
	}
	else {
		nodo<T>* temp = this->cabeza;
		while (temp) {
			cout << temp->getDato() << " -> ";
			temp = temp->getSiguiente();
		}
		cout << endl;
	}
}


