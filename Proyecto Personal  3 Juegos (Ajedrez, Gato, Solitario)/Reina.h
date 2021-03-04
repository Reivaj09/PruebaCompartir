#pragma once
#include "Ficha.h"

class Reina :public Ficha {
public:
	Reina(char, string, int, int);
	~Reina();

	virtual void movimiento(int, int);
};