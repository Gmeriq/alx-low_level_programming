#include "main.h"
/**
 * _strspn - function to return length of characters similar in s and accept
 * @s: Variable checked
 * @accept:variable checked against
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, t;
while (accept[i])
{
while (s[j] != 32)
{
if (accept[i] == s[j])
{
t++;
}
j++;
}
i++;
}
return (t);
}
