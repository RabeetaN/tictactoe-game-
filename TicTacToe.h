#pragma once
#include <iostream>
#include <iomanip>
//#include <cstdlib>
#include "BoardCoordinate.h"
//#include "NineBoard.h"
using namespace std;

enum status {
	WIN, DRAW, CONTINUE
};

class TicTacToe {
private:
public:
	char board[3][3];
	int noOfMoves;
	TicTacToe() {
		int count = 0; 
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				board[i][j] = ' ';

		noOfMoves = 0;
	}
	void addMove(char player, int r, int c) {

		board[r][c] = player;	
		noOfMoves++;
	}
	bool isDone(char player) {
		status gStatus = gameStatus();

		if (gStatus == WIN) {
			cout << "Player " << player << " wins!" << endl;
			return true;
		}
		else if (gStatus == DRAW) {
			cout << "This game is a draw!" << endl;
			return  true;
		}
		else if (noOfMoves >= 81) {
			return true;
		}
		else
			return false;
	}
	void displayBoard() {
			cout << "  - - - - -  " << endl;
				for (int row = 0; row < 3; row++) {
					cout << "|";
					for (int col = 0; col < 3; col++) {
						cout << setw(2) << board[row][col];
						if (col != 2)
							cout << " |";
					}
					cout << "*" << endl;
					if (row != 2)
						cout << "| -   -   - |" << endl;
				}
				cout << "  - - - - -  " << endl;
	}
	bool isValidMove(int r, int c) {

		if (0 < r < 2 && 0 < c < 2 && board[r][c] == ' ')
			return true;
		else
			return false;
	}
	status gameStatus() {

		bool isWon = false;
		if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') || (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
			isWon = true;
			return WIN;
		}
		for (int i = 0; i < 3; i++) {
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
				isWon = true;
				return WIN;
			}
		}
		for (int i = 0; i < 3; i++) {
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
				isWon = true;
				return WIN;
			}
		}

		if (noOfMoves < 81)
			return CONTINUE;
		else if (isWon == false && noOfMoves == 81)
			return DRAW;
	}
};
