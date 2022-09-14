#include "main.h"
#include <stdio.h>
/**
 *Description:_abs-compute value of an interger
 *@z: Variable name
 *Return:0 when successful
 */
int _abs(int z)
{
return (z * ((z > 0) - (z < 0)));
}
