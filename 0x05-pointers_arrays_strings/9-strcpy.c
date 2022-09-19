#include "main.h"
/**
 * _strcpy - Copy form one variable to another
 * @src: Variable copied form
 * @dest:variable copied to
 * Return:dest when success
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
if (src[i] != '\0')
{
for (i = 0; *(src + i) != '\0'; i++)
{
*(dest + i) = *(src + i);
}
}
*(dest + i) = '\0';
return (dest);
}
