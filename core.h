#ifndef _CORE
#define _CORE
#include <stdlib.h>
typedef enum
{
    EMPTY = '*',
    ONE = '1',
    TWO = '2',
    THREE = '3',
    FOUR = '4',
    FIVE = '5',
    SIX = '6',
    SEVEN = '7',
    EIGHT = '8',
    NINE = '9'
} VALUE;

typedef struct
{
    VALUE value;
    VALUE possible_values[9];
} POSITION;

typedef struct
{
    POSITION board[9][9]; //list of positions that make the board

} STATE; // State of the game at any given point in time.

STATE *reset_board();

#endif