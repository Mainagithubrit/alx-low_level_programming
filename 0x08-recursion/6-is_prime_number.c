#include "main.h"

int is_divisible(int n, int div);
int is_prime_number(int n);

/**
 * is_prime_number -  a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: number to evaluate
 * Return: 0
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_divisible(n, n - 1));
}

/**
 * is_divisible - checks if a number is divisible
 * @n: the number to be checked
 * @div: the iterator
 *
 * Return: 0
 */
int is_divisible(int n, int div)
{
if (div == 1)
return (1);

if (n % div == 0 && div > 0)
return (0);

return (is_divisible(n, div - 1));
}
