/*******************************************************************************************
* Programmer: Robert Crismon                                                               *
* Class: CptS 121, Spring  2016; Lab Section 3                                             *
* Programming Assignment: PA 6                                                             *
* Date: March, 2016																		   *
* Description: This program plays an interactive game of Battleship.					   *
* Collaboration:																		   *
*******************************************************************************************/

#include "pa_6.h"

void welcome_screen(void)
{
	printf("Welcome to Battleship!\n");
	printf("This is a two-player game, with you (the user) as Player 1, and the computer as Player 2.\n");
	printf("Rules:\n");
	printf("1. If placing ships manually, they must be placed vertically or horizontally. You cannot place ships diagonally.\n");
	printf("2. during play, if either player misses, an 'm' character will replace the '-' character on the board at that position.\n");
	printf("If either player hits, then the '*' character will replace the '-' character on the board at that position.\n");
	printf("3. the game is won when one player sinks all of the other player's ships, i.e. when all ships' hit slots have the '*' character, indicating they were hit and sunk.\n");

	system("pause");
}

void initialize_game_board(char board[][10], int row_size, int col_size)
{
	int row_index = 0, col_index = 0;

	for (row_index = 0; row_index < row_size; row_index++) // controlling the row
	{
		for (col_index = 0; col_index < col_size; col_index++) // controlling the column
		{
			board[row_index][col_index] = '~';
		}
	}
}

void print_board(char board[][10], int row_size, int col_size)
{
	int row_index = 0, col_index = 0;

	for (row_index = 0; row_index < row_size; row_index++) // controlling the row
	{
		for (col_index = 0; col_index < col_size; col_index++) // controlling the column
		{
			//board[row_index][col_index] = '~';
			printf(" %c ", board[row_index][col_index]);
		}
		putchar('\n'); // stdio
	}
}

void select_who_starts_first(void)
{

}

Direction generate_direction(void)
{
	Direction dir = HORIZONTAL;

	// Recall, HORIZONTAL = 1, VERTICAL = 2
	dir = (Direction)((rand() % 2) + 1);// VERTICAL;

	return dir;
}

int manually_place_ships_on_board(char board[][10], int row_start, int col_start, Direction dir,
	char ship_symbol, int length)
{
	int index = 0;

	for (index = 0; index < length; ++index)
	{
		if (dir == HORIZONTAL)
		{
			board[row_start][col_start + index] = ship_symbol;
		}
		else //if (dir == HORIZONTAL)
		{
			board[row_start + index][col_start] = ship_symbol;
		}
	}
}

void randomly_place_ships_on_board(char board[][10], int *row_start, int *col_start, Direction dir,
	char ship_symbol, int length)
{
	int index = 0;

	if (dir == HORIZONTAL)
	{
		*row_start = rand() % 10; // 0 - 9
		*col_start = rand() % (10 - (length - 1));
	}
	else //if (dir == HORIZONTAL)
	{
		*row_start = rand() % (10 - (length - 1));
		*col_start = rand() % 10; // 0 - 9
	}

	for (index = 0; index < length; ++index)
	{
		if (dir == HORIZONTAL)
		{
			board[*row_start][*col_start + index] = ship_symbol;
		}
		else //if (dir == HORIZONTAL)
		{
			board[*row_start + index][*col_start] = ship_symbol;
		}
	}
}