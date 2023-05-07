#pragma once
#include <iostream>
#include <string>
using namespace std;

class Ciudad {
private:
	string origen, destino;
	int valor;
public:
	Ciudad(string origen, string destino, int valor ) {
		this->origen = origen;
		this->destino = destino;
		this->valor = valor;
	}
<<<<<<< HEAD

=======
>>>>>>> 0a6ec2c70b508208755a647900c1b86c2c305b6b
	Ciudad() {};
	~Ciudad() {};

	void setOrigen(string o) { this->origen = o; }
	void setDestino(string d) { this->destino = d; }
	void setValor(int v) { this->valor = v; }

	string getOrigen() { return this->origen; }
	string getDestino() { return this->destino; }
	int getValor() { return this->valor; }
	void setOrigen(string o) { 
		this->origen = o;
	}
	void setDestino(string d) {
		this->destino = d;
	}
	void setValor(int v) {
		this->valor = v;
	}
};