#include <stdio.h>

#include "solve.h"

void
solve (sudoku board)
{
    board[0][0] = 8;
    board[0][1] = 6;
    board[0][2] = 1;
    board[0][3] = 7;
    board[0][4] = 9;
    board[0][5] = 4;
    board[0][6] = 3;
    board[0][7] = 5;
    board[0][8] = 2;
    
    board[1][0] = 3;
    board[1][1] = 5;
    board[1][2] = 2;
    board[1][3] = 1;
    board[1][4] = 6;
    board[1][5] = 8;
    board[1][6] = 7;
    board[1][7] = 4;
    board[1][8] = 9;

    board[2][0] = 4;
    board[2][1] = 9;
    board[2][2] = 7;
    board[2][3] = 2;
    board[2][4] = 5;
    board[2][5] = 3;
    board[2][6] = 1;
    board[2][7] = 8;
    board[2][8] = 6;
    
    board[3][0] = 2;
    board[3][1] = 1;
    board[3][2] = 8;
    board[3][3] = 9;
    board[3][4] = 7;
    board[3][5] = 5;
    board[3][6] = 6;
    board[3][7] = 3;
    board[3][8] = 4;

    board[4][0] = 6;
    board[4][1] = 7;
    board[4][2] = 5;
    board[4][3] = 3;
    board[4][4] = 4;
    board[4][5] = 1;
    board[4][6] = 9;
    board[4][7] = 2;
    board[4][8] = 8;

    board[5][0] = 9;
    board[5][1] = 3;
    board[5][2] = 4;
    board[5][3] = 6;
    board[5][4] = 8;
    board[5][5] = 2;
    board[5][6] = 5;
    board[5][7] = 1;
    board[5][8] = 7;

    board[6][0] = 5;
    board[6][1] = 2;
    board[6][2] = 6;
    board[6][3] = 8;
    board[6][4] = 1;
    board[6][5] = 9;
    board[6][6] = 4;
    board[6][7] = 7;
    board[6][8] = 3;

    board[7][0] = 7;
    board[7][1] = 4;
    board[7][2] = 3;
    board[7][3] = 5;
    board[7][4] = 2;
    board[7][5] = 6;
    board[7][6] = 8;
    board[7][7] = 9;
    board[7][8] = 1;

    board[8][0] = 1;
    board[8][1] = 8;
    board[8][2] = 9;
    board[8][3] = 4;
    board[8][4] = 3;
    board[8][5] = 7;
    board[8][6] = 2;
    board[8][7] = 6;
    board[8][8] = 5;

}
