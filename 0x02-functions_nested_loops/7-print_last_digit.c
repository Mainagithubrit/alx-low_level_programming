#include "main.h"


/**
 * print_last_digit - This function prints the last digit of a number
 * @x: The number to be printed
 * Return: 0
 */
int print_last_digit(int x)
{
int d;
if (x < 0)
x = -x;
d = x % 10;
if (d < 0)
d = -d
_putchar(d + '0');
return (d);
}
