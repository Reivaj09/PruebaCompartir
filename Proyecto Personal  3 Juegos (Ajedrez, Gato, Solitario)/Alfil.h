#pragma once
#include "Ficha.h"

class Alfil :public Ficha {
public:
	Alfil(char, string, int, int);
	~Alfil();

	virtual void movimiento(int, int);
};