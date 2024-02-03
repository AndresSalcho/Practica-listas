#include "lista.h"

int main() {
	int dato;
	string res;
	lista<int> lista;

	while (res != "s") {
		cout << "valor";
		cin >> dato;
		lista.agregarFinal(dato);
		system("cls");
	}

	lista.imprimirALL();

	return 0;
}