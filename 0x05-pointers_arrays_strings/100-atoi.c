#include "main.h"
/**
 * _atoi - Entry point
 * @s: input
 * Return: Always 0 (Success)
 */
int _atoi(char *arr)
{
int i = 0, convert = 0;
for (i = 0; arr[i] != '\0'; ++i)
{
convert = convert * 10 + arr[i] - '0';
}
return (convert);
}
