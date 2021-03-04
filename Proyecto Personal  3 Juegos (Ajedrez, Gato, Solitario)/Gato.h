#pragma once
#include <sstream>
#include <iostream>
using namespace std;

class TikTakToe {
private:
	string Matriz[3][3];

public:
	TikTakToe();
	~TikTakToe();

	string ganar();
	bool ganoX();
	bool ganoO();
	void insertarX(string);
	void insertarO(string);
	string toString();

};
