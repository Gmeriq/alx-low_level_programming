#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number printed in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	char *b;
	int i = 0;
	int len;

	for (; b[i]; i++)
	{
		b[i] = n % 2;
		n = n / 2;
	}
	len = strlen(b);
	for (; b[len]; n--)
	{
		_putchar(b[len]);
	}
}
