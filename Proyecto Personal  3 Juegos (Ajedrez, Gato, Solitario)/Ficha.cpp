#include "Ficha.h"

Ficha::Ficha() {
    tipo = ' ';
    equipo = " ";
    x = 0;
    y = 0;
}

Ficha::Ficha(char tipo, string equipo, int x, int y) {
    this->tipo = tipo;
    this->equipo = equipo;
    this->x = x;
    this->y = y;
}

Ficha::~Ficha() {}

void Ficha::movimiento(int x,int y) {}//deberia ser de tipo bool que diga si puede realizar el movimiento

char Ficha::getTipo() const {
    return tipo;
}

void Ficha::setTipo(char tipo) {
    this->tipo = tipo;
}

string Ficha::getEquipo() const {
    return equipo;
}

void Ficha::setEquipo(string equipo) {
    this->equipo = equipo;
}

int Ficha::getX() const {
    return x;
}

void Ficha::setX(int x) {
    this->x = x;
}

int Ficha::getY() const {
    return y;
}

void Ficha::setY(int y) {
    this->y = y;
}