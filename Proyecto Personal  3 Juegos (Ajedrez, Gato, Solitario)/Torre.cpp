#include "Torre.h"

Torre::Torre(char tipo, string equipo, int x, int y):Ficha(tipo, equipo, x, y) {}

Torre::~Torre() {}

void Torre::movimiento(int x, int y) {
	setX(x);
	setY(y);
}
