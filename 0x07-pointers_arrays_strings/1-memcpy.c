#include "main.h"
/**
 * _memcpy - copying src n bytes to dest
 * @dest: variable copied into
 * @src: variable copied from
 * @n: number of bytes copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
dest[j] = src[j];
}
return (dest);
}
