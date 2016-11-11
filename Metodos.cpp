#include <iostream>
#include <string>
#include "Metodos.h"
using namespace std;

Metodos::Metodos() {
	this -> tablero = new char*[11];
	for (int i = 0; i < 11; ++i)
	{
		tablero[i] = new char[11];
	}
}
	



void Metodos::crearTablero(){
	this ->tablero = new char*[12];
	for (int i = 0; i < 11; ++i)
	{
		this ->tablero[i] = new char[11];
	}
}

void Metodos::llenarTablero1(){
	for (int i = 0; i < 11; ++i)
	{
		for (int j = 0; j < 11; ++j)
		{
			this ->tablero[i][j]='-';
		}
	}

}
void Metodos::llenarTablero2(){
	tablero[0][0] = ' ';
	for (int i = 1; i < 11; ++i)
	 {
	 	this ->tablero[0][i] = i;
	 	this ->tablero[i][0] = i;
	 } 

}

void Metodos::llenarTablero3(){
	this ->tablero[5][0] = '#';
	this ->tablero[5][10] = '#';
	this ->tablero[0][5] = '+';
	this ->tablero[10][5] = '+';
}

void Metodos::imprimirTablero(){
	for (int i = 0; i < 11; ++i)
	{
		for (int j = 0; j < 11; ++j)
		{
			cout<<this ->tablero[i][j]<<" ";
		}
		cout<<endl;
	}
}

void Metodos::moverPieza(int i1,int j1,int i2,int j2,string jugador){
	char pieza = ' ';
	char comer = ' ';
	if(jugador == "Jugador 1"){
		pieza = '+';
		comer = '#';
	}else{
		pieza = '#';
		comer = '+';
	}
	if(this->tablero[i1][j2] == pieza && this->tablero[i2][j2] != comer){
		if(i2 == i1+1 && j2==j1||i2 == i1-1 && j2==j1||i2 == i1+2 && j2==j1||i2 == i1-1 && j2==j1||i2 == i1 && j2==j1+1||i2 == i1 && j2==j1+2||
			i2 == i1 && j2==j1-1||i2 == i1 && j2==j1-2||i2 == i1+1 && j2==j1-1||i2 == i1+2 && j2==j1-2||i2 == i1+1 && j2==j1+1||i2 == i1+2 && j2==j1+2||
			i2-1 == i1 && j2==j1+1||i2-2 == i1 && j2==j1+2||i2 == i1-1 && j2==j1-1||i2 == i1-2 && j2==j1-2){
			tablero[i2][j2] = pieza;
		}
		
		if(this->tablero[i2+1][j2] == comer){
			this->tablero[i2+1][j2] = pieza;
		}
		if(this->tablero[i2-1][j2] == comer){
			this->tablero[i2-1][j2] = pieza;
		}
		if(this->tablero[i2][j2+1] == comer){
			this->tablero[i2][j2+1]= pieza;
		}
		if(this->tablero[i2][j2-1] == comer){
			this->tablero[i2][j2-1] = pieza;
		}
		if(this->tablero[i2][j2+1] == comer){
			this->tablero[i2][j2+1]=pieza;
		}
		if(this->tablero[i2+1][j2+1] == comer){
			this->tablero[i2+1][j2+1] = pieza;
		}
		if(this->tablero[i2+1][j2-1] == comer){
			this->tablero[i2+1][j2-1]=pieza;
		}
		if(this->tablero[i2+1][j2-1] == comer){
			this->tablero[i2+1][j2-1]=pieza;
		}
		if(this->tablero[i2+1][j2+1] == comer){
			this->tablero[i2+1][j2+1]=pieza;
		}


	}else{
		cout<<"Las cordinados que ingreso no existe ninguna pieza o no puede moverse ahi porque existe una pieza del contrincante";
	}

}


void Metodos::deleteTablero(){
	for (int i = 0; i < 11; ++i)
	{
		delete[] this ->tablero[i];
		this ->tablero[i]=NULL;
	}
	delete[] tablero;
	this ->tablero=NULL;
}

