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

	void getEscalas() {
		escala1();
		escala1M2();
		escala1M3();
		escala2();
		escala2M2();
		escala2M3();
		noExiste = true;
	};

	void anuncioVueloDirecto(string origen, string destino) {
		cout << "\tExiste vuelo directo de " << origen << " a " << destino << endl;
	}

	void anuncioVueloUnaEscala(string origen, string destino) {
		cout << "\tExiste un vuelo de una escala desde " << origen << " hasta " << destino << endl;
	}

	void anuncioVueloDosEscalas(string origen, string destino) {
		cout << "\tExiste un vuelo de dos escalas desde " << origen << " hasta " << destino << endl;
	}

	void destinoVueloDirecto(string origen, string destino) {
		cout << "\t" << origen << " - " << destino << endl;
	}

	void destinoVueloUnaEscala(string origen, string destino) {
		cout << "\t" << origen << " - " << destino << endl;
	}

	void destinoVueloDosEscalas(string origen, string destino) {
		cout << "\t" << origen << " - " << destino << endl;
	}

	void matriz1Directo() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (origen == matrizMapa1[i][j].getOrigen() && destino == matrizMapa1[i][j].getDestino()) {
					if (matrizMapa1[i][j].getValor() == 1) {
						anuncioVueloDirecto(matrizMapa1[i][j].getOrigen(), matrizMapa1[i][j].getDestino());

						destinoVueloDirecto(matrizMapa1[i][j].getOrigen(), matrizMapa1[i][j].getDestino());

						noExiste = false;
					}
				} 
				if (origen == matrizCuadrada1[i][j].getOrigen() && destino == matrizCuadrada1[i][j].getDestino()) {
					if (matrizCuadrada1[i][j].getValor() == 1) {
						anuncioVueloUnaEscala(matrizCuadrada1[i][j].getOrigen(), matrizCuadrada1[i][j].getDestino());

						destinoVueloUnaEscala(matrizCuadrada1[i][j].getOrigen(), matrizCuadrada1[i][j].getDestino());

						noExiste = false;
					}
				}
				if (origen == matrizCubica1[i][j].getOrigen() && destino == matrizCubica1[i][j].getDestino()) {
					if (matrizCubica1[i][j].getValor() == 1) {
						anuncioVueloDosEscalas(matrizCubica1[i][j].getOrigen(), matrizCubica1[i][j].getDestino());

						destinoVueloDosEscalas(matrizCubica1[i][j].getOrigen(), matrizCubica1[i][j].getDestino());

						noExiste = false;
					}
				}
			}
		}
	}

	void matriz2Directo() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa2[i][j].getOrigen() && destino == matrizMapa2[i][j].getDestino()) {
					if (matrizMapa2[i][j].getValor() == 1) {
						anuncioVueloDirecto(matrizMapa2[i][j].getOrigen(), matrizMapa2[i][j].getDestino());

						destinoVueloDirecto(matrizMapa2[i][j].getOrigen(), matrizMapa2[i][j].getDestino());

						noExiste = false;
					}
				}
				if (origen == matrizCuadrada2[i][j].getOrigen() && destino == matrizCuadrada2[i][j].getDestino()) {
					if (matrizCuadrada2[i][j].getValor() == 1) {
						anuncioVueloUnaEscala(matrizCuadrada2[i][j].getOrigen(), matrizCuadrada2[i][j].getDestino());

						destinoVueloUnaEscala(matrizCuadrada2[i][j].getOrigen(), matrizCuadrada2[i][j].getDestino());

						noExiste = false;
					}
				}
				if (origen == matrizCubica2[i][j].getOrigen() && destino == matrizCubica2[i][j].getDestino()) {
					if (matrizCubica2[i][j].getValor() == 1) {
						anuncioVueloDosEscalas(matrizCubica2[i][j].getOrigen(), matrizCubica2[i][j].getDestino());

						destinoVueloDosEscalas(matrizCubica2[i][j].getOrigen(), matrizCubica2[i][j].getDestino());

						noExiste = false;
					}
				}
			}
		}
	}

	void matriz3Directo() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
				if (origen == matrizMapa3[i][j].getOrigen() && destino == matrizMapa3[i][j].getDestino()) {
					if (matrizMapa3[i][j].getValor() == 1) {
						anuncioVueloDirecto(matrizMapa3[i][j].getOrigen(), matrizMapa3[i][j].getDestino());

						destinoVueloDirecto(matrizMapa3[i][j].getOrigen(), matrizMapa3[i][j].getDestino());

						noExiste = false;
					}
				}
				if (origen == matrizCuadrada3[i][j].getOrigen() && destino == matrizCuadrada3[i][j].getDestino()) {
					if (matrizCuadrada3[i][j].getValor() == 1) {
						anuncioVueloUnaEscala(matrizCuadrada3[i][j].getOrigen(), matrizCuadrada3[i][j].getDestino());

						destinoVueloUnaEscala(matrizCuadrada3[i][j].getOrigen(), matrizCuadrada3[i][j].getDestino());

						noExiste = false;
					}
				}
				if (origen == matrizCubica3[i][j].getOrigen() && destino == matrizCubica3[i][j].getDestino()) {
					if (matrizCubica3[i][j].getValor() == 1) {
						anuncioVueloDosEscalas(matrizCubica3[i][j].getOrigen(), matrizCubica3[i][j].getDestino());

						destinoVueloDosEscalas(matrizCubica3[i][j].getOrigen(), matrizCubica3[i][j].getDestino());

						noExiste = false;
					}
				}
			}
		}
	}

	void verificarNoExiste() {
		if (noExiste == true) cout << "\tNo es posible el vuelo directo/con una escala/con dos escalas";
	}
};