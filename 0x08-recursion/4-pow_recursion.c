#include "main.h"
/**
 * _pow_recursion - x raised for the power of y
 * @x: Integer raised to the power of y
 * @y: the number of times x is raised
 * 
 * Return: the result of x^y or -1
 */
int _pow_recursion(int x, int y)
{
if (y <0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
