#include "core.h"
#include <stdio.h>

STATE *reset_board()
{
    int c, r, u = 0;
    STATE *s;
    s = malloc(sizeof(STATE));
    r = 0;
    while (r <= 8)
    {
        for (c = 0; c <= 8; c++)
        {
            s->board[r][c].value = EMPTY;
            while (u <= 8)
            {
                s->board[r][c].possible_values[u] = EMPTY;
                u++;
            }
        }
        r++;
    }
    s->board[4][4].value = FOUR;
    return s;
}
