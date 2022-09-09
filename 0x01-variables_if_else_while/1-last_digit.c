#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *Description:main-Printing the last digit of a number
 *Return:Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld > 5)
{
printf("The last digit of %d and is greater than 5", n);
}
else if (ld == 0)
{
printf("The last digit of %d and is 0", n);
}
else if (ld < 6 && ld != 0)
{
printf("The last digit of %d and is less than 6 and not 0", n);
}
return (0);
}
