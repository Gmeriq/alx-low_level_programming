#include <stdio.h>
/**
 *Description:main-Printing all base 10 single digits
 *Return:Always 0 (success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
