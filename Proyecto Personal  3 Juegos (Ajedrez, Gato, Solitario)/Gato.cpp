#include "Gato.h"

TikTakToe::TikTakToe() {
	int concecutivo = 1;
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			Matriz[i][j] = to_string(concecutivo);
			concecutivo++;
		}
	}

}

TikTakToe::~TikTakToe() {}

string TikTakToe::ganar() {
	if (ganoX() == true) {
		return "Gano el jugador 1 :D";
	}
	else {
		if (ganoO() == true) {
			return "Gano el jugador 2 :D";
		}
		else {
			return "Aun no hay ganador, sigue el juego :)";
		}
	}
}


bool TikTakToe::ganoX() {
	int tresPocicionesXd = 0; int tresPocicionesXD = 0;
	int tresPocicionesXF1 = 0; int tresPocicionesXF2 = 0; int tresPocicionesXF3 = 0;
	int tresPocicionesXC1 = 0; int tresPocicionesXC2 = 0; int tresPocicionesXC3 = 0;

	for (int i = 3 - 1, j = 0; i >= 0 && j < 3; i--, j++) {//Diagonal Secundaria
		if (Matriz[i][j] == "X") {
			tresPocicionesXd++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Diagonal Principal
		if (Matriz[i][i] == "X") {
			tresPocicionesXD++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Fila 1
		if (Matriz[0][i] == "X") {
			tresPocicionesXF1++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Fila 2
		if (Matriz[1][i] == "X") {
			tresPocicionesXF2++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Fila 3
		if (Matriz[2][i] == "X") {
			tresPocicionesXF3++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Columna 1
		if (Matriz[i][0] == "X") {
			tresPocicionesXC1++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Columna 2
		if (Matriz[i][1] == "X") {
			tresPocicionesXC2++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Columna 3
		if (Matriz[i][2] == "X") {
			tresPocicionesXC3++;
		}
	}
	if (tresPocicionesXd == 3 || tresPocicionesXD == 3 || tresPocicionesXF1 == 3 || tresPocicionesXF2 == 3 ||
		tresPocicionesXF3 == 3 || tresPocicionesXC1 == 3 || tresPocicionesXC2 == 3 || tresPocicionesXC3 == 3) {
		return true;
	}
	else {
		return false;
	}
}

bool TikTakToe::ganoO() {
	int tresPocicionesOd = 0; int tresPocicionesOD = 0;
	int tresPocicionesOF1 = 0; int tresPocicionesOF2 = 0; int tresPocicionesOF3 = 0;
	int tresPocicionesOC1 = 0; int tresPocicionesOC2 = 0; int tresPocicionesOC3 = 0;

	for (int i = 3 - 1, j = 0; i >= 0 && j < 3; i--, j++) {//Diagonal Secundaria
		if (Matriz[i][j] == "O") {
			tresPocicionesOd++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Diagonal Principal
		if (Matriz[i][i] == "O") {
			tresPocicionesOD++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Fila 1
		if (Matriz[0][i] == "O") {
			tresPocicionesOF1++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Fila 2
		if (Matriz[1][i] == "O") {
			tresPocicionesOF2++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Fila 3
		if (Matriz[2][i] == "O") {
			tresPocicionesOF3++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Columna 1
		if (Matriz[i][0] == "O") {
			tresPocicionesOC1++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Columna 2
		if (Matriz[i][1] == "O") {
			tresPocicionesOC2++;
		}
	}
	for (int i = 0; i <= 2; i++) {//Columna 3
		if (Matriz[i][2] == "O") {
			tresPocicionesOC3++;
		}
	}
	if (tresPocicionesOd == 3 || tresPocicionesOD == 3 || tresPocicionesOF1 == 3 || tresPocicionesOF2 == 3 ||
		tresPocicionesOF3 == 3 || tresPocicionesOC1 == 3 || tresPocicionesOC2 == 3 || tresPocicionesOC3 == 3) {
		return true;
	}
	else {
		return false;
	}
}

void TikTakToe::insertarX(string eleccion) {
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			if (Matriz[i][j] == eleccion) {
				Matriz[i][j] = "X";
			}
		}
	}
}

void TikTakToe::insertarO(string eleccion) {
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			if (Matriz[i][j] == eleccion) {
				Matriz[i][j] = "O";
			}
		}
	}
}

string TikTakToe::toString() {
	stringstream a;
	for (int i = 0; i < 3; i++) {
		a << endl;
		for (int j = 0; j < 3; j++) {
			a << "[" << Matriz[i][j] << "]";
		}
	}
	return a.str();
}
