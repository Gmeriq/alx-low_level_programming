#include "main.h"
/**
 * string_toupper - Converting small case to uppercase
 * @c: array of characters
 * Return: Characters in uppercase
 */
char *string_toupper(char *c)
{
int i = 0;
while (c[i])
{
if (c[i] >= 97 && c[i] <= 122)
c[i] = c[i] - 32;
i++;
}
return (c);
}
