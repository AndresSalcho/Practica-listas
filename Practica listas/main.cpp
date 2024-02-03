#include "lista.h"

int main() {
	int dato;
	string res;
	lista<int> lista;

	while (res != "n") {
		cout << "Ingrese el dato:...\n";
		cin >> dato;
		lista.agregarFinal(dato);
		system("cls");
		cout << "Desea agregar otro dato?";
		cin >> res;
		system("cls");
	}

	lista.imprimirALL();

	return 0;
}