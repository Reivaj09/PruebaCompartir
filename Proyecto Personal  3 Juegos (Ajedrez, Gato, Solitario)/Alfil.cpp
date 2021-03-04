#include "Alfil.h"

Alfil::Alfil(char tipo, string equipo, int x, int y) :Ficha(tipo, equipo, x, y) {}

Alfil::~Alfil() {}

void Alfil::movimiento(int x, int y) {
	setX(x);
	setY(y);
}
