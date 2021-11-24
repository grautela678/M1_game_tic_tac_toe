/**
 * @file main.c
 * @author GEA
 * @brief Main code to call all the other functions
 * @version 0.1
 * @date 2021-08-30
 * 
 * @copyright Copyright (c) 2021
 * 
 * @note Do not upload this file to submitty as submitty already has this file
 *          and will create error if uploaded
 */
#include <stdio.h>
#include <stdlib.h>
#include"inc.h"
/************************************************
 ** MAIN FUNCTION
 ************************************************/
int main() {
  char** Board = createboard();
  char winner = '\0';
  char row;
  char col;
  char turn = 'X';

  while(!winner && !isdraw(Board)) {
    print(Board);

    // Read Move
    printf("Player %c, make your move: ", turn);
    fflush(stdout);
    scanf(" %c %c", &row, &col);

    // Make move if square is free
    int rowind = row - 'A';
    int colind = col - '1';
    if (Board[rowind][colind] == ' ') {
      Board[rowind][colind] = turn;
      if (turn == 'X') {
	turn = 'O';
      } else {
	turn = 'X';
      }
      winner = winningmove(Board, rowind, colind);
    } else {
      printf("Square occupied; try again.\n");
    }
  }
}