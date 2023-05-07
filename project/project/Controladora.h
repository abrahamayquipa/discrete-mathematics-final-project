#include "Ciudad.h"
#include "MatrizMapa1.h"
#include "MatrizMapa2.h"
#include "MatrizMapa3.h"

class Controladora {
private:
	string origen, destino;
	bool palanca, palanca2, palanca3;
public:
	Controladora(string origen, string destino) {
		this->origen = origen;
		this->destino = destino;
		this->palanca = false;
		this->palanca2 = false;
		this->palanca3 = false;
	};

	~Controladora() {};

	void getEscalas() {
		escala1();
		escala1M2();
		escala1M3();
		escala2();
		escala2M2();
		escala2M3();
	};

	void matriz1Directo() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (origen == matrizMapa1[i][j].getOrigen() && destino == matrizMapa1[i][j].getDestino() ||
					origen == matrizCuadrada1[i][j].getOrigen() && destino == matrizCuadrada1[i][j].getDestino() ||
					origen == matrizCubica1[i][j].getOrigen() && destino == matrizCubica1[i][j].getDestino()) {
					if (matrizMapa1[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa1[i][j].getOrigen() << " a " << matrizMapa1[i][j].getDestino() << endl;
					}
					if (matrizCuadrada1[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizCuadrada1[i][j].getOrigen() << " hasta " << matrizCuadrada1[i][j].getDestino() << endl;
					}
					if (matrizCubica1[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de dos escalas desde " << matrizCubica1[i][j].getOrigen() << " hasta " << matrizCubica1[i][j].getDestino() << endl;
					}
					palanca = true;
				}
			}
		}
	}

	void matriz2Directo() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa2[i][j].getOrigen() && destino == matrizMapa2[i][j].getDestino() ||
					origen == matrizCuadrada2[i][j].getOrigen() && destino == matrizCuadrada2[i][j].getDestino() ||
					origen == matrizCubica2[i][j].getOrigen() && destino == matrizCubica2[i][j].getDestino()) {
					if (matrizMapa2[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa2[i][j].getOrigen() << " a " << matrizMapa2[i][j].getDestino() << endl;
						palanca = true;
					}
					if (matrizCuadrada2[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizCuadrada2[i][j].getOrigen() << " hasta " << matrizCuadrada2[i][j].getDestino() << endl;
						palanca = true;
					}
					if (matrizCubica2[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de dos escalas desde " << matrizCubica2[i][j].getOrigen() << " hasta " << matrizCubica2[i][j].getDestino() << endl;

					}
					palanca = true;
				}
			}
		}
	}

	void matriz3Directo() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa3[i][j].getOrigen() && destino == matrizMapa3[i][j].getDestino() ||
					origen == matrizCuadrada3[i][j].getOrigen() && destino == matrizCuadrada3[i][j].getDestino() ||
					origen == matrizCubica3[i][j].getOrigen() && destino == matrizCubica3[i][j].getDestino()) {
					if (matrizMapa3[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo de " << matrizMapa3[i][j].getOrigen() << " a " << matrizMapa3[i][j].getDestino() << endl;
					}
					if (matrizCuadrada3[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizCuadrada3[i][j].getOrigen() << " hasta " << matrizCuadrada3[i][j].getDestino() << endl;
					}
					if (matrizCubica3[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de dos escalas desde " << matrizCubica3[i][j].getOrigen() << " hasta " << matrizCubica3[i][j].getDestino() << endl;
					}
					palanca = true;
				}
			}
		}
	}

	void matrizConexion(string origen, string destino) {
		if (palanca == false) {
			cout << "\tExiste un vuelo de dos escalas desde " << this->origen << " hasta " << this->destino << endl;
			palanca2 = true;
		}
	}

	void verificarNoExiste() {
		if (palanca2 == true) {
			cout << "\tNo es posible el vuelo directo/con una escala/con dos escalas";
			palanca3 = true;
		}
	}

	void verificadorPorDefault() {
		if (palanca2 == false) {
			cout << "\tNo es posible el vuelo directo/con una escala/con dos escalas";
		}
	}
};