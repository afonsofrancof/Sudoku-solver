#include "core.h"

VALUE transformNumToVal(int a)
{
    switch (a)
    {
    case 1:
        return ONE;
    case 2:
        return TWO;
    case 3:
        return THREE;
    case 4:
        return FOUR;
    case 5:
        return FIVE;
    case 6:
        return SIX;
    case 7:
        return SEVEN;
    case 8:
        return EIGHT;
    case 9:
        return NINE;
    }
}

void possiblevalues(STATE *s, int col, int row)
{
    int testval = 1;
    int existcheck = 0;

    for (int r = 0; r <= 8; r++)
    {
        for (testval = 1; testval <= 9; testval++)
        {

            for (int c = 0; c <= 8; c++)
            {
                if (s->board[r][c].value = transformNumToVal(testval))
                    existcheck = 1;
            }
            if (!existcheck)
                s->board[row][col].possible_values[testval - 1] = transformNumToVal(testval);
        }
    }
}
