#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string being reversed
 * Return: nothing
 */
void rev_string(char *s)
{
char aux;
int len = strlen(s);
int i = 0;
while (s[len] == '\0')
{
aux = s[len];
s[i] = s[len];
s[len] = aux;
len--;
}
}
