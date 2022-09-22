#include "main.h"
/**
 * reverse_array - Reverses the content in an array
 * @a: array of intergers
 * @n: number of elements in array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
int aux, i, k = n - 1;
for (i = 0; i < k; i++)
{
aux = a[i];
a[i] = a[k];
a[k] = aux;
k--;
}
}
