#include <iostream>
#include "Controladora.h"
#include <conio.h>

int main() {
	string origen, destino;
	cout << endl << endl;
	cout << "\t****VUELOS BIG BIRD*****" << endl << endl;
	cout << "\tRECOMENDACIONES:" << endl;
	cout << "\t- Respete las mayusculas" << endl;
	cout << "\t- Escriba correctamente el nombre de las ciudades" << endl;
	cout << "\t- No deje espacios ni antes ni despues de los nombres" << endl << endl;
	cout << "\tIngresar origen: ";  getline(cin, origen);
	cout << "\tIngresar destino: "; getline(cin, destino); 
	cout << endl << endl;

	Controladora* controladora = new Controladora(origen, destino);
	controladora->getEscalas();
	controladora->matriz1Directo();
	controladora->matriz2Directo();
	controladora->matriz3Directo();
	controladora->verificarNoExiste();

	delete controladora;
	_getch();
	return 0;
}