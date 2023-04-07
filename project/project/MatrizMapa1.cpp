#include <iostream>
using namespace std;

int matrizMapa1[9][9] = {
	//                          Arequipa     Cuzco   Chiclayo    Iquitos    Juliaca     Lima    Piura   Puerto Maldonado   Trujillo
	/*Arequipa */                 { 0,         1,       0,          0,         0,         1,      0,           0,              0  },
	/*Cuzco */                    { 1,         0,       0,          0,         0,         1,      0,           1,              0  },
	/*Chiclayo */                 { 0,         0,       0,          0,         0,         1,      0,           0,              0  },
	/*Iquitos*/                   { 0,         0,       0,          0,         0,         1,      0,           0,              0  },
	/*Juliaca */                  { 0,         0,       0,          0,         0,         1,      0,           0,              0  },
	/*Lima*/                      { 1,         1,       1,          1,         1,         0,      1,           0,              1  },
	/*Piura*/                     { 0,         1,       0,          0,         0,         1,      0,           0,              0  },
	/*Puerto Maldonado*/          { 0,         1,       0,          0,         0,         0,      0,           0,              0  },
	/*Trujillo */                 { 0,         0,       0,          0,         0,         1,      0,           0,              0  },
}