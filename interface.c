#include <stdio.h>
#include "core.h"

void printboard(STATE *s)
{
    int r = 0, c = 0, u = 0;
    while (r <= 8)
    {
        for (c = 0; c <= 8; c++)
        {
            putchar(s->board[r][c].value);
            putchar(' ');
        }
        putchar(' ');
        putchar(' ');
        putchar(' ');
        for (int i = 0; i <= 8; i++)
        {
            while (u <= 8)
            {
                putchar(s->board[r][i].possible_values[u]);
                putchar(' ');
                u++;
            }
        }
        r++;
        putchar('\n');
    }
}