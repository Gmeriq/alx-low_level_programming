#include "main.h"
/**
 * _strlen_recursion - length of a string using recursion
 * @s: string measured
 * Return:Length of string when successful 0 when fail
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
