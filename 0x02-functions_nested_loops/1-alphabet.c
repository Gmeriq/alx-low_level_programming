#include "main.h"
/**
 *Description:main-Printing all alphabets
 *Return:Always 0 when success
 */
void print_alphabet(void)
{
int ch;
for(ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
