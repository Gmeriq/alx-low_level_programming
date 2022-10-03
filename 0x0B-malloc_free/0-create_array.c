#include "main.h"
/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character to initialize the array
 * Return: Pointer when succesful NULL when fail
 */
char *create_array(unsigned int size, char c)
{
char *p = "H";
p[0] = c;
size = strlen(p);
if (size == 0)
{
return (NULL);
}
if (p[size])
{
return (p);
}
else
return (NULL);
}
