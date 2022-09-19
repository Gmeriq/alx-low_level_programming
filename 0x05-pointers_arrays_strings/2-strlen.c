#include "main.h"
#include <string.h>
/**
 * _strlen - Checking the length of a string
 * @s: Pointer to the variable checked
 * Return: 0 when success
 */
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
len++;
return (len);
}
