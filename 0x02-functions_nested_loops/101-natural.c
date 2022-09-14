#include <stdio.h>
/**
 *Description:main-print the sum of all multiples
 *Return:Always 0 when successful
 */
int main(void)
{
int i, res;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
res += i;
printf("%d\n", res);
}
return (0);
}
