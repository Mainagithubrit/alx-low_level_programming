#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: Number to find the factorial of
 * Return: If n is lower than 0, the function should return -1
 */

int factorial(int n)
{
int ans = n;
if (n < 0)

return (-1);
else if (n >= 0 && n <= 1)
return (1);

ans *= factorial(n - 1);

return (ans);
}
