#include <iostream>
#include "Ciudad.h"
using namespace std;

Ciudad matrizMapa1[9][9] = {
									//Arequipa									 Cusco								     Chiclayo									Iquitos									  Juliaca									Lima								   Piura								   Puerto Maldonado									  Trujillo
	/*Arequipa				*/		{ Ciudad("Arequipa", "Arequipa", 0),	     Ciudad("Arequipa", "Cusco", 1),         Ciudad("Arequipa", "Chiclayo", 0),         Ciudad("Arequipa", "Iquitos", 0),         Ciudad("Arequipa", "Juliaca", 0),         Ciudad("Arequipa", "Lima", 1),         Ciudad("Arequipa", "Piura", 0),         Ciudad("Arequipa", "Puerto Maldonado", 0),         Ciudad("Arequipa", "Trujillo", 0)				},
	/*Cusco					*/		{ Ciudad("Cusco", "Arequipa", 1),			 Ciudad("Cusco", "Cusco", 0),			 Ciudad("Cusco", "Chiclayo", 0),            Ciudad("Cusco", "Iquitos", 0),            Ciudad("Cusco", "Juliaca", 0),            Ciudad("Cusco", "Lima", 1),            Ciudad("Cusco", "Piura", 0),            Ciudad("Cusco", "Puerto Maldonado", 1),            Ciudad("Cusco", "Trujillo", 0)				},
	/*Chiclayo				*/		{ Ciudad("Chiclayo", "Arequipa", 0),		 Ciudad("Chiclayo", "Cusco",0),          Ciudad("Chiclayo", "Chiclayo", 0),         Ciudad("Chiclayo", "Iquitos", 0),         Ciudad("Chiclayo", "Juliaca", 0),         Ciudad("Chiclayo", "Lima", 1),         Ciudad("Chiclayo", "Piura", 0),         Ciudad("Chiclayo", "Puerto Maldonado", 0),         Ciudad("Chiclayo", "Trujillo", 0)				},
	/*Iquitos				*/		{ Ciudad("Iquitos", "Arequipa", 0),			 Ciudad("Iquitos", "Cusco", 0),          Ciudad("Iquitos", "Chiclayo", 0),          Ciudad("Iquitos", "Iquitos", 0),          Ciudad("Iquitos", "Juliaca", 0),          Ciudad("Iquitos", "Lima", 1),		   Ciudad("Iquitos", "Piura", 0),          Ciudad("Iquitos", "Puerto Maldonado", 0),          Ciudad("Iquitos", "Trujillo", 0)				},
	/*Juliaca				*/		{ Ciudad("Juliaca", "Arequipa", 0),			 Ciudad("Juliaca", "Cusco", 0),			 Ciudad("Juliaca", "Chiclayo", 0),          Ciudad("Juliaca", "Iquitos", 0),          Ciudad("Juliaca", "Juliaca", 0),          Ciudad("Juliaca", "Lima", 1),		   Ciudad("Juliaca", "Piura", 0),          Ciudad("Juliaca", "Puerto Maldonado", 0),          Ciudad("Juliaca", "Trujillo", 0)				},
	/*Lima					*/		{ Ciudad("Lima", "Arequipa", 1),			 Ciudad("Lima", "Cusco", 1),			 Ciudad("Lima", "Chiclayo", 1),             Ciudad("Lima", "Iquitos", 1),             Ciudad("Lima", "Juliaca", 1),             Ciudad("Lima", "Lima", 0),			   Ciudad("Lima", "Piura", 1),             Ciudad("Lima", "Puerto Maldonado", 0),             Ciudad("Lima", "Trujillo", 1)					},
	/*Piura					*/		{ Ciudad("Piura", "Arequipa", 0),			 Ciudad("Piura", "Cusco", 0),			 Ciudad("Piura", "Chiclayo", 0),            Ciudad("Piura", "Iquitos", 0),            Ciudad("Piura", "Juliaca", 0),            Ciudad("Piura", "Lima", 1),			   Ciudad("Piura", "Piura", 0),            Ciudad("Piura", "Puerto Maldonado", 0),            Ciudad("Piura", "Trujillo", 0)				},
	/*Puerto Maldonado		*/		{ Ciudad("Puerto Maldonado", "Arequipa", 0), Ciudad("Puerto Maldonado", "Cusco", 1), Ciudad("Puerto Maldonado", "Chiclayo", 0), Ciudad("Puerto Maldonado", "Iquitos", 0), Ciudad("Puerto Maldonado", "Juliaca", 0), Ciudad("Puerto Maldonado", "Lima", 0), Ciudad("Puerto Maldonado", "Piura", 0), Ciudad("Puerto Maldonado", "Puerto Maldonado", 0), Ciudad("Puerto Maldonado", "Trujillo", 0)		},
	/*Trujillo				*/		{ Ciudad("Trujillo", "Arequipa", 0),		 Ciudad("Trujillo", "Cusco",0),			 Ciudad("Trujillo", "Chiclayo", 0),         Ciudad("Trujillo", "Iquitos", 0),         Ciudad("Trujillo", "Juliaca", 0),         Ciudad("Trujillo", "Lima", 1),         Ciudad("Trujillo", "Piura", 0),         Ciudad("Trujillo", "Puerto Maldonado", 0),         Ciudad("Trujillo", "Trujillo", 0)				},
};

// Matrices de objetos
Ciudad matrizCuadrada1[9][9];
Ciudad matrizCubica1[9][9];

