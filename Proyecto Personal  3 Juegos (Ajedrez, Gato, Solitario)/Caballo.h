#pragma once
#include "Ficha.h"

class Caballo:public Ficha {
public:
	Caballo(char, string, int, int);
	~Caballo();

	virtual void movimiento(int, int);
};