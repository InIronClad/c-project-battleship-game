/*******************************************************************************************
* Programmer: Robert Crismon                                                               *
* Class: CptS 121, Spring  2016; Lab Section 3                                             *
* Programming Assignment: PA 6                                                             *
* Date: March, 2016																		   *
* Description: This program plays an interactive game of Battleship.					   *
* Collaboration:																		   *
*******************************************************************************************/

#ifndef pa_6_h
#define pa_6_h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum direction // from PA6Help(1,2,3,etc)
{
	HORIZONTAL = 1, VERTICAL
}Direction;

void welcome_screen(void);
void initialize_game_board(char board[][10], int row_size, int col_size);
void print_board(char board[][10], int row_size, int col_size);
void select_who_starts_first(void);
int manually_place_ships_on_board(char board[][10], int row_start, int col_start, Direction dir,
	char ship_symbol, int length);
void randomly_place_ships_on_board(int *row_start, int *col_start, Direction dir,
	int length);
void check_shot(void);
void is_winner(void);
void update_board(void);
void display_board(void);
void output_current_move(void);
void check_if_sunk_ship(void);
void output_stats(void);


#endif pa_6_h