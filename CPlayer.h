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


class CPlayer: public Players {
private:
	
public:
	CPlayer(char player) : Players(player) {

	}
	void getMove(NineBoard nb, char player, int& row, int& col) {
		do {
			cout << "Player X move: ";
			row = rand() % 3;
			col = rand() % 3;
		} while (!nb.isValidMove(row, col));
		cout << row + 1 << " " << col + 1 << endl;
	}
};