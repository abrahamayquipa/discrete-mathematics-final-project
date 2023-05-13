#include <iostream>
#include "Ciudad.h"
using namespace std;

Ciudad matrizMapa2[25][25] = {
	//Belice											Bogota											Cali										Cancùn											Caracas											Ciudad de Guatemala											Ciudad de Mèxico										Punta Cana											Ciudad de Panama										 Flores											Guayaquil											La Ceiba											La Habana											Liberia											Lima										Managua											Medellin										Quito											Roatàn											San Josè de Costa Rica											San Juan											San Pedro de Sula											San Salvador											Santo Domingo										Tegucigalpa
	/*Belice 					*/		{ Ciudad("Belice", "Belice", 0),				Ciudad("Belice", "Bogota", 0),					Ciudad("Belice", "Cali", 0),				Ciudad("Belice", "Cancún", 0),					Ciudad("Belice", "Caracas", 0),					Ciudad("Belice", "Ciudad de Guatemala", 0),					Ciudad("Belice", "Ciudad de Mexico", 0),				Ciudad("Belice", "Punta Cana", 0),					Ciudad("Belice", "Ciudad de Panama", 0),				 Ciudad("Belice", "Flores", 0),					Ciudad("Belice", "Guayaquil", 0),					Ciudad("Belice", "La Ceiba", 0),					Ciudad("Belice", "La Habana", 0),					Ciudad("Belice", "Libera", 0),					Ciudad("Belice", "Lima", 0),				Ciudad("Belice", "Managua", 0),					Ciudad("Belice", "Medellin", 0),				Ciudad("Belice", "Quito", 0),					Ciudad("Belice", "Roatán", 0),					Ciudad("Belice", "San Jose de Costa Rica", 0),                  Ciudad("Belice", "San Juan", 0),					Ciudad("Belice", "San Pedro de Sula", 0),					Ciudad("Belice", "San Salvador", 1),					Ciudad("Belice", "San Domingo", 0),					Ciudad("Belice", "Tegucigalpa", 0),					},
	/*Bogota 					*/		{ Ciudad("Bogota", "Belice", 0),				Ciudad("Bogota", "Bogota", 0),					Ciudad("Bogota", "Cali", 0),				Ciudad("Bogota", "Cancún", 1),					Ciudad("Bogota", "Caracas", 0),					Ciudad("Bogota", "Ciudad de Guatemala", 1),					Ciudad("Bogota", "Ciudad de Mexico", 1),				Ciudad("Bogota", "Punta Cana", 1),					Ciudad("Bogota", "Ciudad de Panama", 1),				 Ciudad("Bogota", "Flores", 0),					Ciudad("Bogota", "Guayaquil", 0),					Ciudad("Bogota", "La Ceiba", 0),					Ciudad("Bogota", "La Habana", 0),					Ciudad("Bogota", "Libera", 0),					Ciudad("Bogota", "Lima", 0),				Ciudad("Bogota", "Managua", 0),					Ciudad("Bogota", "Medellin", 0),				Ciudad("Bogota", "Quito", 0),					Ciudad("Bogota", "Roatán", 0),					Ciudad("Bogota", "San Jose de Costa Rica", 1),                  Ciudad("Bogota", "San Juan", 1),					Ciudad("Bogota", "San Pedro de Sula", 0),					Ciudad("Bogota", "San Salvador", 1),					Ciudad("Bogota", "San Domingo", 1),					Ciudad("Bogota", "Tegucigalpa", 0),					},
	/*Cali 						*/		{ Ciudad("Cali", "Belice", 0),					Ciudad("Cali", "Bogota", 0),					Ciudad("Cali", "Cali", 0),					Ciudad("Cali", "Cancún", 0),					Ciudad("Cali", "Caracas", 0),					Ciudad("Cali", "Ciudad de Guatemala", 0),					Ciudad("Cali", "Ciudad de Mexico", 0),					Ciudad("Cali", "Punta Cana", 0),					Ciudad("Cali", "Ciudad de Panama", 0),					 Ciudad("Cali", "Flores", 0),					Ciudad("Cali", "Guayaquil", 0),						Ciudad("Cali", "La Ceiba", 0),						Ciudad("Cali", "La Habana", 0),						Ciudad("Cali", "Libera", 0),					Ciudad("Cali", "Lima", 0),					Ciudad("Cali", "Managua", 0),					Ciudad("Cali", "Medellin", 0),					Ciudad("Cali", "Quito", 0),						Ciudad("Cali", "Roatán", 0),					Ciudad("Cali", "San Jose de Costa Rica", 0),					Ciudad("Cali", "San Juan", 0),						Ciudad("Cali", "San Pedro de Sula", 0),						Ciudad("Cali", "San Salvador", 1),						Ciudad("Cali", "San Domingo", 0),					Ciudad("Cali", "Tegucigalpa", 0),					},
	/*Cancùn 					*/		{ Ciudad("Cancún", "Belice", 0),				Ciudad("Cancún", "Bogota", 1),					Ciudad("Cancún", "Cali", 0),				Ciudad("Cancún", "Cancún", 0),					Ciudad("Cancún", "Caracas", 0),					Ciudad("Cancún", "Ciudad de Guatemala", 0),					Ciudad("Cancún", "Ciudad de Mexico", 0),				Ciudad("Cancún", "Punta Cana", 0),					Ciudad("Cancún", "Ciudad de Panama", 0),				 Ciudad("Cancún", "Flores", 0),					Ciudad("Cancún", "Guayaquil", 0),					Ciudad("Cancún", "La Ceiba", 0),					Ciudad("Cancún", "La Habana", 0),					Ciudad("Cancún", "Libera", 0),					Ciudad("Cancún", "Lima", 0),				Ciudad("Cancún", "Managua", 0),					Ciudad("Cancún", "Medellin", 0),				Ciudad("Cancún", "Quito", 0),					Ciudad("Cancún", "Roatán", 0),					Ciudad("Cancún", "San Jose de Costa Rica", 0),                  Ciudad("Cancún", "San Juan", 0),					Ciudad("Cancún", "San Pedro de Sula", 0),					Ciudad("Cancún", "San Salvador", 1),					Ciudad("Cancún", "San Domingo", 0),					Ciudad("Cancún", "Tegucigalpa", 0),					},
	/*Caracas 					*/		{ Ciudad("Caracas", "Belice", 0),				Ciudad("Caracas", "Bogota", 0),					Ciudad("Caracas", "Cali", 0),				Ciudad("Caracas", "Cancún", 0),					Ciudad("Caracas", "Caracas", 0),				Ciudad("Caracas", "Ciudad de Guatemala", 0),				Ciudad("Caracas", "Ciudad de Mexico", 0),				Ciudad("Caracas", "Punta Cana", 0),					Ciudad("Caracas", "Ciudad de Panama", 0),                Ciudad("Caracas", "Flores", 0),				Ciudad("Caracas", "Guayaquil", 0),					Ciudad("Caracas", "La Ceiba", 0),					Ciudad("Caracas", "La Habana", 0),					Ciudad("Caracas", "Libera", 0),					Ciudad("Caracas", "Lima", 0),				Ciudad("Caracas", "Managua", 0),				Ciudad("Caracas", "Medellin", 0),				Ciudad("Caracas", "Quito", 0),					Ciudad("Caracas", "Roatán", 0),					Ciudad("Caracas", "San Jose de Costa Rica", 1),                 Ciudad("Caracas", "San Juan", 0),					Ciudad("Caracas", "San Pedro de Sula", 0),					Ciudad("Caracas", "San Salvador", 0),					Ciudad("Caracas", "San Domingo", 0),				Ciudad("Caracas", "Tegucigalpa", 0),				},
	/*Ciudad de Guatemala 		*/		{ Ciudad("Ciudad de Guatemala", "Belice", 0),   Ciudad("Ciudad de Guatemala", "Bogota", 1),		Ciudad("Ciudad de Guatemala", "Cali", 0),   Ciudad("Ciudad de Guatemala", "Cancún", 0),     Ciudad("Ciudad de Guatemala", "Caracas", 0),	Ciudad("Ciudad de Guatemala", "Ciudad de Guatemala", 0),	Ciudad("Ciudad de Guatemala", "Ciudad de Mexico", 0),	Ciudad("Ciudad de Guatemala", "Punta Cana", 0),		Ciudad("Ciudad de Guatemala", "Ciudad de Panama", 0),    Ciudad("Ciudad de Guatemala", "Flores", 1),    Ciudad("Ciudad de Guatemala", "Guayaquil", 0),		Ciudad("Ciudad de Guatemala", "La Ceiba", 0),       Ciudad("Ciudad de Guatemala", "La Habana", 0),      Ciudad("Ciudad de Guatemala", "Libera", 0),     Ciudad("Ciudad de Guatemala", "Lima", 0),   Ciudad("Ciudad de Guatemala", "Managua", 0),    Ciudad("Ciudad de Guatemala", "Medellin", 0),   Ciudad("Ciudad de Guatemala", "Quito", 0),      Ciudad("Ciudad de Guatemala", "Roatán", 0),     Ciudad("Ciudad de Guatemala", "San Jose de Costa Rica", 1),     Ciudad("Ciudad de Guatemala", "San Juan", 0),		Ciudad("Ciudad de Guatemala", "San Pedro de Sula", 1),      Ciudad("Ciudad de Guatemala", "San Salvador", 1),       Ciudad("Ciudad de Guatemala", "San Domingo", 0),    Ciudad("Ciudad de Guatemala", "Tegucigalpa", 1),    },
	/*Ciudad de Mèxico 			*/		{ Ciudad("Ciudad de Mexico", "Belice", 0),      Ciudad("Ciudad de Mexico", "Bogota", 1),		Ciudad("Ciudad de Mexico", "Cali", 0),      Ciudad("Ciudad de Mexico", "Cancún", 0),        Ciudad("Ciudad de Mexico", "Caracas", 0),		Ciudad("Ciudad de Mexico", "Ciudad de Guatemala", 0),		Ciudad("Ciudad de Mexico", "Ciudad de Mexico", 0),		Ciudad("Ciudad de Mexico", "Punta Cana", 0),		Ciudad("Ciudad de Mexico", "Ciudad de Panama", 0),       Ciudad("Ciudad de Mexico", "Flores", 0),       Ciudad("Ciudad de Mexico", "Guayaquil", 0),			Ciudad("Ciudad de Mexico", "La Ceiba", 0),          Ciudad("Ciudad de Mexico", "La Habana", 0),         Ciudad("Ciudad de Mexico", "Libera", 0),        Ciudad("Ciudad de Mexico", "Lima", 1),      Ciudad("Ciudad de Mexico", "Managua", 0),       Ciudad("Ciudad de Mexico", "Medellin", 0),      Ciudad("Ciudad de Mexico", "Quito", 0),			Ciudad("Ciudad de Mexico", "Roatán", 0),        Ciudad("Ciudad de Mexico", "San Jose de Costa Rica", 1),        Ciudad("Ciudad de Mexico", "San Juan", 0),			Ciudad("Ciudad de Mexico", "San Pedro de Sula", 0),         Ciudad("Ciudad de Mexico", "San Salvador", 1),          Ciudad("Ciudad de Mexico", "San Domingo", 0),       Ciudad("Ciudad de Mexico", "Tegucigalpa", 0),		},
	/*Ciudad de Panama 			*/		{ Ciudad("Ciudad de Panama", "Belice", 0),      Ciudad("Ciudad de Panama", "Bogota", 1),		Ciudad("Ciudad de Panama", "Cali", 0),      Ciudad("Ciudad de Panama", "Cancún", 0),	    Ciudad("Ciudad de Panama", "Caracas", 0),		Ciudad("Ciudad de Panama", "Ciudad de Guatemala", 0),		Ciudad("Ciudad de Panama", "Ciudad de Mexico", 0),		Ciudad("Ciudad de Panama", "Punta Cana", 0),		Ciudad("Ciudad de Panama", "Ciudad de Panama", 0),       Ciudad("Ciudad de Panama", "Flores", 0),       Ciudad("Ciudad de Panama", "Guayaquil", 0),			Ciudad("Ciudad de Panama", "La Ceiba", 0),          Ciudad("Ciudad de Panama", "La Habana", 0),         Ciudad("Ciudad de Panama", "Libera", 0),        Ciudad("Ciudad de Panama", "Lima", 0),      Ciudad("Ciudad de Panama", "Managua", 0),       Ciudad("Ciudad de Panama", "Medellin", 0),      Ciudad("Ciudad de Panama", "Quito", 0),			Ciudad("Ciudad de Panama", "Roatán", 0),        Ciudad("Ciudad de Panama", "San Jose de Costa Rica", 1),        Ciudad("Ciudad de Panama", "San Juan", 0),			Ciudad("Ciudad de Panama", "San Pedro de Sula", 0),         Ciudad("Ciudad de Panama", "San Salvador", 1),          Ciudad("Ciudad de Panama", "San Domingo", 0),       Ciudad("Ciudad de Panama", "Tegucigalpa", 0),		},
	/*Flores 					*/		{ Ciudad("Flores", "Belice", 0),				Ciudad("Flores", "Bogota", 0),					Ciudad("Flores", "Cali", 0),				Ciudad("Flores", "Cancún", 0),					Ciudad("Flores", "Caracas", 0),					Ciudad("Flores", "Ciudad de Guatemala", 1),					Ciudad("Flores", "Ciudad de Mexico", 0),				Ciudad("Flores", "Punta Cana", 0),					Ciudad("Flores", "Ciudad de Panama", 0),                 Ciudad("Flores", "Flores", 0),					Ciudad("Flores", "Guayaquil", 0),					Ciudad("Flores", "La Ceiba", 0),					Ciudad("Flores", "La Habana", 0),					Ciudad("Flores", "Libera", 0),					Ciudad("Flores", "Lima", 0),				Ciudad("Flores", "Managua", 0),					Ciudad("Flores", "Medellin", 0),				Ciudad("Flores", "Quito", 0),					Ciudad("Flores", "Roatán", 0),					Ciudad("Flores", "San Jose de Costa Rica", 0),                  Ciudad("Flores", "San Juan", 0),					Ciudad("Flores", "San Pedro de Sula", 0),					Ciudad("Flores", "San Salvador", 0),					Ciudad("Flores", "San Domingo", 0),					Ciudad("Flores", "Tegucigalpa", 0),					},
	/*Guayaquil 				*/		{ Ciudad("Guayaquil", "Belice", 0),				Ciudad("Guayaquil", "Bogota", 0),				Ciudad("Guayaquil", "Cali", 0),				Ciudad("Guayaquil", "Cancún", 0),				Ciudad("Guayaquil", "Caracas", 0),				Ciudad("Guayaquil", "Ciudad de Guatemala", 0),				Ciudad("Guayaquil", "Ciudad de Mexico", 0),				Ciudad("Guayaquil", "Punta Cana", 0),				Ciudad("Guayaquil", "Ciudad de Panama", 0),              Ciudad("Guayaquil", "Flores", 0),				Ciudad("Guayaquil", "Guayaquil", 0),				Ciudad("Guayaquil", "La Ceiba", 0),					Ciudad("Guayaquil", "La Habana", 0),				Ciudad("Guayaquil", "Libera", 0),				Ciudad("Guayaquil", "Lima", 1),				Ciudad("Guayaquil", "Managua", 0),				Ciudad("Guayaquil", "Medellin", 0),				Ciudad("Guayaquil", "Quito", 0),				Ciudad("Guayaquil", "Roatán", 0),               Ciudad("Guayaquil", "San Jose de Costa Rica", 0),               Ciudad("Guayaquil", "San Juan", 0),					Ciudad("Guayaquil", "San Pedro de Sula", 0),				Ciudad("Guayaquil", "San Salvador", 1),					Ciudad("Guayaquil", "San Domingo", 0),              Ciudad("Guayaquil", "Tegucigalpa", 0),				},
	/*La Ceiba 					*/		{ Ciudad("La Ceiba", "Belice", 0),				Ciudad("La Ceiba", "Bogota", 0),				Ciudad("La Ceiba", "Cali", 0),				Ciudad("La Ceiba", "Cancún", 0),				Ciudad("La Ceiba", "Caracas", 0),				Ciudad("La Ceiba", "Ciudad de Guatemala", 0),				Ciudad("La Ceiba", "Ciudad de Mexico", 0),				Ciudad("La Ceiba", "Punta Cana", 0),				Ciudad("La Ceiba", "Ciudad de Panama", 0),               Ciudad("La Ceiba", "Flores", 0),				Ciudad("La Ceiba", "Guayaquil", 0),					Ciudad("La Ceiba", "La Ceiba", 0),					Ciudad("La Ceiba", "La Habana", 0),					Ciudad("La Ceiba", "Libera", 0),				Ciudad("La Ceiba", "Lima", 0),				Ciudad("La Ceiba", "Managua", 0),				Ciudad("La Ceiba", "Medellin", 0),				Ciudad("La Ceiba", "Quito", 0),					Ciudad("La Ceiba", "Roatán", 0),                Ciudad("La Ceiba", "San Jose de Costa Rica", 0),                Ciudad("La Ceiba", "San Juan", 0),					Ciudad("La Ceiba", "San Pedro de Sula", 0),					Ciudad("La Ceiba", "San Salvador", 0),					Ciudad("La Ceiba", "San Domingo", 0),				Ciudad("La Ceiba", "Tegucigalpa", 1),				},
	/*La Habana					*/		{ Ciudad("La Habana", "Belice", 0),				Ciudad("La Habana", "Bogota", 0),				Ciudad("La Habana", "Cali", 0),				Ciudad("La Habana", "Cancún", 0),				Ciudad("La Habana", "Caracas", 0),				Ciudad("La Habana", "Ciudad de Guatemala", 0),				Ciudad("La Habana", "Ciudad de Mexico", 0),				Ciudad("La Habana", "Punta Cana", 0),				Ciudad("La Habana", "Ciudad de Panama", 0),              Ciudad("La Habana", "Flores", 0),				Ciudad("La Habana", "Guayaquil", 0),				Ciudad("La Habana", "La Ceiba", 0),					Ciudad("La Habana", "La Habana", 0),				Ciudad("La Habana", "Libera", 0),				Ciudad("La Habana", "Lima", 0),				Ciudad("La Habana", "Managua", 0),				Ciudad("La Habana", "Medellin", 0),				Ciudad("La Habana", "Quito", 0),				Ciudad("La Habana", "Roatán", 0),               Ciudad("La Habana", "San Jose de Costa Rica", 0),               Ciudad("La Habana", "San Juan", 0),					Ciudad("La Habana", "San Pedro de Sula", 0),				Ciudad("La Habana", "San Salvador", 1),					Ciudad("La Habana", "San Domingo", 0),              Ciudad("La Habana", "Tegucigalpa", 0),				},
	/*Liberia 					*/		{ Ciudad("Liberia", "Belice", 0),				Ciudad("Liberia", "Bogota", 0),					Ciudad("Liberia", "Cali", 0),				Ciudad("Liberia", "Cancún", 0),					Ciudad("Liberia", "Caracas", 0),				Ciudad("Liberia", "Ciudad de Guatemala", 0),				Ciudad("Liberia", "Ciudad de Mexico", 0),				Ciudad("Liberia", "Punta Cana", 0),					Ciudad("Liberia", "Ciudad de Panama", 0),                Ciudad("Liberia", "Flores", 0),				Ciudad("Liberia", "Guayaquil", 0),					Ciudad("Liberia", "La Ceiba", 0),					Ciudad("Liberia", "La Habana", 0),					Ciudad("Liberia", "Libera", 0),					Ciudad("Liberia", "Lima", 0),				Ciudad("Liberia", "Managua", 0),				Ciudad("Liberia", "Medellin", 0),				Ciudad("Liberia", "Quito", 0),					Ciudad("Liberia", "Roatán", 0),					Ciudad("Liberia", "San Jose de Costa Rica", 0),                 Ciudad("Liberia", "San Juan", 0),					Ciudad("Liberia", "San Pedro de Sula", 0),					Ciudad("Liberia", "San Salvador", 1),					Ciudad("Liberia", "San Domingo", 0),				Ciudad("Liberia", "Tegucigalpa", 0),				},
	/*Lima						*/		{ Ciudad("Lima", "Belice", 0),					Ciudad("Lima", "Bogota", 0),					Ciudad("Lima", "Cali", 0),					Ciudad("Lima", "Cancún", 0),					Ciudad("Lima", "Caracas", 0),					Ciudad("Lima", "Ciudad de Guatemala", 0),					Ciudad("Lima", "Ciudad de Mexico", 1),					Ciudad("Lima", "Punta Cana", 0),					Ciudad("Lima", "Ciudad de Panama", 0),                   Ciudad("Lima", "Flores", 0),					Ciudad("Lima", "Guayaquil", 1),						Ciudad("Lima", "La Ceiba", 0),						Ciudad("Lima", "La Habana", 0),						Ciudad("Lima", "Libera", 0),					Ciudad("Lima", "Lima", 0),					Ciudad("Lima", "Managua", 0),					Ciudad("Lima", "Medellin", 0),					Ciudad("Lima", "Quito", 1),						Ciudad("Lima", "Roatán", 0),					Ciudad("Lima", "San Jose de Costa Rica", 1),					Ciudad("Lima", "San Juan", 0),						Ciudad("Lima", "San Pedro de Sula", 0),						Ciudad("Lima", "San Salvador", 1),						Ciudad("Lima", "San Domingo", 1),					Ciudad("Lima", "Tegucigalpa", 0),					},
	/*Managua					*/		{ Ciudad("Managua", "Belice", 0),				Ciudad("Managua", "Bogota", 0),					Ciudad("Managua", "Cali", 0),				Ciudad("Managua", "Cancún", 0),					Ciudad("Managua", "Caracas", 0),				Ciudad("Managua", "Ciudad de Guatemala", 0),				Ciudad("Managua", "Ciudad de Mexico", 0),				Ciudad("Managua", "Punta Cana", 0),					Ciudad("Managua", "Ciudad de Panama", 1),                Ciudad("Managua", "Flores", 0),				Ciudad("Managua", "Guayaquil", 0),					Ciudad("Managua", "La Ceiba", 0),					Ciudad("Managua", "La Habana", 0),					Ciudad("Managua", "Libera", 0),				    Ciudad("Managua", "Lima", 0),				Ciudad("Managua", "Managua", 0),				Ciudad("Managua", "Medellin", 0),				Ciudad("Managua", "Quito", 0),					Ciudad("Managua", "Roatán", 0),					Ciudad("Managua", "San Jose de Costa Rica", 1),                 Ciudad("Managua", "San Juan", 0),					Ciudad("Managua", "San Pedro de Sula", 0),					Ciudad("Managua", "San Salvador", 1),					Ciudad("Managua", "San Domingo", 0),				Ciudad("Managua", "Tegucigalpa", 0),				},
	/*Medellin					*/		{ Ciudad("Medellin", "Belice", 0),				Ciudad("Medellin", "Bogota", 0),				Ciudad("Medellin", "Cali", 0),				Ciudad("Medellin", "Cancún", 0),				Ciudad("Medellin", "Caracas", 0),				Ciudad("Medellin", "Ciudad de Guatemala", 0),				Ciudad("Medellin", "Ciudad de Mexico", 0),				Ciudad("Medellin", "Punta Cana", 0),				Ciudad("Medellin", "Ciudad de Panama", 0),               Ciudad("Medellin", "Flores", 0),				Ciudad("Medellin", "Guayaquil", 0),					Ciudad("Medellin", "La Ceiba", 0),					Ciudad("Medellin", "La Habana", 0),				    Ciudad("Medellin", "Libera", 0),				Ciudad("Medellin", "Lima", 0),				Ciudad("Medellin", "Managua", 0),				Ciudad("Medellin", "Medellin", 0),				Ciudad("Medellin", "Quito", 1),					Ciudad("Medellin", "Roatán", 0),                Ciudad("Medellin", "San Jose de Costa Rica", 1),                Ciudad("Medellin", "San Juan", 0),					Ciudad("Medellin", "San Pedro de Sula", 0),					Ciudad("Medellin", "San Salvador", 1),					Ciudad("Medellin", "San Domingo", 0),				Ciudad("Medellin", "Tegucigalpa", 0),				},
	/*Punta Cana 				*/		{ Ciudad("Punta Cana", "Belice", 0),			Ciudad("Punta Cana", "Bogota", 1),				Ciudad("Punta Cana", "Cali", 0),			Ciudad("Punta Cana", "Cancún", 0),				Ciudad("Punta Cana", "Caracas", 0),				Ciudad("Punta Cana", "Ciudad de Guatemala", 0),				Ciudad("Punta Cana", "Ciudad de Mexico", 0),			Ciudad("Punta Cana", "Punta Cana", 0),				Ciudad("Punta Cana", "Ciudad de Panama", 0),             Ciudad("Punta Cana", "Flores", 0),				Ciudad("Punta Cana", "Guayaquil", 0),				Ciudad("Punta Cana", "La Ceiba", 0),				Ciudad("Punta Cana", "La Habana", 0),				Ciudad("Punta Cana", "Libera", 0),			    Ciudad("Punta Cana", "Lima", 0),			Ciudad("Punta Cana", "Managua", 0),				Ciudad("Punta Cana", "Medellin", 0),			Ciudad("Punta Cana", "Quito", 0),				Ciudad("Punta Cana", "Roatán", 0),              Ciudad("Punta Cana", "San Jose de Costa Rica", 0),              Ciudad("Punta Cana", "San Juan", 0),                Ciudad("Punta Cana", "San Pedro de Sula", 0),               Ciudad("Punta Cana", "San Salvador", 0),				Ciudad("Punta Cana", "San Domingo", 0),             Ciudad("Punta Cana", "Tegucigalpa", 0),				},
	/*Quito						*/		{ Ciudad("Quito", "Belice", 0),					Ciudad("Quito", "Bogota", 0),					Ciudad("Quito", "Cali", 0),					Ciudad("Quito", "Cancún", 0),					Ciudad("Quito", "Caracas", 0),					Ciudad("Quito", "Ciudad de Guatemala", 0),					Ciudad("Quito", "Ciudad de Mexico", 0),					Ciudad("Quito", "Punta Cana", 0),					Ciudad("Quito", "Ciudad de Panama", 0),					 Ciudad("Quito", "Flores", 0),					Ciudad("Quito", "Guayaquil", 0),					Ciudad("Quito", "La Ceiba", 0),						Ciudad("Quito", "La Habana", 0),					Ciudad("Quito", "Libera", 0),					Ciudad("Quito", "Lima", 1),					Ciudad("Quito", "Managua", 0),					Ciudad("Quito", "Medellin", 1),					Ciudad("Quito", "Quito", 0),					Ciudad("Quito", "Roatán", 0),					Ciudad("Quito", "San Jose de Costa Rica", 1),					Ciudad("Quito", "San Juan", 0),						Ciudad("Quito", "San Pedro de Sula", 0),					Ciudad("Quito", "San Salvador", 1),						Ciudad("Quito", "San Domingo", 0),					Ciudad("Quito", "Tegucigalpa", 0),					},
	/*Roatàn					*/		{ Ciudad("Roatán", "Belice", 0),				Ciudad("Roatán", "Bogota", 0),					Ciudad("Roatán", "Cali", 0),				Ciudad("Roatán", "Cancún", 0),					Ciudad("Roatán", "Caracas", 0),					Ciudad("Roatán", "Ciudad de Guatemala", 0),					Ciudad("Roatán", "Ciudad de Mexico", 0),				Ciudad("Roatán", "Punta Cana", 0),					Ciudad("Roatán", "Ciudad de Panama", 0),				 Ciudad("Roatán", "Flores", 0),					Ciudad("Roatán", "Guayaquil", 0),					Ciudad("Roatán", "La Ceiba", 0),					Ciudad("Roatán", "La Habana", 0),					Ciudad("Roatán", "Libera", 0),					Ciudad("Roatán", "Lima", 0),				Ciudad("Roatán", "Managua", 0),					Ciudad("Roatán", "Medellin", 0),				Ciudad("Roatán", "Quito", 0),					Ciudad("Roatán", "Roatán", 0),					Ciudad("Roatán", "San Jose de Costa Rica", 0),                  Ciudad("Roatán", "San Juan", 0),					Ciudad("Roatán", "San Pedro de Sula", 1),					Ciudad("Roatán", "San Salvador", 1),					Ciudad("Roatán", "San Domingo", 0),					Ciudad("Roatán", "Tegucigalpa", 1),					},
	/*San Josè de Costa Rica	*/		{ Ciudad("San Jose de Costa Rica", "Belice", 0),Ciudad("San Jose de Costa Rica", "Bogota", 1),	Ciudad("San Jose de Costa Rica", "Cali", 0),Ciudad("San Jose de Costa Rica	", "Cancún", 0),Ciudad("San Jose de Costa Rica", "Caracas", 1),	Ciudad("San Jose de Costa Rica", "Ciudad de Guatemala", 1),	Ciudad("San Jose de Costa Rica", "Ciudad de Mexico", 1),Ciudad("San Jose de Costa Rica", "Punta Cana", 0),	Ciudad("San Jose de Costa Rica", "Ciudad de Panama", 1), Ciudad("San Jose de Costa Rica", "Flores", 0), Ciudad("San Jose de Costa Rica", "Guayaquil", 0),	Ciudad("San Jose de Costa Rica", "La Ceiba", 0),    Ciudad("San Jose de Costa Rica	", "La Habana", 0), Ciudad("San Jose de Costa Rica", "Libera", 0),  Ciudad("San Jose de Costa Rica", "Lima", 1),Ciudad("San Jose de Costa Rica", "Managua", 1), Ciudad("San Jose de Costa Rica", "Medellin", 1),Ciudad("San Jose de Costa Rica", "Quito", 1),   Ciudad("San Jose de Costa Rica", "Roatán", 0),  Ciudad("San Jose de Costa Rica", "San Jose de Costa Rica", 0),	Ciudad("San Jose de Costa Rica", "San Juan", 0),	Ciudad("San Jose de Costa Rica", "San Pedro de Sula", 1),	Ciudad("San Jose de Costa Rica", "San Salvador", 1),	Ciudad("San Jose de Costa Rica", "San Domingo", 1), Ciudad("San Jose de Costa Rica", "Tegucigalpa", 1), },
	/*San Juan                  */		{ Ciudad("San Juan", "Belice", 0),				Ciudad("San Juan", "Bogota", 1),				Ciudad("San Juan", "Cali", 0),				Ciudad("San Juan", "Cancún", 0),				Ciudad("San Juan", "Caracas", 0),				Ciudad("San Juan", "Ciudad de Guatemala", 0),				Ciudad("San Juan", "Ciudad de Mexico", 0),				Ciudad("San Juan", "Punta Cana", 0),				Ciudad("San Juan", "Ciudad de Panama", 0),               Ciudad("San Juan", "Flores", 0),				Ciudad("San Juan", "Guayaquil", 0),					Ciudad("San Juan", "La Ceiba", 0),					Ciudad("San Juan", "La Habana", 0),					Ciudad("San Juan", "Libera", 0),				Ciudad("San Juan", "Lima", 0),				Ciudad("San Juan", "Managua", 0),				Ciudad("San Juan", "Medellin", 0),				Ciudad("San Juan", "Quito", 0),					Ciudad("San Juan", "Roatán", 0),                Ciudad("San Juan", "San Jose de Costa Rica", 0),				Ciudad("San Juan", "San Juan", 0),					Ciudad("San Juan", "San Pedro de Sula", 0),					Ciudad("San Juan", "San Salvador", 0),					Ciudad("San Juan", "San Domingo", 0),				Ciudad("San Juan", "Tegucigalpa", 0),				},
	/*San Pedro de Sula         */		{ Ciudad("San Pedro de Sula", "Belice", 0),     Ciudad("San Pedro de Sula", "Bogota", 0),		Ciudad("San Pedro de Sula", "Cali", 0),		Ciudad("San Pedro de Sula", "Cancún", 0),		Ciudad("San Pedro de Sula", "Caracas", 0),		Ciudad("San Pedro de Sula", "Ciudad de Guatemala", 1),		Ciudad("San Pedro de Sula", "Ciudad de Mexico", 0),		Ciudad("San Pedro de Sula", "Punta Cana", 0),		Ciudad("San Pedro de Sula", "Ciudad de Panama", 0),      Ciudad("San Pedro de Sula", "Flores", 0),      Ciudad("San Pedro de Sula", "Guayaquil", 0),        Ciudad("San Pedro de Sula", "La Ceiba", 0),         Ciudad("San Pedro de Sula", "La Habana", 0),        Ciudad("San Pedro de Sula", "Libera", 0),       Ciudad("San Pedro de Sula", "Lima", 0),     Ciudad("San Pedro de Sula", "Managua", 0),      Ciudad("San Pedro de Sula", "Medellin", 0),     Ciudad("San Pedro de Sula", "Quito", 0),		Ciudad("San Pedro de Sula", "Roatán", 1),       Ciudad("San Pedro de Sula", "San Jose de Costa Rica", 1),       Ciudad("San Pedro de Sula", "San Juan", 0),         Ciudad("San Pedro de Sula", "San Pedro de Sula", 0),        Ciudad("San Pedro de Sula", "San Salvador", 1),         Ciudad("San Pedro de Sula", "San Domingo", 0),      Ciudad("San Pedro de Sula", "Tegucigalpa", 1),		},
	/*San Salvador				*/		{ Ciudad("San Salvador", "Belice", 1),			Ciudad("San Salvador", "Bogota", 1),			Ciudad("San Salvador", "Cali", 1),          Ciudad("San Salvador", "Cancún", 1),			Ciudad("San Salvador", "Caracas", 0),			Ciudad("San Salvador", "Ciudad de Guatemala", 1),			Ciudad("San Salvador", "Ciudad de Mexico", 1),          Ciudad("San Salvador", "Punta Cana", 0),			Ciudad("San Salvador", "Ciudad de Panama", 1),           Ciudad("San Salvador", "Flores", 0),			Ciudad("San Salvador", "Guayaquil", 1),				Ciudad("San Salvador", "La Ceiba", 0),				Ciudad("San Salvador", "La Habana", 1),				Ciudad("San Salvador", "Libera", 1),			Ciudad("San Salvador", "Lima", 1),			Ciudad("San Salvador", "Managua", 1),			Ciudad("San Salvador", "Medellin", 1),			Ciudad("San Salvador", "Quito", 1),				Ciudad("San Salvador", "Roatán", 1),            Ciudad("San Salvador", "San Jose de Costa Rica", 1),            Ciudad("San Salvador", "San Juan", 0),              Ciudad("San Salvador", "San Pedro de Sula", 1),             Ciudad("San Salvador", "San Salvador", 0),              Ciudad("San Salvador", "San Domingo", 0),           Ciudad("San Salvador", "Tegucigalpa", 0),			},
	/*Santo Domingo             */		{ Ciudad("Santo Domingo", "Belice", 0),         Ciudad("Santo Domingo", "Bogota", 1),			Ciudad("Santo Domingo", "Cali", 0),         Ciudad("Santo Domingo", "Cancún", 0),			Ciudad("Santo Domingo", "Caracas", 0),			Ciudad("Santo Domingo", "Ciudad de Guatemala", 0),			Ciudad("Santo Domingo", "Ciudad de Mexico", 0),			Ciudad("Santo Domingo", "Punta Cana", 0),			Ciudad("Santo Domingo", "Ciudad de Panama", 0),          Ciudad("Santo Domingo", "Flores", 0),			Ciudad("Santo Domingo", "Guayaquil", 0),			Ciudad("Santo Domingo", "La Ceiba", 0),				Ciudad("Santo Domingo", "La Habana", 0),			Ciudad("Santo Domingo", "Libera", 0),			Ciudad("Santo Domingo", "Lima", 1),			Ciudad("Santo Domingo", "Managua", 0),			Ciudad("Santo Domingo", "Medellin", 0),         Ciudad("Santo Domingo", "Quito", 0),			Ciudad("Santo Domingo", "Roatán", 0),           Ciudad("Santo Domingo", "San Jose de Costa Rica", 1),           Ciudad("Santo Domingo", "San Juan", 0),             Ciudad("Santo Domingo", "San Pedro de Sula", 0),            Ciudad("Santo Domingo", "San Salvador", 0),             Ciudad("Santo Domingo", "San Domingo", 0),          Ciudad("Santo Domingo", "Tegucigalpa", 0),			},
	/*Tegucigalpa               */		{ Ciudad("Tegucigalpa", "Belice", 0),			Ciudad("Tegucigalpa", "Bogota", 0),				Ciudad("Tegucigalpa", "Cali", 0),           Ciudad("Tegucigalpa", "Cancún", 0),				Ciudad("Tegucigalpa", "Caracas", 0),			Ciudad("Tegucigalpa", "Ciudad de Guatemala", 1),			Ciudad("Tegucigalpa", "Ciudad de Mexico", 0),			Ciudad("Tegucigalpa", "Punta Cana", 0),				Ciudad("Tegucigalpa", "Ciudad de Panama", 0),            Ciudad("Tegucigalpa", "Flores", 0),			Ciudad("Tegucigalpa", "Guayaquil", 0),				Ciudad("Tegucigalpa", "La Ceiba", 1),				Ciudad("Tegucigalpa", "La Habana", 0),				Ciudad("Tegucigalpa", "Libera", 0),				Ciudad("Tegucigalpa", "Lima", 0),			Ciudad("Tegucigalpa", "Managua", 0),			Ciudad("Tegucigalpa", "Medellin", 0),			Ciudad("Tegucigalpa", "Quito", 0),				Ciudad("Tegucigalpa", "Roatán", 1),             Ciudad("Tegucigalpa", "San Jose de Costa Rica", 1),             Ciudad("Tegucigalpa", "San Juan", 0),               Ciudad("Tegucigalpa", "San Pedro de Sula", 1),              Ciudad("Tegucigalpa", "San Salvador", 0),				Ciudad("Tegucigalpa", "San Domingo", 0),            Ciudad("Tegucigalpa", "Tegucigalpa", 0),			},
};