// Matrices con valores númericos
int matriz1[9][9];
int matrizCuadrada1Numerica[9][9];
int matrizCubica1Numerica[9][9];
int matrizUnaEscalaEnMatriz1[9][9];
int matrizDosEscalasEnMatriz1[9][9];

string funcionObtenerNombreMatriz1(int n) {
	string nombre;
	switch (n) { 
	case 0: nombre = "Arequipa"			;break;	
	case 1: nombre = "Cusco"			;break;	
	case 2: nombre = "Chiclayo"			;break;	
	case 3: nombre = "Iquitos"			;break;
	case 4: nombre = "Juliaca"			;break;
	case 5: nombre = "Lima"				;break;	
	case 6: nombre = "Piura"			;break;	
	case 7: nombre = "Puerto Maldonado"	;break;	
	case 8: nombre = "Trujillo"			;break;	 
	default:
		nombre = "vacio";
		break;
	}
	return nombre;
}

void funcionRestarMatriz1(int e) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			matrizUnaEscalaEnMatriz1[i][j] = matrizCuadrada1Numerica[i][j] - matriz1[i][j];
			if (i == j) {
				matrizUnaEscalaEnMatriz1[i][j] = 0;
			}
			if (matrizUnaEscalaEnMatriz1[i][j] <= 0) {
				matrizUnaEscalaEnMatriz1[i][j] = 0;
			}
			if (e == 2) {
				matrizDosEscalasEnMatriz1[i][j] = matrizCubica1Numerica[i][j] - matrizUnaEscalaEnMatriz1[i][j];
				matrizDosEscalasEnMatriz1[i][j] = matrizDosEscalasEnMatriz1[i][j] - matrizCuadrada1Numerica[i][j];
				matrizDosEscalasEnMatriz1[i][j] = matrizDosEscalasEnMatriz1[i][j] - matriz1[i][j];
				if (i == j) {
					matrizDosEscalasEnMatriz1[i][j] = 0;
				}
				if (matrizDosEscalasEnMatriz1[i][j] <= 0) {
					matrizDosEscalasEnMatriz1[i][j] = 0;
				}
			}
		}
	}
};

void funcionMatrizCuadrado1() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				matrizCuadrada1Numerica[i][j] += matriz1[i][k] * matriz1[k][j];
				if (matrizCuadrada1Numerica[i][j]>=1) {
					matrizCuadrada1Numerica[i][j] = 1;
				}
			}
		}
	}
};

void funcionMatrizCubo1() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				matrizCubica1Numerica[i][j] += matrizCuadrada1Numerica[i][k] * matriz1[k][j];
				if (matrizCubica1Numerica[i][j] >= 1) {
					matrizCubica1Numerica[i][j] = 1;
				}		
			}
		}
	}
}

// Extrae la matriz numerica de la matriz principal
int  funcionRellenarMatriz1() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			matriz1[i][j] = matrizMapa1[i][j].getValor();
		}
	}
	return 0;
};

void funcionUnaEscalaMatriz1() {
	funcionRellenarMatriz1();
	funcionMatrizCuadrado1();
	funcionRestarMatriz1(1);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int v = matrizUnaEscalaEnMatriz1[i][j];
			string o = funcionObtenerNombreMatriz1(i);
			string d = funcionObtenerNombreMatriz1(j);
			matrizCuadrada1[i][j].setValor(v);
			matrizCuadrada1[i][j].setOrigen(o);
			matrizCuadrada1[i][j].setDestino(d);
		}
	}
}

void funcionDosEscalasMatriz1() {
	funcionRellenarMatriz1();
	funcionMatrizCuadrado1();
	funcionMatrizCubo1();
	funcionRestarMatriz1(2);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int v = matrizDosEscalasEnMatriz1[i][j];
			string o = funcionObtenerNombreMatriz1(i);
			string d = funcionObtenerNombreMatriz1(j);
			matrizCubica1[i][j].setValor(v);
			matrizCubica1[i][j].setOrigen(o);
			matrizCubica1[i][j].setDestino(d);
		}
	}
}

string funcionObtenerPuntoPasoMatriz1(string origen, string destino) {
	string result;
	int auxI,auxJ, p1, p2;
	bool pp1 = true;
	bool pp2 = false;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if ( origen == matrizMapa1[i][j].getOrigen()) {
				auxI = i;
			}
			if (destino == matrizMapa1[i][j].getOrigen()) {
				auxJ = i;
			}
		}
	}
	/**************************  Dos escalas ****************************/
	for (int j = 0; j < 9; j++){
		if (matrizMapa1[auxI][j].getValor() == 1) {
			p1 = j;
		}
	}

	for (int j = 0; j < 9; j++){
		if (matrizMapa1[auxJ][j].getValor() == 1) {
			p2 = j;
		}
	}
	/**************************  Una escala  ****************************/
	for (int i = 0; i < 9; i++) {
		// Punto de paso de una escala
		if (matrizMapa1[auxI][i].getValor() == matrizMapa1[auxJ][i].getValor() && (matrizMapa1[auxJ][i].getValor() == 1 && matrizMapa1[auxI][i].getValor() == 1 )) {
			result = matrizMapa1[i][i].getOrigen();
			return result;
		}else { pp2 = true; }
		// Punto de paso de dos escalas
		if (matrizMapa1[p1][i].getValor() == 1 && matrizMapa1[p2][i].getValor() == 1 && matrizMapa1[p1][p2].getValor() && pp2 ) {
			result = matrizMapa1[p1][p1].getOrigen() + " -> " + matrizMapa1[p2][p2].getOrigen();
			return result;
		}
	}
}