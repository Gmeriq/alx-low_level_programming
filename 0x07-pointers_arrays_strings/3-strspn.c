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
char *p;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
p = &s[i];
t = strlen(p);
return (t);
}
}
}
}
