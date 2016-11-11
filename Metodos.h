#ifndef METODOS_H
#define METODOS_H
#include <string>
using namespace std;

class Metodos{
private:
	char** tablero;

public:
	Metodos();
	void crearTablero();
	void llenarTablero1();
	void llenarTablero2();
	void llenarTablero3();
	void moverPieza(int,int,int,int,string);
	void imprimirTablero();
	void deleteTablero();
	void validacionGanador();


};

#endif





