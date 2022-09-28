#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: string printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar ('\n');
}
else
{
putchar (*s);
_puts_recursion(s + 1);
}
}
