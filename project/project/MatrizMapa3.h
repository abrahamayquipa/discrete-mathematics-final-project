#include <iostream>
#include "Ciudad.h"
using namespace std;

Ciudad matrizMapa3[25][25] = {
	//										Armenia									Bucaramanga											Barrancabermeja										Barranquilla					        		Bogota									Cucuta								Cartagena														Cali								Florencia										Ibague							Leticia												Monteria							Manizales													Medellin									Neiva											Pasto											Popayan						Pereira															Riohacha										San Andres										Santa Marta											Tumnaco									Valledupar											Villavicencio 												Yopal
	/*Armenia			*/	 { Ciudad("Armenia", "Armenia", 0),			Ciudad("Armenia", "Bucaramanga", 0), 			Ciudad("Armenia", "Barrancabermeja", 0), 			Ciudad("Armenia", "Barranquilla", 0), 			Ciudad("Armenia", "Bogota", 1), 			Ciudad("Armenia", "Cucuta", 0), 				Ciudad("Armenia", "Cartagena", 0), 				Ciudad("Armenia", "Cali", 0), 			Ciudad("Armenia", "Florencia", 0), 			Ciudad("Armenia", "Ibague", 0), 		Ciudad("Armenia", "Leticia", 0), 			Ciudad("Armenia", "Monteria", 0), 				Ciudad("Armenia", "Manizales", 0), 				Ciudad("Armenia", "Medellin", 0),	 			Ciudad("Armenia", "Neiva", 0), 				Ciudad("Armenia", "Pasto", 0), 					Ciudad("Armenia", "Popayan", 0), 			Ciudad("Armenia", "Pereira", 0), 				Ciudad("Armenia", "Riohacha", 0), 				Ciudad("Armenia", "San Andres", 0), 				Ciudad("Armenia", "Santa Marta", 0), 			Ciudad("Armenia", "Tumaco", 0),			 	Ciudad("Armenia", "Valledupar", 0), 				Ciudad("Armenia", "Villavicencio", 0), 					Ciudad("Armenia", "Yopal", 0), },
	/*Bucaramanga		*/	 { Ciudad("Bucaramanga", "Armenia", 0),		Ciudad("Bucaramanga", "Bucaramanga", 0), 		Ciudad("Bucaramanga", "Barrancabermeja", 0), 		Ciudad("Bucaramanga", "Barranquilla", 0), 		Ciudad("Bucaramanga", "Bogota", 1), 		Ciudad("Bucaramanga", "Cucuta", 0), 			Ciudad("Bucaramanga", "Cartagena", 0), 			Ciudad("Bucaramanga", "Cali", 0), 		Ciudad("Bucaramanga", "Florencia", 0), 		Ciudad("Bucaramanga", "Ibague", 0), 	Ciudad("Bucaramanga", "Leticia", 0), 		Ciudad("Bucaramanga", "Monteria", 0), 			Ciudad("Bucaramanga", "Manizales", 0), 			Ciudad("Bucaramanga", "Medellin", 1), 			Ciudad("Bucaramanga", "Neiva", 0), 			Ciudad("Bucaramanga", "Pasto", 0), 				Ciudad("Bucaramanga", "Popayan", 0), 		Ciudad("Bucaramanga", "Pereira", 0), 			Ciudad("Bucaramanga", "Riohacha", 0), 			Ciudad("Bucaramanga", "San Andres", 0), 			Ciudad("Bucaramanga", "Santa Marta", 0), 		Ciudad("Bucaramanga", "Tumaco", 0),		 	Ciudad("Bucaramanga", "Valledupar", 0), 			Ciudad("Bucaramanga", "Villavicencio", 0), 				Ciudad("Bucaramanga", "Yopal", 0), },
	/*Barrancabermeja	*/	 { Ciudad("Barrancabermeja", "Armenia", 0), Ciudad("Barrancabermeja", "Bucaramanga", 0), 	Ciudad("Barrancabermeja", "Barrancabermeja", 0), 	Ciudad("Barrancabermeja", "Barranquilla", 0), 	Ciudad("Barrancabermeja", "Bogota", 1), 	Ciudad("Barrancabermeja", "Cucuta", 0), 		Ciudad("Barrancabermeja", "Cartagena", 0), 		Ciudad("Barrancabermeja", "Cali", 0), 	Ciudad("Barrancabermeja", "Florencia", 0), 	Ciudad("Barrancabermeja", "Ibague", 0), Ciudad("Barrancabermeja", "Leticia", 0), 	Ciudad("Barrancabermeja", "Monteria", 0), 		Ciudad("Barrancabermeja", "Manizales", 0), 		Ciudad("Barrancabermeja", "Medellin", 0), 		Ciudad("Barrancabermeja", "Neiva", 0), 		Ciudad("Barrancabermeja", "Pasto", 0), 			Ciudad("Barrancabermeja", "Popayan", 0), 	Ciudad("Barrancabermeja", "Pereira", 0), 		Ciudad("Barrancabermeja", "Riohacha", 0), 		Ciudad("Barrancabermeja", "San Andres", 0), 		Ciudad("Barrancabermeja", "Santa Marta", 0),	Ciudad("Barrancabermeja", "Tumaco", 0), 	Ciudad("Barrancabermeja", "Valledupar", 0), 		Ciudad("Barrancabermeja", "Villavicencio", 0), 			Ciudad("Barrancabermeja", "Yopal", 0),},
	/*Barranquilla		*/	 { Ciudad("Barranquilla", "Armenia", 0),	Ciudad("Barranquilla", "Bucaramanga", 0), 		Ciudad("Barranquilla", "Barrancabermeja", 0), 		Ciudad("Barranquilla", "Barranquilla", 0), 		Ciudad("Barranquilla", "Bogota", 1), 		Ciudad("Barranquilla", "Cucuta", 0), 			Ciudad("Barranquilla", "Cartagena", 0), 		Ciudad("Barranquilla", "Cali", 1), 		Ciudad("Barranquilla", "Florencia", 0), 	Ciudad("Barranquilla", "Ibague", 0), 	Ciudad("Barranquilla", "Leticia", 0), 		Ciudad("Barranquilla", "Monteria", 0), 			Ciudad("Barranquilla", "Manizales", 0), 		Ciudad("Barranquilla", "Medellin", 1), 			Ciudad("Barranquilla", "Neiva", 0), 		Ciudad("Barranquilla", "Pasto", 0), 			Ciudad("Barranquilla", "Popayan", 0), 		Ciudad("Barranquilla", "Pereira", 0), 			Ciudad("Barranquilla", "Riohacha", 0), 			Ciudad("Barranquilla", "San Andres", 0), 			Ciudad("Barranquilla", "Santa Marta", 0), 		Ciudad("Barranquilla", "Tumaco", 0), 		Ciudad("Barranquilla", "Valledupar", 0), 			Ciudad("Barranquilla", "Villavicencio", 0), 			Ciudad("Barranquilla", "Yopal", 0),},
	/*Bogota			*/	 { Ciudad("Bogota", "Armenia", 1),          Ciudad("Bogota", "Bucaramanga", 1), 			Ciudad("Bogota", "Barrancabermeja", 1), 			Ciudad("Bogota", "Barranquilla", 1), 			Ciudad("Bogota", "Bogota", 1), 				Ciudad("Bogota", "Cucuta", 1), 					Ciudad("Bogota", "Cartagena", 1), 				Ciudad("Bogota", "Cali", 1), 			Ciudad("Bogota", "Florencia", 1), 			Ciudad("Bogota", "Ibague", 1), 			Ciudad("Bogota", "Leticia", 1), 			Ciudad("Bogota", "Monteria", 1), 				Ciudad("Bogota", "Manizales", 1), 				Ciudad("Bogota", "Medellin", 1), 				Ciudad("Bogota", "Neiva", 1), 				Ciudad("Bogota", "Pasto", 1), 					Ciudad("Bogota", "Popayan", 1), 			Ciudad("Bogota", "Pereira", 1), 				Ciudad("Bogota", "Riohacha", 1), 				Ciudad("Bogota", "San Andres", 1), 					Ciudad("Bogota", "Santa Marta", 1), 			Ciudad("Bogota", "Tumaco", 0), 				Ciudad("Bogota", "Valledupar", 1), 					Ciudad("Bogota", "Villavicencio", 1), 					Ciudad("Bogota", "Yopal", 1),},
	/*Cucuta			*/	 { Ciudad("Cucuta", "Armenia", 0),          Ciudad("Cucuta", "Bucaramanga", 0), 			Ciudad("Cucuta", "Barrancabermeja", 0), 			Ciudad("Cucuta", "Barranquilla", 0), 			Ciudad("Cucuta", "Bogota", 1), 				Ciudad("Cucuta", "Cucuta", 0), 					Ciudad("Cucuta", "Cartagena", 0), 				Ciudad("Cucuta", "Cali", 0), 			Ciudad("Cucuta", "Florencia", 0), 			Ciudad("Cucuta", "Ibague", 0), 			Ciudad("Cucuta", "Leticia", 0), 			Ciudad("Cucuta", "Monteria", 0), 				Ciudad("Cucuta", "Manizales", 0), 				Ciudad("Cucuta", "Medellin", 1), 				Ciudad("Cucuta", "Neiva", 0), 				Ciudad("Cucuta", "Pasto", 0), 					Ciudad("Cucuta", "Popayan", 0), 			Ciudad("Cucuta", "Pereira", 0), 				Ciudad("Cucuta", "Riohacha", 0), 				Ciudad("Cucuta", "San Andres", 0), 					Ciudad("Cucuta", "Santa Marta", 0), 			Ciudad("Cucuta", "Tumaco", 0), 				Ciudad("Cucuta", "Valledupar", 0), 					Ciudad("Cucuta", "Villavicencio", 0), 					Ciudad("Cucuta", "Yopal", 0),},
	/*Cartagena			*/	 { Ciudad("Cartagena", "Armenia", 0),       Ciudad("Cartagena", "Bucaramanga", 0), 			Ciudad("Cartagena", "Barrancabermeja", 0), 			Ciudad("Cartagena", "Barranquilla", 0), 		Ciudad("Cartagena", "Bogota", 1), 			Ciudad("Cartagena", "Cucuta", 0), 				Ciudad("Cartagena", "Cartagena", 0), 			Ciudad("Cartagena", "Cali", 1), 		Ciudad("Cartagena", "Florencia", 0), 		Ciudad("Cartagena", "Ibague", 0), 		Ciudad("Cartagena", "Leticia", 0), 			Ciudad("Cartagena", "Monteria", 0), 			Ciudad("Cartagena", "Manizales", 0), 			Ciudad("Cartagena", "Medellin", 1), 			Ciudad("Cartagena", "Neiva", 0), 			Ciudad("Cartagena", "Pasto", 0), 				Ciudad("Cartagena", "Popayan", 0),		 	Ciudad("Cartagena", "Pereira", 0), 				Ciudad("Cartagena", "Riohacha", 0), 			Ciudad("Cartagena", "San Andres", 0), 				Ciudad("Cartagena", "Santa Marta", 0), 			Ciudad("Cartagena", "Tumaco", 0), 			Ciudad("Cartagena", "Valledupar", 0), 				Ciudad("Cartagena", "Villavicencio", 0), 				Ciudad("Cartagena", "Yopal", 0),},
	/*Cali				*/	 { Ciudad("Cali", "Armenia", 0),            Ciudad("Cali", "Bucaramanga", 0), 				Ciudad("Cali", "Barrancabermeja", 0), 				Ciudad("Cali", "Barranquilla", 1), 				Ciudad("Cali", "Bogota", 1), 				Ciudad("Cali", "Cucuta", 0), 					Ciudad("Cali", "Cartagena", 1),	 				Ciudad("Cali", "Cali", 0), 				Ciudad("Cali", "Florencia", 0), 			Ciudad("Cali", "Ibague", 0), 			Ciudad("Cali", "Leticia", 0), 				Ciudad("Cali", "Monteria", 0), 					Ciudad("Cali", "Manizales", 0), 				Ciudad("Cali", "Medellin", 1), 					Ciudad("Cali", "Neiva", 0), 				Ciudad("Cali", "Pasto", 1), 					Ciudad("Cali", "Popayan", 0), 				Ciudad("Cali", "Pereira", 0), 					Ciudad("Cali", "Riohacha", 0),	 				Ciudad("Cali", "San Andres", 0), 					Ciudad("Cali", "Santa Marta", 0),		 		Ciudad("Cali", "Tumaco", 1), 				Ciudad("Cali", "Valledupar", 0), 					Ciudad("Cali", "Villavicencio", 0), 					Ciudad("Cali", "Yopal", 0),},
	/*Florencia			*/	 { Ciudad("Florencia", "Armenia", 0),		Ciudad("Florencia", "Bucaramanga", 0), 			Ciudad("Florencia", "Barrancabermeja", 0), 			Ciudad("Florencia", "Barranquilla", 0), 		Ciudad("Florencia", "Bogota", 1), 			Ciudad("Florencia", "Cucuta", 0), 				Ciudad("Florencia", "Cartagena", 0), 			Ciudad("Florencia", "Cali", 0), 		Ciudad("Florencia", "Florencia", 0), 		Ciudad("Florencia", "Ibague", 0), 		Ciudad("Florencia", "Leticia", 0), 			Ciudad("Florencia", "Monteria", 0), 			Ciudad("Florencia", "Manizales", 0), 			Ciudad("Florencia", "Medellin", 0), 			Ciudad("Florencia", "Neiva", 0), 			Ciudad("Florencia", "Pasto", 0),				Ciudad("Florencia", "Popayan", 0), 			Ciudad("Florencia", "Pereira", 0), 				Ciudad("Florencia", "Riohacha", 0), 			Ciudad("Florencia", "San Andres", 0), 				Ciudad("Florencia", "Santa Marta", 0),	 		Ciudad("Florencia", "Tumaco", 0), 			Ciudad("Florencia", "Valledupar", 0), 				Ciudad("Florencia", "Villavicencio", 0), 				Ciudad("Florencia", "Yopal", 0),},
	/*Ibague			*/	 { Ciudad("Ibague", "Armenia", 0),		   	Ciudad("Ibague", "Bucaramanga", 0), 			Ciudad("Ibague", "Barrancabermeja", 0), 			Ciudad("Ibague", "Barranquilla", 0), 			Ciudad("Ibague", "Bogota", 1), 				Ciudad("Ibague", "Cucuta", 0), 					Ciudad("Ibague", "Cartagena", 0), 				Ciudad("Ibague", "Cali", 0), 			Ciudad("Ibague", "Florencia", 0), 			Ciudad("Ibague", "Ibague", 0), 			Ciudad("Ibague", "Leticia", 0), 			Ciudad("Ibague", "Monteria", 0), 				Ciudad("Ibague", "Manizales", 0), 				Ciudad("Ibague", "Medellin", 0), 				Ciudad("Ibague", "Neiva", 0), 				Ciudad("Ibague", "Pasto", 0), 					Ciudad("Ibague", "Popayan", 0), 			Ciudad("Ibague", "Pereira", 0), 				Ciudad("Ibague", "Riohacha", 0), 				Ciudad("Ibague", "San Andres", 0), 					Ciudad("Ibague", "Santa Marta", 0), 			Ciudad("Ibague", "Tumaco", 0), 				Ciudad("Ibague", "Valledupar", 0), 					Ciudad("Ibague", "Villavicencio", 0), 					Ciudad("Ibague", "Yopal", 0),},
	/*Leticia			*/	 { Ciudad("Leticia", "Armenia", 0),			Ciudad("Leticia", "Bucaramanga", 0), 			Ciudad("Leticia", "Barrancabermeja", 0), 			Ciudad("Leticia", "Barranquilla", 0), 			Ciudad("Leticia", "Bogota", 1), 			Ciudad("Leticia", "Cucuta", 0), 				Ciudad("Leticia", "Cartagena", 0), 				Ciudad("Leticia", "Cali", 0), 			Ciudad("Leticia", "Florencia", 0), 			Ciudad("Leticia", "Ibague", 0), 		Ciudad("Leticia", "Leticia", 0), 			Ciudad("Leticia", "Monteria", 0), 				Ciudad("Leticia", "Manizales", 0), 				Ciudad("Leticia", "Medellin", 0), 				Ciudad("Leticia", "Neiva", 0), 				Ciudad("Leticia", "Pasto", 0), 					Ciudad("Leticia", "Popayan", 0), 			Ciudad("Leticia", "Pereira", 0), 				Ciudad("Leticia", "Riohacha", 0), 				Ciudad("Leticia", "San Andres", 0), 				Ciudad("Leticia", "Santa Marta", 0), 			Ciudad("Leticia", "Tumaco", 0), 			Ciudad("Leticia", "Valledupar", 0), 				Ciudad("Leticia", "Villavicencio", 0), 					Ciudad("Leticia", "Yopal", 0),},
	/*Monteria 			*/	 { Ciudad("Monteria", "Armenia", 0), 		Ciudad("Monteria", "Bucaramanga", 0), 			Ciudad("Monteria", "Barrancabermeja", 0), 			Ciudad("Monteria", "Barranquilla", 0), 			Ciudad("Monteria", "Bogota", 1),			Ciudad("Monteria", "Cucuta", 0), 				Ciudad("Monteria", "Cartagena", 0), 			Ciudad("Monteria", "Cali", 0), 			Ciudad("Monteria", "Florencia", 0), 		Ciudad("Monteria", "Ibague", 0), 		Ciudad("Monteria", "Leticia", 0), 			Ciudad("Monteria", "Monteria", 0), 				Ciudad("Monteria", "Manizales", 0), 			Ciudad("Monteria", "Medellin", 0), 				Ciudad("Monteria", "Neiva", 0), 			Ciudad("Monteria", "Pasto", 0), 				Ciudad("Monteria", "Popayan", 0), 			Ciudad("Monteria", "Pereira", 0), 				Ciudad("Monteria", "Riohacha", 0), 				Ciudad("Monteria", "San Andres", 0), 				Ciudad("Monteria", "Santa Marta", 0), 			Ciudad("Monteria", "Tumaco", 0),	 		Ciudad("Monteria", "Valledupar", 0), 				Ciudad("Monteria", "Villavicencio", 0), 				Ciudad("Monteria", "Yopal", 0),},
	/*Manizales			*/	 { Ciudad("Manizales", "Armenia", 0), 		Ciudad("Manizales", "Bucaramanga", 0), 			Ciudad("Manizales", "Barrancabermeja", 0), 			Ciudad("Manizales", "Barranquilla", 0), 		Ciudad("Manizales", "Bogota", 1), 			Ciudad("Manizales", "Cucuta", 0), 				Ciudad("Manizales", "Cartagena", 0), 			Ciudad("Manizales", "Cali", 0), 		Ciudad("Manizales", "Florencia", 0), 		Ciudad("Manizales", "Ibague", 0), 		Ciudad("Manizales", "Leticia", 0), 			Ciudad("Manizales", "Monteria", 0), 			Ciudad("Manizales", "Manizales", 0), 			Ciudad("Manizales", "Medellin", 0), 			Ciudad("Manizales", "Neiva", 0), 			Ciudad("Manizales", "Pasto", 0), 				Ciudad("Manizales", "Popayan", 0), 			Ciudad("Manizales", "Pereira", 0), 				Ciudad("Manizales", "Riohacha", 0), 			Ciudad("Manizales", "San Andres", 0), 				Ciudad("Manizales", "Santa Marta", 0), 			Ciudad("Manizales", "Tumaco", 0), 			Ciudad("Manizales", "Valledupar", 0), 				Ciudad("Manizales", "Villavicencio", 0), 				Ciudad("Manizales", "Yopal", 0),},
	/*Medellin			*/	 { Ciudad("Medellin", "Armenia", 0), 		Ciudad("Medellin", "Bucaramanga", 1), 			Ciudad("Medellin", "Barrancabermeja", 0), 			Ciudad("Medellin", "Barranquilla", 1), 			Ciudad("Medellin", "Bogota", 1), 			Ciudad("Medellin", "Cucuta", 1), 				Ciudad("Medellin", "Cartagena", 1), 			Ciudad("Medellin", "Cali", 1), 			Ciudad("Medellin", "Florencia", 0), 		Ciudad("Medellin", "Ibague", 0), 		Ciudad("Medellin", "Leticia", 0), 			Ciudad("Medellin", "Monteria", 0), 				Ciudad("Medellin", "Manizales", 0), 			Ciudad("Medellin", "Medellin", 0), 				Ciudad("Medellin", "Neiva", 0), 			Ciudad("Medellin", "Pasto", 0), 				Ciudad("Medellin", "Popayan", 0), 			Ciudad("Medellin", "Pereira", 0), 				Ciudad("Medellin", "Riohacha", 0), 				Ciudad("Medellin", "San Andres", 0), 				Ciudad("Medellin", "Santa Marta", 1), 			Ciudad("Medellin", "Tumaco", 0), 			Ciudad("Medellin", "Valledupar", 0), 				Ciudad("Medellin", "Villavicencio", 0), 				Ciudad("Medellin", "Yopal", 0),},
	/*Neiva				*/	 { Ciudad("Neiva", "Armenia", 0),			Ciudad("Neiva", "Bucaramanga", 0), 				Ciudad("Neiva", "Barrancabermeja", 0), 				Ciudad("Neiva", "Barranquilla", 0), 			Ciudad("Neiva", "Bogota", 1), 				Ciudad("Neiva", "Cucuta", 0), 					Ciudad("Neiva", "Cartagena", 0), 				Ciudad("Neiva", "Cali", 0), 			Ciudad("Neiva", "Florencia", 0), 			Ciudad("Neiva", "Ibague", 0), 			Ciudad("Neiva", "Leticia", 0), 				Ciudad("Neiva", "Monteria", 0), 				Ciudad("Neiva", "Manizales", 0), 				Ciudad("Neiva", "Medellin", 0), 				Ciudad("Neiva", "Neiva", 0), 				Ciudad("Neiva", "Pasto", 0), 					Ciudad("Neiva", "Popayan", 0), 				Ciudad("Neiva", "Pereira", 0), 					Ciudad("Neiva", "Riohacha", 0), 				Ciudad("Neiva", "San Andres", 0), 					Ciudad("Neiva", "Santa Marta", 0), 				Ciudad("Neiva", "Tumaco", 0), 				Ciudad("Neiva", "Valledupar", 0), 					Ciudad("Neiva", "Villavicencio", 0),		 			Ciudad("Neiva", "Yopal", 0),},
	/*Pasto 			*/	 { Ciudad("Pasto", "Armenia", 0),			Ciudad("Pasto", "Bucaramanga", 0), 				Ciudad("Pasto", "Barrancabermeja", 0), 				Ciudad("Pasto", "Barranquilla", 0), 			Ciudad("Pasto", "Bogota", 1), 				Ciudad("Pasto", "Cucuta", 0), 					Ciudad("Pasto", "Cartagena", 0), 				Ciudad("Pasto", "Cali", 1), 			Ciudad("Pasto", "Florencia", 0), 			Ciudad("Pasto", "Ibague", 0), 			Ciudad("Pasto", "Leticia", 0), 				Ciudad("Pasto", "Monteria", 0), 				Ciudad("Pasto", "Manizales", 0), 				Ciudad("Pasto", "Medellin", 0),					Ciudad("Pasto", "Neiva", 0), 				Ciudad("Pasto", "Pasto", 0), 					Ciudad("Pasto", "Popayan", 0), 				Ciudad("Pasto", "Pereira", 0), 					Ciudad("Pasto", "Riohacha", 0), 				Ciudad("Pasto", "San Andres", 0), 					Ciudad("Pasto", "Santa Marta", 0), 				Ciudad("Pasto", "Tumaco", 0), 				Ciudad("Pasto", "Valledupar", 0), 					Ciudad("Pasto", "Villavicencio", 0), 					Ciudad("Pasto", "Yopal", 0),},
	/*Popayan			*/	 { Ciudad("Popayan", "Armenia", 0), 		Ciudad("Popayan", "Bucaramanga", 0), 			Ciudad("Popayan", "Barrancabermeja", 0), 			Ciudad("Popayan", "Barranquilla", 0), 			Ciudad("Popayan", "Bogota", 1), 			Ciudad("Popayan", "Cucuta", 0), 				Ciudad("Popayan", "Cartagena", 0), 				Ciudad("Popayan", "Cali", 0), 			Ciudad("Popayan", "Florencia", 0), 			Ciudad("Popayan", "Ibague", 0), 		Ciudad("Popayan", "Leticia", 0), 			Ciudad("Popayan", "Monteria", 0), 				Ciudad("Popayan", "Manizales", 0), 				Ciudad("Popayan", "Medellin", 0), 				Ciudad("Popayan", "Neiva", 0), 				Ciudad("Popayan", "Pasto", 0), 					Ciudad("Popayan", "Popayan", 0), 			Ciudad("Popayan", "Pereira", 0), 				Ciudad("Popayan", "Riohacha", 0), 				Ciudad("Popayan", "San Andres", 0), 				Ciudad("Popayan", "Santa Marta", 0), 			Ciudad("Popayan", "Tumaco", 0), 			Ciudad("Popayan", "Valledupar", 0), 				Ciudad("Popayan", "Villavicencio", 0), 					Ciudad("Popayan", "Yopal", 0),},
	/*Pereira			*/	 { Ciudad("Pereira", "Armenia", 0), 		Ciudad("Pereira", "Bucaramanga", 0), 			Ciudad("Pereira", "Barrancabermeja", 0), 			Ciudad("Pereira", "Barranquilla", 0), 			Ciudad("Pereira", "Bogota", 1), 			Ciudad("Pereira", "Cucuta", 0), 				Ciudad("Pereira", "Cartagena", 0), 				Ciudad("Pereira", "Cali", 0), 			Ciudad("Pereira", "Florencia", 0), 			Ciudad("Pereira", "Ibague", 0), 		Ciudad("Pereira", "Leticia", 0), 			Ciudad("Pereira", "Monteria", 0), 				Ciudad("Pereira", "Manizales", 0), 				Ciudad("Pereira", "Medellin", 0), 				Ciudad("Pereira", "Neiva", 0), 				Ciudad("Pereira", "Pasto", 0), 					Ciudad("Pereira", "Popayan", 0), 			Ciudad("Pereira", "Pereira", 0), 				Ciudad("Pereira", "Riohacha", 0), 				Ciudad("Pereira", "San Andres", 0), 				Ciudad("Pereira", "Santa Marta", 0), 			Ciudad("Pereira", "Tumaco", 0), 			Ciudad("Pereira", "Valledupar", 0),	 				Ciudad("Pereira", "Villavicencio", 0), 					Ciudad("Pereira", "Yopal", 0),},
	/*Riohacha			*/	 { Ciudad("Riohacha", "Armenia", 0),		Ciudad("Riohacha", "Bucaramanga", 0), 			Ciudad("Riohacha", "Barrancabermeja", 0), 			Ciudad("Riohacha", "Barranquilla", 0), 			Ciudad("Riohacha", "Bogota", 1), 			Ciudad("Riohacha", "Cucuta", 0), 				Ciudad("Riohacha", "Cartagena", 0), 			Ciudad("Riohacha", "Cali", 0), 			Ciudad("Riohacha", "Florencia", 0), 		Ciudad("Riohacha", "Ibague", 0), 		Ciudad("Riohacha", "Leticia", 0), 			Ciudad("Riohacha", "Monteria", 0), 				Ciudad("Riohacha", "Manizales", 0), 			Ciudad("Riohacha", "Medellin", 0), 				Ciudad("Riohacha", "Neiva", 0), 			Ciudad("Riohacha", "Pasto", 0), 				Ciudad("Riohacha", "Popayan", 0), 			Ciudad("Riohacha", "Pereira", 0), 				Ciudad("Riohacha", "Riohacha", 0), 				Ciudad("Riohacha", "San Andres", 0),	 			Ciudad("Riohacha", "Santa Marta", 0), 			Ciudad("Riohacha", "Tumaco", 0), 			Ciudad("Riohacha", "Valledupar", 0), 				Ciudad("Riohacha", "Villavicencio", 0), 				Ciudad("Riohacha", "Yopal", 0),},
	/*San Andres		*/	 { Ciudad("San Andres", "Armenia", 0), 		Ciudad("San Andres", "Bucaramanga", 0), 		Ciudad("San Andres", "Barrancabermeja", 0), 		Ciudad("San Andres", "Barranquilla", 0), 		Ciudad("San Andres", "Bogota", 1), 			Ciudad("San Andres", "Cucuta", 0), 				Ciudad("San Andres", "Cartagena", 0), 			Ciudad("San Andres", "Cali", 0), 		Ciudad("San Andres", "Florencia", 0), 		Ciudad("San Andres", "Ibague", 0), 		Ciudad("San Andres", "Leticia", 0), 		Ciudad("San Andres", "Monteria", 0), 			Ciudad("San Andres", "Manizales", 0), 			Ciudad("San Andres", "Medellin", 0), 			Ciudad("San Andres", "Neiva", 0), 			Ciudad("San Andres", "Pasto", 0), 				Ciudad("San Andres", "Popayan", 0),			Ciudad("San Andres", "Pereira", 0), 			Ciudad("San Andres", "Riohacha", 0), 			Ciudad("San Andres", "San Andres", 0), 				Ciudad("San Andres", "Santa Marta", 0), 		Ciudad("San Andres", "Tumaco", 0), 			Ciudad("San Andres", "Valledupar", 0), 				Ciudad("San Andres", "Villavicencio", 0), 				Ciudad("San Andres", "Yopal", 0),},
	/*Santa Marta		*/	 { Ciudad("Santa Marta", "Armenia", 0),		Ciudad("Santa Marta", "Bucaramanga", 0), 		Ciudad("Santa Marta", "Barrancabermeja", 0), 		Ciudad("Santa Marta", "Barranquilla", 0), 		Ciudad("Santa Marta", "Bogota", 1), 		Ciudad("Santa Marta", "Cucuta", 0),		 		Ciudad("Santa Marta", "Cartagena", 0), 			Ciudad("Santa Marta", "Cali", 0), 		Ciudad("Santa Marta", "Florencia", 0), 		Ciudad("Santa Marta", "Ibague", 0), 	Ciudad("Santa Marta", "Leticia", 0), 		Ciudad("Santa Marta", "Monteria", 0), 			Ciudad("Santa Marta", "Manizales", 0), 			Ciudad("Santa Marta", "Medellin", 1), 			Ciudad("Santa Marta", "Neiva", 0), 			Ciudad("Santa Marta", "Pasto", 0), 				Ciudad("Santa Marta", "Popayan", 0), 		Ciudad("Santa Marta", "Pereira", 0), 			Ciudad("Santa Marta", "Riohacha", 0), 			Ciudad("Santa Marta", "San Andres", 0), 			Ciudad("Santa Marta", "Santa Marta", 0), 		Ciudad("Santa Marta", "Tumaco", 0), 		Ciudad("Santa Marta", "Valledupar", 0), 			Ciudad("Santa Marta", "Villavicencio", 0), 				Ciudad("Santa Marta", "Yopal", 0),},
	/*Tumaco			*/	 { Ciudad("Tumaco", "Armenia", 0),			Ciudad("Tumaco", "Bucaramanga", 0),	 			Ciudad("Tumaco", "Barrancabermeja", 0), 			Ciudad("Tumaco", "Barranquilla", 0), 			Ciudad("Tumaco", "Bogota", 0), 				Ciudad("Tumaco", "Cucuta", 0), 					Ciudad("Tumaco", "Cartagena", 0), 				Ciudad("Tumaco", "Cali", 1), 			Ciudad("Tumaco", "Florencia", 0), 			Ciudad("Tumaco", "Ibague", 0), 			Ciudad("Tumaco", "Leticia", 0), 			Ciudad("Tumaco", "Monteria", 0), 				Ciudad("Tumaco", "Manizales", 0), 				Ciudad("Tumaco", "Medellin", 0), 				Ciudad("Tumaco", "Neiva", 0), 				Ciudad("Tumaco", "Pasto", 0), 					Ciudad("Tumaco", "Popayan", 0), 			Ciudad("Tumaco", "Pereira", 0), 				Ciudad("Tumaco", "Riohacha", 0), 				Ciudad("Tumaco", "San Andres", 0), 					Ciudad("Tumaco", "Santa Marta", 0), 			Ciudad("Tumaco", "Tumaco", 0), 				Ciudad("Tumaco", "Valledupar", 0), 					Ciudad("Tumaco", "Villavicencio", 0), 					Ciudad("Tumaco", "Yopal", 0),},
	/*Valledupar		*/	 { Ciudad("Valledupar", "Armenia", 0),		Ciudad("Valledupar", "Bucaramanga", 0),	 		Ciudad("Valledupar", "Barrancabermeja", 0), 		Ciudad("Valledupar", "Barranquilla", 0), 		Ciudad("Valledupar", "Bogota", 1), 			Ciudad("Valledupar", "Cucuta", 0), 				Ciudad("Valledupar", "Cartagena", 0), 			Ciudad("Valledupar", "Cali", 0), 		Ciudad("Valledupar", "Florencia", 0), 		Ciudad("Valledupar", "Ibague", 0), 		Ciudad("Valledupar", "Leticia", 0), 		Ciudad("Valledupar", "Monteria", 0), 			Ciudad("Valledupar", "Manizales", 0), 			Ciudad("Valledupar", "Medellin", 0), 			Ciudad("Valledupar", "Neiva", 0), 			Ciudad("Valledupar", "Pasto", 0), 				Ciudad("Valledupar", "Popayan", 0), 		Ciudad("Valledupar", "Pereira", 0), 			Ciudad("Valledupar", "Riohacha", 0), 			Ciudad("Valledupar", "San Andres", 0), 				Ciudad("Valledupar", "Santa Marta", 0),	 		Ciudad("Valledupar", "Tumaco", 0), 			Ciudad("Valledupar", "Valledupar", 0), 				Ciudad("Valledupar", "Villavicencio", 0), 				Ciudad("Valledupar", "Yopal", 0),},
	/*Villavicencio		*/	 { Ciudad("Villavicencio", "Armenia", 0),	Ciudad("Villavicencio", "Bucaramanga", 0), 		Ciudad("Villavicencio", "Barrancabermeja", 0), 		Ciudad("Villavicencio", "Barranquilla", 0), 	Ciudad("Villavicencio", "Bogota", 1), 		Ciudad("Villavicencio", "Cucuta", 0), 			Ciudad("Villavicencio", "Cartagena", 0), 		Ciudad("Villavicencio", "Cali", 0), 	Ciudad("Villavicencio", "Florencia", 0), 	Ciudad("Villavicencio", "Ibague", 0), 	Ciudad("Villavicencio", "Leticia", 0), 		Ciudad("Villavicencio", "Monteria", 0), 		Ciudad("Villavicencio", "Manizales", 0), 		Ciudad("Villavicencio", "Medellin", 0), 		Ciudad("Villavicencio", "Neiva", 0), 		Ciudad("Villavicencio", "Pasto", 0), 			Ciudad("Villavicencio", "Popayan", 0), 		Ciudad("Villavicencio", "Pereira", 0), 			Ciudad("Villavicencio", "Riohacha", 0), 		Ciudad("Villavicencio", "San Andres", 0), 			Ciudad("Villavicencio", "Santa Marta", 0), 		Ciudad("Villavicencio", "Tumaco", 0), 		Ciudad("Villavicencio", "Valledupar", 0), 			Ciudad("Villavicencio", "Villavicencio", 0), 			Ciudad("Villavicencio", "Yopal", 0),},
	/*Yopal				*/	 { Ciudad("Yopal", "Armenia", 0),			Ciudad("Yopal", "Bucaramanga", 0), 				Ciudad("Yopal", "Barrancabermeja", 0), 				Ciudad("Yopal", "Barranquilla", 0), 			Ciudad("Yopal", "Bogota", 1), 				Ciudad("Yopal", "Cucuta", 0), 					Ciudad("Yopal", "Cartagena", 0), 				Ciudad("Yopal", "Cali", 0), 			Ciudad("Yopal", "Florencia", 0), 			Ciudad("Yopal", "Ibague", 0), 			Ciudad("Yopal", "Leticia", 0), 				Ciudad("Yopal", "Monteria", 0), 				Ciudad("Yopal", "Manizales", 0), 				Ciudad("Yopal", "Medellin", 0), 				Ciudad("Yopal", "Neiva", 0), 				Ciudad("Yopal", "Pasto", 0), 					Ciudad("Yopal", "Popayan", 0), 				Ciudad("Yopal", "Pereira", 0), 					Ciudad("Yopal", "Riohacha", 0), 				Ciudad("Yopal", "San Andres", 0), 					Ciudad("Yopal", "Santa Marta", 0), 				Ciudad("Yopal", "Tumaco", 0), 				Ciudad("Yopal", "Valledupar", 0), 					Ciudad("Yopal", "Villavicencio", 0), 					Ciudad("Yopal", "Yopal", 0),}
};

