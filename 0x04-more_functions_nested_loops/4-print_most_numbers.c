#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * followed by a new line and doe not print 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
char x;
for (x = '0'; x <= '9' ; x++)
{
if (!(x == '2' || x == '4'))
_putchar(x);
}
_putchar('\n');
}
