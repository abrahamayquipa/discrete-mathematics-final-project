#include <iostream>
#include "Controladora.h"

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
	controladora->matriz1Directo();
	controladora->matriz2Directo();
	controladora->matriz3Directo();
	controladora->verificarNoExiste();

	delete controladora;
	return 0;
}