#include "Ciudad.h"
#include "MatrizMapa1.h"
<<<<<<< HEAD
#include "MatrizMapa2.h"
#include "MatrizMapa3.h"
=======
<<<<<<< HEAD
#include "MatrizMapa2.h"
#include "MatrizMapa3.h"
=======
#include "MatrizMapa1Cuadrado.h"
#include "MatrizMapa2.h"
#include "MatrizMapa2Cuadrado.h"
#include "MatrizMapa3.h"
#include "MatrizMapa3Cuadrado.h"
>>>>>>> 1e6884f0996af46441ed55cf2baa764b41003b40
>>>>>>> 0a6ec2c70b508208755a647900c1b86c2c305b6b

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

<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 0a6ec2c70b508208755a647900c1b86c2c305b6b
	void getEscalas() {
		escala1();
		escala1M2();
		escala1M3();
		escala2();
		escala2M2();
		escala2M3();
<<<<<<< HEAD
	};

=======
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

=======
>>>>>>> 1e6884f0996af46441ed55cf2baa764b41003b40
>>>>>>> 0a6ec2c70b508208755a647900c1b86c2c305b6b
	void matriz1Directo() {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (origen == matrizMapa1[i][j].getOrigen() && destino == matrizMapa1[i][j].getDestino() ||
					origen == matrizCuadrada1[i][j].getOrigen() && destino == matrizCuadrada1[i][j].getDestino() ||
					origen == matrizCubica1[i][j].getOrigen() && destino == matrizCubica1[i][j].getDestino()) {
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
					if (matrizCuadrada1[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizCuadrada1[i][j].getOrigen() << " hasta " << matrizCuadrada1[i][j].getDestino() << endl;
					}
					if (matrizCubica1[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de dos escalas desde " << matrizCubica1[i][j].getOrigen() << " hasta " << matrizCubica1[i][j].getDestino() << endl;
					}
					palanca = true;
				}
				if (origen == matrizCubica1[i][j].getOrigen() && destino == matrizCubica1[i][j].getDestino()) {
					if (matrizCubica1[i][j].getValor() == 1) {
						anuncioVueloDosEscalas(matrizCubica1[i][j].getOrigen(), matrizCubica1[i][j].getDestino());

						destinoVueloDosEscalas(matrizCubica1[i][j].getOrigen(), matrizCubica1[i][j].getDestino());

						noExiste = false;
					}
				}
				if (origen == matrizMapa1Cuadrado[i][j].getOrigen() && destino == matrizMapa1Cuadrado[i][j].getDestino()) {
					if (matrizMapa1Cuadrado[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizMapa1Cuadrado[i][j].getOrigen() << " hasta " << matrizMapa1Cuadrado[i][j].getDestino() << endl;
					}
				}

			}
		}
	}

	void matriz2Directo() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
<<<<<<< HEAD
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

=======
				if (origen == matrizMapa2[i][j].getOrigen() && destino == matrizMapa2[i][j].getDestino()) {
					if (matrizMapa2[i][j].getValor() == 1) {
<<<<<<< HEAD
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
>>>>>>> 0a6ec2c70b508208755a647900c1b86c2c305b6b
					}
					palanca = true;
				}
			}
		}
<<<<<<< HEAD
=======
=======
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
>>>>>>> 1e6884f0996af46441ed55cf2baa764b41003b40
>>>>>>> 0a6ec2c70b508208755a647900c1b86c2c305b6b
	}

	void matriz3Directo() {
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 25; j++) {
<<<<<<< HEAD
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
=======
				if (origen == matrizMapa3[i][j].getOrigen() && destino == matrizMapa3[i][j].getDestino()) {
					if (matrizMapa3[i][j].getValor() == 1) {
<<<<<<< HEAD
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
=======
						cout << "\tExiste vuelo directo de " << matrizMapa3[i][j].getOrigen() << " a " << matrizMapa3[i][j].getDestino() << endl;
>>>>>>> 1e6884f0996af46441ed55cf2baa764b41003b40
					}
				}
				if (origen == matrizMapa3Cuadrado[i][j].getOrigen() && destino == matrizMapa3Cuadrado[i][j].getDestino()) {
					if (matrizMapa3Cuadrado[i][j].getValor() == 1) {
						cout << "\tExiste un vuelo de una escala desde " << matrizMapa3Cuadrado[i][j].getOrigen() << " hasta " << matrizMapa3Cuadrado[i][j].getDestino() << endl;
					}
				}

			}
		}
	}

	void verificarNoExiste() {
<<<<<<< HEAD
		if (noExiste == true) cout << "\tNo es posible el vuelo directo/con una escala/con dos escalas";
=======
		if (noExiste == true) cout << "\tNo es posible el vuelo directo";
>>>>>>> 1e6884f0996af46441ed55cf2baa764b41003b40
	}
>>>>>>> 0a6ec2c70b508208755a647900c1b86c2c305b6b
};