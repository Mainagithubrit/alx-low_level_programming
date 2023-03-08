#include "main.h"
/**
 * _prime - Recursion
 * @num: number
 * @i: iterate number
 * Return: 0
 */
int _prime(int num, int i)
{
if (i == num - 1)
{
return (1);
}
else if (num % i == 0)
{
return (0);
}
if (num % i != 0)
{
return (_prime(num, i + 1));
}
return (0);
}
/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: number
 * Return: 0
 */
int is_prime_number(int n)
{
int i;
i = 2;
if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (_prime(n, i));
}
