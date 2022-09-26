#include "main.h"
/**
 * print_chessboard - prints a matrix
 * @a: pointer to the array printed
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(*(*(i + a) + j));
}
putchar('\n');
}
}
