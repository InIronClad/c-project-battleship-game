/*******************************************************************************************
* Programmer: Robert Crismon                                                               *
* Class: CptS 121, Spring  2016; Lab Section 3                                             *
* Programming Assignment: PA 6                                                             *
* Date: March, 2016																		   *
* Description: This program plays an interactive game of Battleship.					   *
* Collaboration:																		   *
*******************************************************************************************/

#include "pa_6.h"

int main(void)
{
	char board_p1[10][10] = { { '\0', '\0', '\0' },{ '\0' } };
	Direction dir = HORIZONTAL;
	int row_start = 0, col_start = 0;

	srand((unsigned int)time(NULL));

	// Battleship game
	welcome_screen();
	// 1. Open an output file battleship.log for writing
	// 2. Simulate game of Battleship
	// 3. Outputs data to logfile
	// 4. Outputs stats to logfile
	// 5. Closes logfile
	
	return 0;
}