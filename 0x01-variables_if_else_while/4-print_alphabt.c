#include <stdio.h>
/**
 * Description:main-Printing all alphabets except q and e
 * Return:Always 0 (success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z' && ch != 'e' && ch != 'q'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
