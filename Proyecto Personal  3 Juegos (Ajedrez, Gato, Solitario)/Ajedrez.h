#pragma once
#include "Peon.h"
#include "Torre.h"
#include "Caballo.h"
#include "Alfil.h"
#include "Reina.h"
#include "Rey.h"

class Tablero {
private:
	Ficha* matriz[8][8];

public:
	Tablero();
	~Tablero();

	void llenar();
	void muevalo(int , int, Ficha*);
	Ficha* existe(int, int);
	bool Comer(int, int , Ficha* );
	string toString();
};