Ciudad matrizCuadrada3[25][25];
Ciudad matrizCubica3[25][25];
int matriz3[25][25];
int matrizCuad3[25][25];
int matrizCubi3[25][25];
int matrizEscala1M3[25][25];
int matrizEscala2M3[25][25];

string getNombre3(int n) {
	string nombre;
	switch (n)
	{
	case 0: nombre = "Armenia";break;
	case 1: nombre = "Bucaramanga";break;
	case 2: nombre = "Barrancabermeja";break;
	case 3: nombre = "Barranquilla";break;
	case 4: nombre = "Bogota";break;
	case 5: nombre = "Cucuta";break;
	case 6: nombre = "Cartagena";break;
	case 7: nombre = "Cali";break;
	case 8: nombre = "Florencia";break;
	case 9: nombre = "Ibague";break;
	case 10: nombre = "Leticia"; break;
	case 11: nombre = "Monteria"; break;
	case 12: nombre = "Manizales"; break;
	case 13: nombre = "Medellin"; break;
	case 14: nombre = "Neiva"; break;
	case 15: nombre = "Pasto"; break;
	case 16: nombre = "Popayan"; break;
	case 17: nombre = "Pereira"; break;
	case 18: nombre = "Riohacha"; break;
	case 19: nombre = "San Andres";break;
	case 20: nombre = "Santa Marta";break;
	case 21: nombre = "Tumaco";break;
	case 22: nombre = "Valledupar";break;
	case 23: nombre = "Villavicencio";break;
	case 24: nombre = "Yopal";break;
	default:
		nombre = "vacio";
		break;
	}
	return nombre;
}
void restarMatriz3(int e) {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			matrizEscala1M3[i][j] = matrizCuad3[i][j] - matriz3[i][j];
			if (i == j) {
				matrizEscala1M3[i][j] = 0;
			}
			if (matrizEscala1M3[i][j] <= 0) {
				matrizEscala1M3[i][j] = 0;
			}
			if (e == 2) {
				matrizEscala2M3[i][j] = matrizCubi3[i][j] - matrizEscala1M3[i][j];
				matrizEscala2M3[i][j] = matrizEscala2M3[i][j] - matrizCuad3[i][j];
				matrizEscala2M3[i][j] = matrizEscala2M3[i][j] - matriz3[i][j];
				if (i == j) {
					matrizEscala2M3[i][j] = 0;
				}
				if (matrizEscala2M3[i][j] <= 0) {
					matrizEscala2M3[i][j] = 0;
				}
			}
		}
	}
};
void matrizCuadrado3() {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			for (int k = 0; k < 25; k++) {
				matrizCuad3[i][j] += matriz3[i][k] * matriz3[k][j];
				if (matrizCuad3[i][j] >= 1) {
					matrizCuad3[i][j] = 1;
				}
			}
		}
	}
};
void matrizCubo3() {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			for (int k = 0; k < 25; k++) {
				matrizCubi3[i][j] += matrizCuad3[i][k] * matriz3[k][j];
				if (matrizCubi3[i][j] >= 1) {
					matrizCubi3[i][j] = 1;
				}
			}
		}
	}
}
int  rellenarM3() {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			matriz3[i][j] = matrizMapa3[i][j].getValor();
		}
	}
	return 0;
};
void escala1M3() {
	rellenarM3();
	matrizCuadrado3();
	restarMatriz3(1);
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			int v = matrizEscala1M3[i][j];
			string o = getNombre3(i);
			string d = getNombre3(j);
			matrizCuadrada3[i][j].setValor(v);
			matrizCuadrada3[i][j].setOrigen(o);
			matrizCuadrada3[i][j].setDestino(d);
		}
	}
}
void escala2M3() {
	rellenarM3();
	matrizCuadrado3();
	matrizCubo3();
	restarMatriz3(2);
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			int v = matrizEscala2M3[i][j];
			string o = getNombre3(i);
			string d = getNombre3(j);
			matrizCubica3[i][j].setValor(v);
			matrizCubica3[i][j].setOrigen(o);
			matrizCubica3[i][j].setDestino(d);
		}
	}
}
