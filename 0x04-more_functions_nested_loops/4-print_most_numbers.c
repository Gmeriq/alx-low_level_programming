#include "main.h"
/**
 * print_most_members-Print most members
 */
void print_most_members(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
if (c != '2' || c != '4')
{
putchar (c);
}
putchar ('\n');
}
}
