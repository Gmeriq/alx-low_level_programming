#include "main.h"
/**
 * leet - change characters to leet
 * @z: array of characters being changed
 * Return: array in 1337
 */
char *leet(char *z)
{
char alpha[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int i = 0, j;
while (z[i])
{
for (j = 0; alpha[j]; j++)
{
if (z[i] == alpha[j])
{
z[i] = num[j];
}
}
i++;
}
return (z);
}
