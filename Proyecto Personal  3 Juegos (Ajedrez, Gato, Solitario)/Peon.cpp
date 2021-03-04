#include "Peon.h"

Peon::Peon() {
	this->numMovimientos = 0;
}

Peon::Peon(int movimientos, char tipo, string equipo, int x, int y) :Ficha(tipo, equipo, x, y) {
	this->numMovimientos = movimientos;
}

Peon::~Peon() {}

void Peon::movimiento(int x, int y) {
	setX(x);
	setY(y);
	setNumMovimientos(getNumMovimientos()+1);
}

int Peon::getNumMovimientos() const {
    return numMovimientos;
}

void Peon::setNumMovimientos(int numMovimientos) {
    this->numMovimientos = numMovimientos;
}
