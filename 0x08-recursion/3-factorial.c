#include "main.h"
/**
 * factorial - factorial of n
 * @n: Integer containing the factorial number
 *
 * Return: the factorial of n or -1.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
