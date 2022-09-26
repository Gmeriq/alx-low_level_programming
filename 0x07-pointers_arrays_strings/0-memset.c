#include "main.h"
/**
 * _memset - Copy b in s n times
 * @s: variable copied into
 * @b: variable copied into s
 * @n: number of times b is copiedd
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{
s[i] = b;
}
return (s);
}
