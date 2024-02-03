#pragma once
#include "nodo.h"

template <class T>
class lista
{
private:
	nodo<T> cabeza;
public:
	lista();
	~lista();
	void agregarFinal(T);
	void borrar(T);
	void imprimirObjeto(T);
	void imprimirALL();
};

