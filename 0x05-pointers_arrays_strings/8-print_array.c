#include "main.h"
/**
 * print_array - Print elements in an array
 * @n: number of elements to be printed
 * @a:variable to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
putchar (10);
}
