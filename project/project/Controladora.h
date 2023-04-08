#include "Ciudad.h"
#include "MatrizMapa1.h"
#include "MatrizMapa2Bogota.h"
#include "MatrizMapa2ElSalvador.h"
#include "MatrizMapa2Lima.h"

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

	void verificarEnMatriz1() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (origen == matrizMapa1[i][j].getOrigen() && destino == matrizMapa1[i][j].getDestino()) {
					if (matrizMapa1[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa1[i][j].getOrigen() << " a " << matrizMapa1[i][j].getDestino() << endl;
					}
				}
			}
		}
		noExiste = true;
	}

	void verificarEnMatriz() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa2Bogota[i][j].getOrigen() && destino == matrizMapa2Bogota[i][j].getDestino()) {
					if (matrizMapa2Bogota[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa2Bogota[i][j].getOrigen() << " a " << matrizMapa2Bogota[i][j].getDestino() << endl;
					}
				}
				if (origen == matrizMapa2ElSalvador[i][j].getOrigen() && destino == matrizMapa2ElSalvador[i][j].getDestino()) {
					if (matrizMapa2ElSalvador[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa2ElSalvador[i][j].getOrigen() << " a " << matrizMapa2ElSalvador[i][j].getDestino() << endl;
					}
				}
				if (origen == matrizMapa2Lima[i][j].getOrigen() && destino == matrizMapa2Lima[i][j].getDestino()) {
					if (matrizMapa2Lima[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa2Lima[i][j].getOrigen() << " a " << matrizMapa2Lima[i][j].getDestino() << endl;
					}
				}
			}
		}
		noExiste = true;
	}

	void verificarNoExiste() {
		if (noExiste == true) cout << "\tNo existe vuelo directo";
	}

	/*
	void verificarEnMatrizElSalvador() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa2ElSalvador[i][j].getOrigen() && destino == matrizMapa2ElSalvador[i][j].getDestino()) {
					if (matrizMapa2ElSalvador[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa2ElSalvador[i][j].getOrigen() << " a " << matrizMapa2ElSalvador[i][j].getDestino() << endl;
					}
				}
			}
		}
		cout << "\tNo existe vuelo directo" << endl;
	}

	void verificarEnMatrizLima() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa2Lima[i][j].getOrigen() && destino == matrizMapa2Lima[i][j].getDestino()) {
					if (matrizMapa2Lima[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa2Lima[i][j].getOrigen() << " a " << matrizMapa2Lima[i][j].getDestino() << endl;
					}
				}
			}
		}
		cout << "\tNo existe vuelo directo" << endl;
	}*/
};