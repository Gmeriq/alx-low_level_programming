#include "main.h"
/**
 * swap_int -Swap the value of two integers
 * @a: variable where the value is swaped into
 * @b: variable where the value is swapped
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
