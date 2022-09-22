#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @x: array containg string
 * Return: string
 */
char *cap_string(char *x)
{
char spc[] = { 32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int len = 13;
int a = 0;
while (x[a])
{
while (len <= 13)
{
if ((a == 0 || x[a - 1] == spc[len]) && (x[a] >= 97 && x[a] <= 122))
{
x[a] = x[a] - 32;
len++;
}
}
a++;
}
return (x);
}
