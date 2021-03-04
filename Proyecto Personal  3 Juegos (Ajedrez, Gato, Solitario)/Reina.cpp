#include "Reina.h"

Reina::Reina(char tipo, string equipo, int x, int y) :Ficha(tipo, equipo, x, y) {}

Reina::~Reina() {}

void Reina::movimiento(int x, int y) {
	setX(x);
	setY(y);
}

