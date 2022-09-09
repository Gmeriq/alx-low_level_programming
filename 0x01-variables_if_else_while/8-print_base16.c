#include <stdio.h>
/**
 *Description:mainPrint base 16 numbers
 *Return:Always 0 (success)
 */
int main(void)
{
int num;
for (num = '0'; num <= '16' ; num++)
{
putchar(num);
}
for (num = 'a'; num <= 'f' ; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
