#include "lista.h"

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
		cabeza->setDato(data);
	}else {
		nodo<T>* temp = &cabeza;
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
		nodo<T>* temp = &cabeza;
		while (temp->getSiguiente() != NULL) {
			cout << temp->getDato();
			temp = temp->getSiguiente();
		}
	}
}



