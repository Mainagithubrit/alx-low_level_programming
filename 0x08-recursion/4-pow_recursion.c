#include "main.h"

/**
 * _pow_recursion -  a function that returns
 * the value of x raised to the power of y
 *
 * @x: the digit to be raised
 * @y: the digit to raise by
 * Return: If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
int result = x;

if (y < 0)
return (-1);
else if (y == 0)
return (1);

result *= _pow_recursion(x, y - 1);
return (result);
}
