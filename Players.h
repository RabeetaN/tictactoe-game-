#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
//#include "TicTacToe.h"
//#include "BoardCoordinate.h"
#include "NineBoard.h"
//#include "CPlayer.h"
//#include "HPlayer.h"
using namespace std;

class Players {
private:
	char player;
public: 
	virtual void getMove(NineBoard nb, char player, int& row, int& col) = 0;

	Players(char player) {
		this->player = player;
	}
	/*void getXMove(char player, int& row, int& col) {
		do {
			cout << "Player X move: ";
			row = rand() % 3;
			col = rand() % 3;
		} while (!nb.isValidMove(row, col));
		cout << row + 1 << " " << col + 1 << endl;
	}
	void getOMove(char player, int& row, int& col) {
		do {
			cout << "Player O enter move: ";
			cin >> row >> col;
			cout << endl;
		} while (!nb.isValidMove(row - 1, col - 1));

		row--;
		col--;
	}*/
};