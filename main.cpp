#include <iostream>
#include <string>
#include "Metodos.h"	
using namespace std;

int main(){
	Metodos* metodos = new Metodos();
	metodos->llenarTablero1();
	metodos->llenarTablero3();
	metodos->imprimirTablero();
	int contador = 0;
	do{
		string jugador = "";
		if(contador % 2 == 0){
			jugador = "Jugador 1";
		}else{
			jugador = "Jugador 2";
		}
		int i1,j1,i2,j2;
		cout<<jugador;
		cout<<endl<<"Ingrese la posicion que desea mover[i]:";
		cin>>i1;
		cout<<endl<<"Ingrese la posicion que desea mover[j]:";
		cin>>j1;
		cout<<endl<<"Ingrese la posicion a donde lo desea mover[i]:";
		cin>>i2;
		cout<<endl<<"Ingrese la posicion a donde lo desea mover[j]:";
		cin>>j2;
		metodos->moverPieza(i1,j1,i2,j2,jugador);
		metodos->imprimirTablero();
		metodos-> validacionGanador();
		contador++;

	}while(true);
	metodos->deleteTablero();
	return 0;
}