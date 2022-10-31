#include "main.h"
/**
 * set_bit - sets a value of a bit to 1 at given index
 * @n: Pointer to the bit value
 * @index: The index of n to change the value of
 * Return: 1 for success, or -1 for an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n  = *n | 1 << index;

	return (1);
}
