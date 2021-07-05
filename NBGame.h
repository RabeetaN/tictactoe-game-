#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
//#include "TicTacToe.h"
//#include "BoardCoordinate.h"
#include "NineBoard.h"
#include "CPlayer.h"
#include "HPlayer.h"
using namespace std;

class NBGame {
private:
	NineBoard nb;
	CPlayer pc;
	HPlayer ph;
public:
	NBGame():pc('X'), ph('O') {

	}
	bool done = false;
	char player = 'X';
	void play() {
		nb.display();
		while (!done) {
			int row, col;
			pc.getMove(nb, player, row, col);
			done = nb.addMove(player, row, col);
			nb.updateBoard(row, col);
			player = 'O';
			ph.getMove(nb, player, row, col);
			done = nb.addMove(player, row, col);
			nb.updateBoard(row, col);
			player = 'X';
		}
	}
};