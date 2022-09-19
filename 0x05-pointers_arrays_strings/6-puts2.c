#include "main.h"
/**
 * puts2 - Prints all characters in a string
 * @str: Variable containing the string
 * Return: Nothing
 */
void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
if (i % 2 == 0)
putchar (*(str + i));
i++;
}
putchar (10);
}
