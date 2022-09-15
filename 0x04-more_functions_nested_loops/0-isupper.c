#include "main.h"
#include <stdio.h>
/**
 *int_isupper- Check case of character
 *Return:1 if uppercase 0 if otherwise
 *@c:variable checked
 */
int_isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
