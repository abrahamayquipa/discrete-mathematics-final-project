#include <iostream>
#include "Controladora.h"
#include <conio.h>

int main() {
	string origen, destino;
	cout << endl << endl;
<<<<<<< HEAD
	cout << "\t****VUELOS AEROlUXE*****" << endl << endl;
	cout << "\tRECOMENDACIONES:" << endl;
	cout << "\t- Respete las mayusculas" << endl;
=======
	cout << "\t****VUELOS BIG BIRD*****" << endl << endl;
	cout << "\tRECOMENDACIONES:" << endl;
	cout << "\t- Respete las mayusculas" << endl;
<<<<<<< HEAD
>>>>>>> 0a6ec2c70b508208755a647900c1b86c2c305b6b
	cout << "\t- Escriba correctamente el nombre de las ciudades" << endl;
	cout << "\t- No deje espacios ni antes ni despues de los nombres" << endl << endl;
	cout << "\tIngresar origen: ";  getline(cin, origen);
	cout << "\tIngresar destino: "; getline(cin, destino); 
<<<<<<< HEAD
	cout << endl << endl;

	Controladora* controladora = new Controladora(origen, destino);
	cout << "\tResultados:" << endl;
	controladora->getEscalas();
=======
=======
	cout << "\t- Escriba correctamente el nombre de las ciudades" << endl << endl;
	cout << "\tIngresar origen: "; cin >> origen;
	cout << "\tIngresar destino: "; cin >> destino;

>>>>>>> 1e6884f0996af46441ed55cf2baa764b41003b40
	cout << endl << endl;

	Controladora* controladora = new Controladora(origen, destino);
<<<<<<< HEAD
	controladora->getEscalas();
=======
>>>>>>> 1e6884f0996af46441ed55cf2baa764b41003b40
>>>>>>> 0a6ec2c70b508208755a647900c1b86c2c305b6b
	controladora->matriz1Directo();
	controladora->matriz2Directo();
	controladora->matriz3Directo();
	controladora->verificarNoExiste();
<<<<<<< HEAD
	controladora->matrizConexion(origen, destino);
	controladora->verificadorPorDefault();
=======
>>>>>>> 0a6ec2c70b508208755a647900c1b86c2c305b6b

	delete controladora;
	_getch();
	return 0;
}