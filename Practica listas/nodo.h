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
	nodo(T);
	~nodo();
	void setDato(T*);
	void setSiguiente(T*);
	T* getDato();
	nodo<T>* getSiguiente();
};

