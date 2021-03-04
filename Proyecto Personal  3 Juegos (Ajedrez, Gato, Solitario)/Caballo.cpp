#include "Caballo.h"

Caballo::Caballo(char tipo, string equipo, int x, int y) :Ficha(tipo, equipo, x, y) {}

Caballo::~Caballo() {}

void Caballo::movimiento(int x, int y) {
	setX(x);
	setY(y);
}
