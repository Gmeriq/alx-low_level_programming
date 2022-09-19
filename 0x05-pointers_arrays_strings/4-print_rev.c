#include <string.h>
#include "main.h"
/**
 * print_rev - Printing string in reverse
 * @s: Variable being printed
 * Return: nothing
 */
void print_rev(char *s)
{
int len = strlen(s);
while (len--)
putchar (*(s + len));
putchar (10);
}
