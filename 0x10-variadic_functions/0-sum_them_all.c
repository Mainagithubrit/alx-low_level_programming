#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: the arguments
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(list, n);

for (i = 0; i < n; i++)
sum += va_arg(list, int);

va_end(list);
return (sum);
}
