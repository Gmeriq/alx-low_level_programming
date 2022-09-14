#include "main.h"
/**
 *Description: print_last_digit - Print the last digit
 *@m -the variable
 *return:0 when successful
 */
int print_last_digit(int m)
{
if (m < 0)
m = (-1 * m);
putchar((m % 10) + '0');
return (m % 10);
}
