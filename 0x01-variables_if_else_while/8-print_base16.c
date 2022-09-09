#include <stdio.h>
/**
 *Description:mainPrint base 16 numbers
 *Return:Always 0 (success)
 */
int main(void)
{
int num;
for (num = '0'; num <= '15' ; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
