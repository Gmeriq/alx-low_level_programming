#include <stdio.h>
/**
 *Description:main-Print numbers using putchar
 *Return:Always 0 (success)*/
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
