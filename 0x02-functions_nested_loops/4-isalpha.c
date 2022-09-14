#include "main"
/**
 *Description:_isalpha- Cheking if a letter is alpha
 *Return:1 if alpha 0 when not
 *@c: variable for the alphabets
 */
int _isalpha(int c)
{
int r;
r = isalpha(c);
if (r == true)
{
return (1);
}
else
{
return (0);
}
}
