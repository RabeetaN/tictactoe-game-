//Functional implementation for Tic Tac Toe game (incomplete)
/*********** Declaration*******
I hereby certify that no part of this assignment has been copied from
any other student’s work or from any other source. No part of the
code has been written/produced for me by another person or copied
from any other source.
I hold a copy of this assignment that I can produce if the original
is lost or damaged.
**************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "NBGame.h"
using namespace std;


int main() {

	srand(time(0));

	NBGame g;
	g.play();

	return 0;
}