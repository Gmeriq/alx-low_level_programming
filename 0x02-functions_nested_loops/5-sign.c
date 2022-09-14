#include "main.h"
/**
 *Description:print_sign-Find the sign of a number
 *Return: 1 when true 0 when false
 *@n:is the variable
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
putchar ('+');
}
else if (n == 0)
{
return (0);
putchar ('0');
}
else
{
return (-1);
putchar ('-');
}
}
