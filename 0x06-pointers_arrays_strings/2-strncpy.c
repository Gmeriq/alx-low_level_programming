#include "main.h"
#include <string.h>
/**
 * _strncpy - Copying a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
