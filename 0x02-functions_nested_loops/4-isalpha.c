#include "main.h"
/**
 *Description:_isalpha- Check for alphabets
 *@c: variable tested
 *Return: Always 0 when successful
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
