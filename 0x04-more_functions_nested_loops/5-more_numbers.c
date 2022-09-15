#include "main.h"
/**
 * more_numbers-Print 10 times
 */
void more_numbers(void)
{
int j, k;
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 14; k++)
{
if (k > 9)
putchar ((k / 10) + '0');
putchar ((k % 10) + '0');
}
putchar('\n');
}
}