// Matrices de objetos
Ciudad matrizCuadrada2[25][25];
Ciudad matrizCubica2[25][25];

// Matrices con valores númericos
int matriz2[25][25];
int matrizCuadrada2Numerica[25][25];
int matrizCubica2Numerica[25][25];
int matrizUnaEscalaEnMatriz2[25][25];
int matrizDosEscalasEnMatriz2[25][25];

string funcionObtenerNombreMatriz2(int n) {
	string nombre;
	switch (n) {
	case 0: nombre = "Belice";break;
	case 1: nombre = "Bogota";break;
	case 2: nombre = "Cali";break;
	case 3: nombre = "Cancùn";break;
	case 4: nombre = "Caracas";break;
	case 5: nombre = "Ciudad de Guatemala";break;
	case 6: nombre = "Ciudad de Mèxico";break;
	case 7: nombre = "Ciudad de Panama";break;
	case 8: nombre = "Flores";break;
	case 9: nombre = "Guayaquil";break;
	case 10: nombre = "La Ceiba";break;
	case 11: nombre = "La Habana";break;
	case 12: nombre = "Liberia";break;
	case 13: nombre = "Lima";break;
	case 14: nombre = "Managua";break;
	case 15: nombre = "Medellin";break;
	case 16: nombre = "Punta Cana";break;
	case 17: nombre = "Quito";break;
	case 18: nombre = "Roatàn";break;
	case 19: nombre = "San Jose de Costa Rica";break;
	case 20: nombre = "San Juan";break;
	case 21: nombre = "San Pedro de Sula";break;
	case 22: nombre = "San Salvador";break;
	case 23: nombre = "Santo Domingo";break;
	case 24: nombre = "Tegucigalpa";break;
	default:
		nombre = "vacio";
		break;
	}
	return nombre;
}

