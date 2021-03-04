#include "Ajedrez.h"
#include "Gato.h"


int main() {

	/*//desde aqui empieza la parte del ajedrez
	int x, y, i, j;

	Tablero* T1 = new Tablero();
	T1->llenar();
	cout << T1->toString() << endl;
	cout << "REY (R) || REINA (D) || TORRE (T) || ALFIL (A) || CABALLO (C) || PEON (P)" << endl;
	system("pause");
	cout << "Cual va a mover: " << endl; cin >> x; cin >> y;
	cout << "Donde va a mover: " << endl; cin >> i; cin >> j;
	T1->muevalo(i, j, T1->existe(x, y));
	cout << T1->toString() << endl;
	system("pause");
	T1->~Tablero();
	*/

	/*//desde aqui empieza la parte del tiktaktoe
	string eleccion;

	TikTakToe* Gato = new TikTakToe();
	cout << Gato->toString() << endl;
	do {
		if (Gato->ganoO() != true) {
			cout << "Jugador1 elija una pocicion" << endl; cin >> eleccion;
			Gato->insertarX(eleccion);
			cout << Gato->toString() << endl;
			cout << Gato->ganar() << endl << endl;
		}
		else {
			break;
		}
		if (Gato->ganoX() != true) {
			cout << "Jugador2 elija una pocicion" << endl; cin >> eleccion;
			Gato->insertarO(eleccion);
			cout << Gato->toString() << endl;
			cout << Gato->ganar() << endl << endl;
		}
		else {
			break;
		}
	} while (Gato->ganoO() == false || Gato->ganoX() == false);
	Gato->~TikTakToe();
	*/


	return 0;
}
/*
Falta asignar un equipo para el gato y el ajedrez
Falta terminar el ajedrez(arreglar mini errores y asignar trabajo a cada pieza)
Falta menu interactivo amigable con el jugador
Falta comenzar el solitario
Archivos o metodo de guardado (si se quiere guardar algun contador de partidas ganadas)
Si se puede asignar una variable que guarde el nombre del o los jugadores(usarlo en los metodos para decir quien ganó)
*/