#include <iostream>
#include "Controladora.h"

void menu() {
}

int main() {
	string origen, destino;
	cout << endl << endl;
	cout << "\t****VUELOS AVIANCA*****" << endl << endl;
	cout << "\tRECOMENDACIONES:" << endl;
	cout << "\t- Respete las mayusculas" << endl;
	cout << "\t- Escriba correctamente el nombre de las ciudades" << endl << endl;
	cout << "\tIngresar origen: "; cin >> origen;
	cout << "\tIngresar destino: "; cin >> destino;
	cout << endl << endl;
	Controladora* controladora = new Controladora(origen, destino);
	controladora->verificarEnMatriz1();
	delete controladora;
	return 0;
}