#include <stdio.h>

void print_chessboard(char (*a[8]));

void main()
{
char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };

print_chessboard(&board[0][0]);
}


void print_chessboard(char (*a[8]))
{
int i = 0;

    for (; i < 8; i++)  
    {  
            int ii = 0;  
            for (; ii < 8; ii++)  
                    putchar(a[i][ii]);  
            putchar('\n');  
    }  
}
