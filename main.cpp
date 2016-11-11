#include <iostream>
#include <string>

main int(){
	int** tablero = NULL;
	tablero = new int[11];
	for (int i = 0; i < 10; ++i)
	{
		tablero[i] = new int[11];
	}
	











	




	for (int i = 0; i < 10; ++i)
	{
		delete[] tablero[i];
		tablero[i]=NULL;
	}
	delete[] tablero;
	tablero=NULL;
	return 0;
}