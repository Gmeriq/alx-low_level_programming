#include <stdio.h>
/**
 *Description: _islower-Tests a character's case
 *@c: the variable tested
 *Return:0 when successful
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
