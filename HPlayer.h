#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
//#include "TicTacToe.h"
//#include "BoardCoordinate.h"
#include "NineBoard.h"
#include "Players.h"
using namespace std;

class HPlayer: public Players {
private:

public:
	HPlayer(char player): Players (player) {
		
	}
	void getMove(NineBoard nb, char player, int& row, int& col) {
		do {
			cout << "Player O enter move: ";
			cin >> row >> col;
			cout << endl;
		} while (!nb.isValidMove(row - 1, col - 1));

		row--;
		col--;
	}
};