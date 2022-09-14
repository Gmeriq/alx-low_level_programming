#include "main"
/**
 *Description:_isalpha- Cheking if a letter is alpha
 *Return:1 if alpha 0 when not
 *@c: variable for the alphabets
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z')) || (c >= 'A' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
