#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an interger
 * @n: contains the integer
 * Return: nothing
 */
void print_number(int n)
{
int pot_10 = 1, sign = 1, tmp = n;
while (tmp / 10)
{
pot_10 = pot_10 * 10;
tmp = tmp / 10;
}
if (tmp < 0)
{
sign = sign * -1;
putchar('-');
}
while (pot_10 > 0)
{
tmp = n / pot_10;
putchar((tmp *sign)+'0');
n = n - (tmp *pot_10);
pot_10 /= 10;
}
}
