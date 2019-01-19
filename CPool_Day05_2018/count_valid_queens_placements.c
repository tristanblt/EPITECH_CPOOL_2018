/*
** EPITECH PROJECT, 2018
** count_valid_queens_placements
** File description:
** count the possibility of n queens in n*n board
*/

void queens_row(int r, int n, int *soluc, int board[20]);

int my_abs(int n)
{
    if (n < 0) {
        return (n*-1);
    }
    return (n);
}

int is_can_place_queens(int r, int col, int chess[20])
{
    int i = 1;
    int is_in_col = 0;

    while (i <= r-1) {
        is_in_col = 0;
        if (chess[i] == col)
            return 0;
        else
            is_in_col = 1;
        if (my_abs(chess[i]-col) == my_abs(i-r) && is_in_col)
            return (0);
        i++;
    }
    return (1);
}

void is_soluc(int r, int *soluc, int chess[20], int n)
{
    if (r != n)
        queens_row(r+1, n, soluc, chess);
    else
        *soluc = *soluc + 1;
}

void queens_row(int r, int n, int *soluc, int chess[20])
{
    int col = 1;
    while (col <= n) {
        if (is_can_place_queens(r, col, chess)) {
            chess[r]=col;
            is_soluc(r, soluc, chess, n);
        }
        col++;
    }
}

int count_valid_queens_placements(int n)
{
    int p = 0;
    int *soluc = &p;
    int chess[20];

    queens_row(1, n, soluc, chess);
    return (p);
}