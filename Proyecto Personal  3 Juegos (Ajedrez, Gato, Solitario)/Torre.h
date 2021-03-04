#pragma once
#include "Ficha.h"

class Torre :public Ficha {
public:
	Torre(char, string, int, int);
	~Torre();

	virtual void movimiento(int, int);

};