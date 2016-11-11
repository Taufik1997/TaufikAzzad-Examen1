#include "Metodos.h"


char** crearTablero(char** tablero){
	tablero = new char[12];
	for (int i = 0; i < 12; ++i)
	{
		tablero[i] = new char[12];
	}
	return tablero;
}

char** llenarTablero1(char** matriz){
	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 12; ++j)
		{
			matriz[i][j]='-';
		}
	}

}
char** llenarTablero2(char** tablero){
	tablero[0][0] = ' ';
	for (int i = 1; i < 12; ++i)
	 {
	 	tablero[0][i] = i-48;
	 	tablero[i][0] = i-48;
	 } 

}

char** deleteTablero(char** tablero){
	for (int i = 0; i < 12; ++i)
	{
		delete[] tablero[i];
		tablero[i]=NULL;
	}
	delete[] tablero;
	tablero=NULL;
	return tablero;
}

