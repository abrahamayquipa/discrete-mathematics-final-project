#include "Ciudad.h"
#include "MatrizMapa1.h"
#include "MatrizMapa1Cuadrado.h"
#include "MatrizMapa2.h"
#include "MatrizMapa2Cuadrado.h"
#include "MatrizMapa3.h"
#include "MatrizMapa3Cuadrado.h"

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

	void matriz1Directo() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (origen == matrizMapa1[i][j].getOrigen() && destino == matrizMapa1[i][j].getDestino()) {
					if (matrizMapa1[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa1[i][j].getOrigen() << " a " << matrizMapa1[i][j].getDestino() << endl;
					}
				}
				if (origen == matrizMapa1Cuadrado[i][j].getOrigen() && destino == matrizMapa1Cuadrado[i][j].getDestino()) {
					if (matrizMapa1Cuadrado[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizMapa1Cuadrado[i][j].getOrigen() << " hasta " << matrizMapa1Cuadrado[i][j].getDestino() << endl;
					}
				}

			}
		}
		noExiste = true;
	}

	void matriz2Directo() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa2[i][j].getOrigen() && destino == matrizMapa2[i][j].getDestino()) {
					if (matrizMapa2[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa2[i][j].getOrigen() << " a " << matrizMapa2[i][j].getDestino() << endl;
					}
				}
				if (origen == matrizMapa2Cuadrado[i][j].getOrigen() && destino == matrizMapa2Cuadrado[i][j].getDestino()) {
					if (matrizMapa2Cuadrado[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizMapa2Cuadrado[i][j].getOrigen() << " hasta " << matrizMapa2Cuadrado[i][j].getDestino() << endl;
					}
				}

			}
		}
		noExiste = true;
	}

	void matriz3Directo() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa3[i][j].getOrigen() && destino == matrizMapa3[i][j].getDestino()) {
					if (matrizMapa3[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa3[i][j].getOrigen() << " a " << matrizMapa3[i][j].getDestino() << endl;
					}
				}
				if (origen == matrizMapa3Cuadrado[i][j].getOrigen() && destino == matrizMapa3Cuadrado[i][j].getDestino()) {
					if (matrizMapa3Cuadrado[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizMapa3Cuadrado[i][j].getOrigen() << " hasta " << matrizMapa3Cuadrado[i][j].getDestino() << endl;
					}
				}

			}
		}
		noExiste = true;
	}

	void verificarNoExiste() {
		if (noExiste == true) cout << "\tNo es posible el vuelo directo";
	}
};