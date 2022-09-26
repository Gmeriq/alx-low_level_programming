#include "main.h"
/**
 * _strspn - function to return length of characters similar in s and accept
 * @s: Variable checked
 * @accept:variable checked against
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
char *t = accept;
while (*s++)
{
while (*accept++)
if (*(s - 1) == *(accept - 1))
{
c++;
break;
}
if (!(*--accept)
break;
accept = t;
}
return (c);
}
