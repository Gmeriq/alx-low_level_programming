#include "main.h"
/**
 * _puts - Print a string
 * @str - variable containing string
 * Return: 0 when success
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
putchar (*(str + i));
i++;
}
putchar(10);
}

