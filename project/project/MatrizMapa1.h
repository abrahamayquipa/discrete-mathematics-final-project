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

Ciudad matrizCuadrada1[9][9];
Ciudad matrizCubica1[9][9];
int matriz[9][9];
int matrizCuad[9][9];
int matrizCubi[9][9];
int matrizEscala1[9][9];
int matrizEscala2[9][9];

string getNombre(int n) {
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

void restarMatriz(int e) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			matrizEscala1[i][j] = matrizCuad[i][j] - matriz[i][j];
			if (i == j) {
				matrizEscala1[i][j] = 0;
			}
			if (matrizEscala1[i][j] <= 0) {
				matrizEscala1[i][j] = 0;
			}
			if (e == 2) {
				matrizEscala2[i][j] = matrizCubi[i][j] - matrizEscala1[i][j];
				matrizEscala2[i][j] = matrizEscala2[i][j] - matrizCuad[i][j];
				matrizEscala2[i][j] = matrizEscala2[i][j] - matriz[i][j];
				if (i == j) {
					matrizEscala2[i][j] = 0;
				}
				if (matrizEscala2[i][j] <= 0) {
					matrizEscala2[i][j] = 0;
				}
			}
		}
	}
};

void matrizCuadrado() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				matrizCuad[i][j] += matriz[i][k] * matriz[k][j];
				if (matrizCuad[i][j]>=1) {
					matrizCuad[i][j] = 1;
				}
			}
		}
	}
};

void matrizCubo() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				matrizCubi[i][j] += matrizCuad[i][k] * matriz[k][j];
				if (matrizCubi[i][j] >= 1) {
					matrizCubi[i][j] = 1;
				}		
			}
		}
	}
}

int rellenarM() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			matriz[i][j] = matrizMapa1[i][j].getValor();
		}
	}
	return 0;
};

void escala1() {
	rellenarM();
	matrizCuadrado();
	restarMatriz(1);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int v = matrizEscala1[i][j];
			string o = getNombre(i);
			string d = getNombre(j);
			matrizCuadrada1[i][j].setValor(v);
			matrizCuadrada1[i][j].setOrigen(o);
			matrizCuadrada1[i][j].setDestino(d);
		}
	}
}

void escala2() {
	rellenarM();
	matrizCuadrado();
	matrizCubo();
	restarMatriz(2);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int v = matrizEscala2[i][j];
			string o = getNombre(i);
			string d = getNombre(j);
			matrizCubica1[i][j].setValor(v);
			matrizCubica1[i][j].setOrigen(o);
			matrizCubica1[i][j].setDestino(d);
		}
	}
}