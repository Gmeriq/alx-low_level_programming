#include "main.h"
/**
 *Description: times_table - Creating multiplication table
 */
void times_table(void)
{
int row, col, num;
for (row = 0; row <= 9; row++)
{
putchar('0');
putchar(',');
putchar(' ');
for (col = 0; col <= 9; col++)
{
num = (row * col);
if ((num / 10) > 0)
putchar((num / 10) > 0);
else
putchar('');
if (col < 9)
putchar(',');
putchar(' ');
}
putchar('\n');
}
}
