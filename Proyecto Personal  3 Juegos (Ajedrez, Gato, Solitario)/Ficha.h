#pragma once
#include <sstream>
#include <iostream>
using namespace std;

class Ficha {
private:
	char tipo;
	string equipo;
	int x;
	int y;
public:
	Ficha();
	Ficha(char, string, int, int);
	~Ficha();

	char getTipo() const;
	void setTipo(char tipo);

	string getEquipo() const;
	void setEquipo(string equipo);

	int getX() const;
	void setX(int x);

	int getY() const;
	void setY(int y);

	virtual void movimiento(int,int);

};