#include "main"
/**
 *Description: print_last_digit - Print the last digit
 *@ -the variable
 *return:0 when successful
 */
int print_last_digit(int m)
{
int x;
x = (m % 10);
if (x < 0)
x = (-1 * x);
putchar (x + '0');
return (x);
}
