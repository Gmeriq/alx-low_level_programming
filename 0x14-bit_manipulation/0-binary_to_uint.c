#include "main.h"
/**
 * _pow - raises base to power
 *
 * @base: integer to raise
 * @power: power to raise
 *
 * Return: Integer raised to a power
 */
unsigned int _pow(unsigned int base, int power)
{
	unsigned int output = 1;

	if (power == 0)
		return (1);

	while (power > 0)
	{
		output *= base;
		power--;
	}
	return (output);
}
/**
 * binary_to_uint - converts binary to decimal
 * @b: the binary number
 *
 * Return: the decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, i;
	int len, power = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	len--;
	while (len >= 0)
	{
		if (b[len] == '1')
		{
			i = _pow(2, power);
			total += i;
		}
		power++;
		len--;
	}
	return (total);
}
