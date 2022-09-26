#include "main.h"
/**
 * _strstr - returns a pointer to the first occurence of a character from another string
 * @haystack: string compared
 * @needle: string containing characters searched for
 * Return: a pointer to the first occurrence else '\0'
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
char *p;
for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j]; j++)
{
if (haystack[i] == needle[0])
{
p = &haystack[i];
return (p);
}
}
}
return ('\0');
}
