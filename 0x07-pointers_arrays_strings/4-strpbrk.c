#include "main.h"
/**
 * _strpbrk - compares two strings and returns the value that first matches
 * @s: string searched through
 * @accept:string used to search
 * Return:s[i] when similar and '\0' when not
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
p = &s[i];
return (p);
}
}
}
return ('\0');
}
