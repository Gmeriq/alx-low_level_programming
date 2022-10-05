#include "main.h"
/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character to initialize the array
 * Return: Pointer when succesful NULL when fail
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
else if (str == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
str[i] = c;
}
}
return (str);
}
