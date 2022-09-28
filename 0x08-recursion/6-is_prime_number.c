#include "main.h"
/**
 * helper - return 1 if prime number
 * @i: number checked against
 * @n: number being checked
 * Return: 1 on success 0 if fail
 */
int helper(int n, int i)
{
if (n >= (i * i))
{
if (n % i == 0 || n % (i + 2) == 0)
return (0);
i = i + 6;
}
return (1);
}
/**
 * is_prime_number - This function returns a 1 if input integer is prime
 * @n: The integer to test
 * Return: 1 if the n is prime, otherwise 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else if (n <= 3)
return (1);
else if (n % 2 == 0 || n % 3 == 0)
return (0);
else
return (helper(n, 5));
}
