#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: integer
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
