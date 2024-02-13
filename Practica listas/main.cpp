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
	cout << "Digite el nombre del objeto";
	cin >> dato;
	system("cls");

	lista.imprimirObjeto(dato);

	return 0;
}