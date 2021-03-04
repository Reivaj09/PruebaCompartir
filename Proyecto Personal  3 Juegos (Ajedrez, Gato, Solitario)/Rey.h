#pragma once
#include "Ficha.h"

class Rey :public Ficha {
public:
	Rey(char, string, int, int);
	~Rey();

	virtual void movimiento(int, int);
};