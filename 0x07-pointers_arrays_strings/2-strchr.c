#include "main.h"
/**
 * _strchr - look for a c character in a string
 * @s:The string searched through
 * @c:The character searched for
 * Return: s
 */
char *_strchr(char *s, char c)
{
int a = 0, b;
while (s[a])
{
a++;
}
for (b = 0; b <= a; b++)
{
if (c == s[b])
{
s += b;
return (s);
}
}
return ('\0');
}
