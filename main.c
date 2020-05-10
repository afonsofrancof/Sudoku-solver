#include "core.h"
#include "logic.h"
#include "interface.h"

int main()
{
    STATE *board;
    board = reset_board(); // To start the game we first reset the board.
    possiblevalues(board, 4, 5);
    printboard(board);
    return 0;
}