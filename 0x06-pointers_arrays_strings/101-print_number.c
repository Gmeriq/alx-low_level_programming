#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an interger
 * @n: contains the integer
 * Return: nothing
 */
void print_number(int n)
{
unsigned int t;
if (n < 0)
{
putchar('-');
n = n * -1;
}
t = n;
if (t / 10)
print_number(t / 10);
putchar(t % 10 + '0');
}
