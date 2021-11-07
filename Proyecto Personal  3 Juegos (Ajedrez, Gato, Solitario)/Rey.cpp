#include "Rey.h"

Rey::Rey(char tipo, string equipo, int x, int y) :Ficha(tipo, equipo, x, y) {}

Rey::~Rey() {}

void Rey::movimiento(int x, int y) {
	setX(x);
	setY(y);
}
// me cago en javier
