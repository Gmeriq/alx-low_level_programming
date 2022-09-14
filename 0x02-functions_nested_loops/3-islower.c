#include "main.h"
/**
 *Description:_islower -Checking whether a number is lowercase
 *@c:The alphabet variable
 *Return: 0 when not lowercase 1 when uppercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
putchar (c + '1');
return (1);
}
else
{
putchar (c + '0');
return (0);
}
}
