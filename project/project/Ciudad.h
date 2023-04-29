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
	Ciudad() {};
	~Ciudad() {};

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