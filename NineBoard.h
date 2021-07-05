#pragma once
#include <iostream>
#include <iomanip>
//#include <string>
#include <cstdlib>
#include "TicTacToe.h"
#include "BoardCoordinate.h"
using namespace std;

class NineBoard {
private:
	TicTacToe nineArr[3][3];
	BoardCoordinate BC;
public:
	NineBoard() {
		BC.row = rand() % 3;
		BC.col = rand() % 3;
		cout << "First board is: " << BC.row + 1 << ", " << BC.col + 1 << endl;
	}
	void display() {
		for (int nr = 0; nr < 3; nr++) {
			for (int nc = 0; nc < 3; nc++) {
				nineArr[nr][nc].board;
			}
		}
		for (int nr = 0; nr < 3; nr++) {
			if(BC.col == 0 && BC.row == nr)
				cout << "  * * * * *    - - - - -    - - - - -  " << endl;
			else if (BC.col == 1 && BC.row == nr)
				cout << "  - - - - -    * * * * *    - - - - -  " << endl;
			else if (BC.col == 2 && BC.row == nr)
				cout << "  - - - - -    - - - - -    * * * * *  " << endl;
			else
				cout << "  - - - - -    - - - - -    - - - - -  " << endl;
				
			for (int r = 0; r < 3; r++) {
				for (int nc = 0; nc < 3; nc++) {
					if (BC.row == nr && BC.col == nc)
						cout << "*";
					else
						cout << "|";
					for (int c = 0; c < 3; c++) {
						cout << setw(2) << nineArr[nr][nc].board[r][c];
						if (c != 2)
							cout << " |";
						
					}
					if (BC.row == nr && BC.col == nc)
						cout << " *";
					else
						cout << " |";
				}
				if (r !=2)
					if (BC.col == 0 && BC.row == nr)
						cout << endl << "* -   -   - *| -   -   - || -   -   - |" << endl;
					else if (BC.col == 1 && BC.row == nr)
						cout << endl << "| -   -   - |* -   -   - *| -   -   - |" << endl;
					else if (BC.col == 2 && BC.row == nr)
						cout << endl << "| -   -   - || -   -   - |* -   -   - *" << endl;
					else
						cout << endl << "| -   -   - || -   -   - || -   -   - |" << endl;
			}
			cout << endl;
			if (BC.col == 0 && BC.row == nr)
				cout << "  * * * * *    - - - - -    - - - - -  " << endl;
			else if (BC.col == 1 && BC.row == nr)
				cout << "  - - - - -    * * * * *    - - - - -  " << endl;
			else if (BC.col == 2 && BC.row == nr)
				cout << "  - - - - -    - - - - -    * * * * *  " << endl;
			else
				cout << "  - - - - -    - - - - -    - - - - -  " << endl;
		}
	}
	bool addMove(char player ,int& r, int& c) {
		nineArr[BC.row][BC.col].addMove(player, r, c);
		return nineArr[BC.row][BC.col].isDone(player);
	}
	void updateBoard(int& r, int& c) {
		BC.row = r;
		BC.col = c;
		//is board full and random pick
		display();
	}
	bool isValidMove(int r, int c) {
	return nineArr[BC.row][BC.col].isValidMove(r, c);
	}
};