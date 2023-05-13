#include <iostream>
#include "Controladora.h"
#include <conio.h>

int main() {
	string origen, destino;
	cout << endl << endl;
	cout << "\t****AeroLuxe Airlines*****" << endl << endl;
	cout << "\tRECOMENDACIONES:" << endl;
	cout << "\t- Respete las mayusculas" << endl;
	cout << "\t- Escriba correctamente el nombre de las ciudades" << endl;
	cout << "\t- No deje espacios ni antes ni despues de los nombres" << endl << endl;
	cout << "\tIngresar origen: ";  getline(cin, origen);
	cout << "\tIngresar destino: "; getline(cin, destino);

	cout << endl << endl;
	Controladora* controladora = new Controladora(origen, destino);
	controladora->validacionVuelosUnaEscala();
	controladora->validacionVuelosDosEscalas();

	controladora->validacionVuelosDirectosMatriz1();
	controladora->validacionVuelosDirectosMatriz2();
	controladora->validacionVuelosDirectosMatriz3();

	controladora->verificarNoExiste();

	cout << endl << endl;
	delete controladora;
	return 0;
}