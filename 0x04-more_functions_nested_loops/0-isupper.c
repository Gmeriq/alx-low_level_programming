#include "main.h"
/**
 * _isupper-Check case of character
 * @c: Character checked for status
 * Return:1 when upper o when lower
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