void funcionRestarMatriz2(int e) {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			matrizUnaEscalaEnMatriz2[i][j] = matrizCuadrada2Numerica[i][j] - matriz2[i][j];
			if (i == j) {
				matrizUnaEscalaEnMatriz2[i][j] = 0;
			}
			if (matrizUnaEscalaEnMatriz2[i][j] <= 0) {
				matrizUnaEscalaEnMatriz2[i][j] = 0;
			}
			if (e == 2) {
				matrizDosEscalasEnMatriz2[i][j] = matrizCubica2Numerica[i][j] - matrizUnaEscalaEnMatriz2[i][j];
				matrizDosEscalasEnMatriz2[i][j] = matrizDosEscalasEnMatriz2[i][j] - matrizCuadrada2Numerica[i][j];
				matrizDosEscalasEnMatriz2[i][j] = matrizDosEscalasEnMatriz2[i][j] - matriz2[i][j];
				if (i == j) {
					matrizDosEscalasEnMatriz2[i][j] = 0;
				}
				if (matrizDosEscalasEnMatriz2[i][j] <= 0) {
					matrizDosEscalasEnMatriz2[i][j] = 0;
				}
			}
		}
	}
};

void funcionMatrizCuadrado2() {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			for (int k = 0; k < 25; k++) {
				matrizCuadrada2Numerica[i][j] += matriz2[i][k] * matriz2[k][j];
				if (matrizCuadrada2Numerica[i][j] >= 1) {
					matrizCuadrada2Numerica[i][j] = 1;
				}
			}
		}
	}
};

