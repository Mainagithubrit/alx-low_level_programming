#include "main.h"
/**
 * _square_root - a function that returns
 * the natural square root of a number.
 * @n: integer
 * @i: integer
 * Return: 0
 */
int _square_root(int i, int n)
{
if (n == 0 || n == 1)
{
return (n);
}
else if (i * i < n)
{
return (_square_root(i + 1, n));
}
else if (i * i == n)
{
return (i);
return (-1);
}
return (-1);

}
/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: integer
 * Return: 0
 */
int _sqrt_recursion(int n)
{
int i = 0;
if (i < 0)
{
return (-1);
}
else
{
return (_square_root(i, n));
}
}

