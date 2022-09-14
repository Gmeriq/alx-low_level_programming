#include "main.h"
/**
 *Description:Print_alphabet-Printing all alphabets 10 times
 */
void print_alphabet_x10(void)
{
int num;
int ch;
for (num = 0; num <= 10; num++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar (ch);
}
putchar ('\n');
}
}
