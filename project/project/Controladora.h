#include "Ciudad.h"
#include "MatrizMapa1.h"
#include "MatrizMapa2.h"
#include "MatrizMapa3.h"

class Controladora {
private:
	string origen, destino;
	bool noExiste;
public:
	Controladora(string origen, string destino) {
		this->origen = origen;
		this->destino = destino;
		this->noExiste = false;
	};
	~Controladora() {};

	void validacionVuelosDirectosMatriz1() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (origen == matrizMapa1[i][j].getOrigen() && destino == matrizMapa1[i][j].getDestino()) {
					if (matrizMapa1[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa1[i][j].getOrigen() << " a " << matrizMapa1[i][j].getDestino() << endl;
						noExiste = false;
					}
				}
				if (origen == matrizCuadrada1[i][j].getOrigen() && destino == matrizCuadrada1[i][j].getDestino()) {
					if (matrizCuadrada1[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizCuadrada1[i][j].getOrigen() << " -> " << funcionObtenerPuntoPasoMatriz1(origen, destino) <<" -> " << matrizCuadrada1[i][j].getDestino() << endl;
						noExiste = false;
					}
				}
				if (origen == matrizCubica1[i][j].getOrigen() && destino == matrizCubica1[i][j].getDestino()) {
					if (matrizCubica1[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de dos escalas desde " << matrizCubica1[i][j].getOrigen() <<  " -> " << funcionObtenerPuntoPasoMatriz1(origen, destino) << " -> " << matrizCubica1[i][j].getDestino() << endl;
						noExiste = false;
					}
				}
			}
		}
	}


	void validacionVuelosDirectosMatriz2() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa2[i][j].getOrigen() && destino == matrizMapa2[i][j].getDestino()) {
					if (matrizMapa2[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa2[i][j].getOrigen() << " a " << matrizMapa2[i][j].getDestino() << endl;
						noExiste = false;
					}
				}
				if (origen == matrizCuadrada2[i][j].getOrigen() && destino == matrizCuadrada2[i][j].getDestino()) {
					if (matrizCuadrada2[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizCuadrada2[i][j].getOrigen() << " -> " << funcionObtenerPuntoPasoMatriz2(origen, destino) << " -> " << matrizCuadrada2[i][j].getDestino() << endl;
						noExiste = false;
					}
				}
				if (origen == matrizCubica2[i][j].getOrigen() && destino == matrizCubica2[i][j].getDestino()) {
					if (matrizCubica2[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de dos escalas desde " << matrizCubica2[i][j].getOrigen() << " -> " << funcionObtenerPuntoPasoMatriz2(origen, destino) << " -> " << matrizCubica2[i][j].getDestino() << endl;
						noExiste = false;
					}
				}
			}
		}
	}

	void validacionVuelosDirectosMatriz3() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa3[i][j].getOrigen() && destino == matrizMapa3[i][j].getDestino()) {
					if (matrizMapa3[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa3[i][j].getOrigen() << " a " << matrizMapa3[i][j].getDestino() << endl;
						noExiste = false;
					}
				}
				if (origen == matrizCuadrada3[i][j].getOrigen() && destino == matrizCuadrada3[i][j].getDestino()) {
					if (matrizCuadrada3[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizCuadrada3[i][j].getOrigen() << " -> " << funcionObtenerPuntoPasoMatriz3(origen, destino) << " -> " << matrizCuadrada3[i][j].getDestino() << endl;
						noExiste = false;
					}
				}
				if (origen == matrizCubica3[i][j].getOrigen() && destino == matrizCubica3[i][j].getDestino()) {
					if (matrizCubica3[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de dos escalas desde " << matrizCubica3[i][j].getOrigen() << " -> " << funcionObtenerPuntoPasoMatriz3(origen, destino) << " -> " << matrizCubica3[i][j].getDestino() << endl;
						noExiste = false;
					}
				}
			}
		}
	}

	void validacionVuelosUnaEscala() {
		funcionUnaEscalaMatriz1();
		funcionUnaEscalaMatriz2();
		funcionUnaEscalaMatriz3();
		noExiste = true;
	};
	void validacionVuelosDosEscalas() {
		funcionDosEscalasMatriz1();
		funcionDosEscalasMatriz2();
		funcionDosEscalasMatriz3();
		noExiste = true;
	};

	void verificarNoExiste() {
		if (noExiste) cout << "\tNo existe vuelo directo de " << origen << " a " << destino;
	}
};