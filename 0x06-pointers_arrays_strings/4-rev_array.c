#include "main.h"
/**
 * reverse_array - Reverses the content in an array
 * @a: array of intergers
 * @n: number of elements in array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
int *p, aux, i, k;
p = a;
for (i = 0; i < n; i++)
p++;
for (k = 0; k < n / 2; k++)
{
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}
