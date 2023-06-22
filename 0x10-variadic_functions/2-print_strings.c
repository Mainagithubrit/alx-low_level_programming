#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the arguments
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *str;

va_start(list, n);
for (i = 0; i < n; i++)
{
str = va_arg(list, char *);

if (str)
printf("%s", str);

else
printf("(nil)");

if (i < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