void funcionMatrizCubo2() {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			for (int k = 0; k < 25; k++) {
				matrizCubica2Numerica[i][j] += matrizCuadrada2Numerica[i][k] * matriz2[k][j];
				if (matrizCubica2Numerica[i][j] >= 1) {
					matrizCubica2Numerica[i][j] = 1;
				}
			}
		}
	}
}

// Extrae la matriz numerica de la matriz principal
int  funcionRellenarMatriz2() {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			matriz2[i][j] = matrizMapa2[i][j].getValor();
		}
	}
	return 0;
};

void funcionUnaEscalaMatriz2() {
	funcionRellenarMatriz2();
	funcionMatrizCuadrado2();
	funcionRestarMatriz2(1);
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			int v = matrizUnaEscalaEnMatriz2[i][j];
			string o = funcionObtenerNombreMatriz2(i);
			string d = funcionObtenerNombreMatriz2(j);
			matrizCuadrada2[i][j].setValor(v);
			matrizCuadrada2[i][j].setOrigen(o);
			matrizCuadrada2[i][j].setDestino(d);
		}
	}
}

void funcionDosEscalasMatriz2() {
	funcionRellenarMatriz2();
	funcionMatrizCuadrado2();
	funcionMatrizCubo2();
	funcionRestarMatriz2(2);
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			int v = matrizDosEscalasEnMatriz2[i][j];
			string o = funcionObtenerNombreMatriz2(i);
			string d = funcionObtenerNombreMatriz2(j);
			matrizCubica2[i][j].setValor(v);
			matrizCubica2[i][j].setOrigen(o);
			matrizCubica2[i][j].setDestino(d);
		}
	}
}

