
#include "Ciudad.h"
#include "MatrizMapa1.h"

class Controladora {
private:
	string origen, destino;
public:
	Controladora(string origen, string destino) {
		this->origen = origen;
		this->destino = destino;
	};
	~Controladora() {};

	void verificarEnMatriz1() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (origen == matrizMapa1[i][j].getOrigen() && destino == matrizMapa1[i][j].getDestino()) {
					if (matrizMapa1[i][j].getValor() == 1) {
						cout << "\tExiste vuelo directo" << endl;
					}
				}
			}
		}
		cout << "\tNo existe vuelo directo" << endl;
	}


	void imprimirMatriz1() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << matrizMapa1[i][j].getValor();
			}
			cout << endl;
		}
	}

};