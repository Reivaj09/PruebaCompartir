#include "Ajedrez.h"

Tablero::Tablero() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			matriz[i][j] = nullptr;
		}
	}
}

Tablero::~Tablero() {}

void Tablero::llenar() {
	for (int i = 0; i < 8; i++) {
		matriz[1][i] = new Peon(0, 'P', "Blanco", 1, i);
		matriz[6][i] = new Peon(0, 'P', "Negro", 6, i);
	}
	matriz[0][0] = new Torre('T', "Blanco", 0, 0);
	matriz[0][7] = new Torre('T', "Blanco", 0, 7);
	matriz[7][7] = new Torre('T', "Negro", 7, 7);
	matriz[7][0] = new Torre('T', "Negro", 7, 0);

	matriz[0][1] = new Caballo('C', "Blanco", 0, 1);
	matriz[0][6] = new Caballo('C', "Blanco", 0, 6);
	matriz[7][6] = new Caballo('C', "Negro", 7, 6);
	matriz[7][1] = new Caballo('C', "Negro", 7, 1);

	matriz[0][2] = new Alfil('A', "Blanco", 0, 2);
	matriz[0][5] = new Alfil('A', "Blanco", 0, 5);
	matriz[7][5] = new Alfil('A', "Negro", 7, 5);
	matriz[7][2] = new Alfil('A', "Negro", 7, 2);

	matriz[0][3] = new Reina('D', "Blanco", 0, 3);
	matriz[7][3] = new Reina('D', "Negro", 7, 3);

	matriz[0][4] = new Rey('R', "Blanco", 0, 4);
	matriz[7][4] = new Rey('R', "Negro", 7, 4);
}

void Tablero::muevalo(int nuevaX, int nuevaY, Ficha* actual) {//hacer otro metodo que sea para comer este pregunta que este vacio el espacio en donde va
	if (matriz[actual->getX()][actual->getY()] == nullptr) {
		if (matriz[nuevaX][nuevaY] == nullptr) {
			if (actual->getTipo() == 'P') {
				matriz[nuevaX][nuevaY] = matriz[actual->getX()][actual->getY()];
				matriz[actual->getX()][actual->getY()] = nullptr;
				matriz[nuevaX][nuevaY]->movimiento(nuevaX, nuevaY);
			}
			if (actual->getTipo() == 'A') {
				matriz[nuevaX][nuevaY] = matriz[actual->getX()][actual->getY()];
				matriz[actual->getX()][actual->getY()] = nullptr;
				matriz[nuevaX][nuevaY]->movimiento(nuevaX, nuevaY);
			}
			if (actual->getTipo() == 'C') {
				matriz[nuevaX][nuevaY] = matriz[actual->getX()][actual->getY()];
				matriz[actual->getX()][actual->getY()] = nullptr;
				matriz[nuevaX][nuevaY]->movimiento(nuevaX, nuevaY);
			}
			if (actual->getTipo() == 'R') {
				matriz[nuevaX][nuevaY] = matriz[actual->getX()][actual->getY()];
				matriz[actual->getX()][actual->getY()] = nullptr;
				matriz[nuevaX][nuevaY]->movimiento(nuevaX, nuevaY);
			}
			if (actual->getTipo() == 'D') {
				matriz[nuevaX][nuevaY] = matriz[actual->getX()][actual->getY()];
				matriz[actual->getX()][actual->getY()] = nullptr;
				matriz[nuevaX][nuevaY]->movimiento(nuevaX, nuevaY);
			}
			if (actual->getTipo() == 'T') {
				matriz[nuevaX][nuevaY] = matriz[actual->getX()][actual->getY()];
				matriz[actual->getX()][actual->getY()] = nullptr;
				matriz[nuevaX][nuevaY]->movimiento(nuevaX, nuevaY);
			}
		}
		else {
			if (Comer(nuevaX, nuevaY, actual)) {
				matriz[actual->getX()][actual->getY()] = nullptr;
				matriz[nuevaX][nuevaY]->movimiento(nuevaX, nuevaY);
			}
			else {
				cout << "No se puede hacer ese movimiento" << endl;
			}
		}
	}
	else {
		cout << "No hay ficha existente en ese lugar" << endl;
	}
}

Ficha* Tablero::existe(int x, int y) {
	if (matriz[x][y] != nullptr) {
		return matriz[x][y];
	}
	return nullptr;
}

bool Tablero::Comer(int nuevaX, int nuevaY, Ficha* actual) {
	if (matriz[nuevaX][nuevaY]->getEquipo() != actual->getEquipo()) {
		matriz[nuevaX][nuevaY] = nullptr;
		matriz[nuevaX][nuevaY] = matriz[actual->getX()][actual->getY()];
		return true;
	}
	else {
		return false;
	}
}

string Tablero::toString() {
	stringstream s;
	s << "   ";
	for (int k = 0; k < 8; k++) {
		s << " " << k << " ";
	}
	for (int i = 0; i < 8; i++) {
		s << endl;
		s << " " << i << " ";
		for (int j = 0; j < 8; j++) {
			if (matriz[i][j]) {
				s << "[" << matriz[i][j]->getTipo() << "]";
			}
			else {
				s << "[ ]";
			}
		}
	}
	return s.str();
}