string funcionObtenerPuntoPasoMatriz2(string origen, string destino) {
	string result;
	int  auxI, auxJ, p1, p2;
	bool pp1 = true;
	bool pp2 = false;
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			if (origen == matrizMapa2[i][j].getOrigen()) {
				auxI = i;
			}
			if (destino == matrizMapa2[i][j].getOrigen()) {
				auxJ = i;
			}
		}
	}
	/**************************  Dos escalas ****************************/
	for (int j = 0; j < 25; j++) {
		if (matrizMapa2[auxI][j].getValor() == 1) {
			p1 = j;
		}
	}

	for (int j = 0; j < 25; j++) {
		if (matrizMapa2[auxJ][j].getValor() == 1) {
			p2 = j;
		}
	}
	/**************************  Una escala  ****************************/
	for (int i = 0; i < 25; i++) {
		// Punto de paso de una escala
		if ((matrizMapa2[auxI][i].getValor() == matrizMapa2[auxJ][i].getValor()) && (matrizMapa2[auxJ][i].getValor() == 1 && matrizMapa2[auxI][i].getValor() == 1)) {
			result = matrizMapa2[i][i].getOrigen();
			return result;
		}
		else { pp2 = true; pp1 = false; }
		// Punto de paso de dos escalas
		if (matrizMapa2[p1][p2].getValor() && pp2) {
			result = matrizMapa2[p1][p1].getOrigen() + " -> " + matrizMapa2[p2][p2].getOrigen();
			return result;
		}
	}
}