#include "main.h"
/**
 * helper - finds the square root of a number
 * @a: the number being square rooted
 * @b:the square root of a
 * Return: the square root when successful
 */
int helper(int a, int b)
{
if (b * b > a)
{
return (-1);
}
else if (b * b == a)
{
return (b);
}
else
return (helper(a, b + 1));
return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n:Integer being square rooted
 * Return: square root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (helper(n, 1));
}
