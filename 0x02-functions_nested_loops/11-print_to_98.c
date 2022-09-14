#include "main.h"
/**
 *Description: print_to_98-Prints all natural numbers
 *@n: the variable
 *Return: 0 when successful
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ")
}
n--;
}
}
else
printf(98);
}
printf("\n");
}
