#pragma once
#include "Ficha.h"

class Peon:public Ficha {
private:
	int numMovimientos;
public:
	Peon();
	Peon(int, char, string, int ,int);
	~Peon();

	int getNumMovimientos() const;
	void setNumMovimientos(int numMovimientos);

	virtual void movimiento(int, int);

};