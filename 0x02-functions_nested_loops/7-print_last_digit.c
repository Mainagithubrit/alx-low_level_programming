#include "main.h"


/**
 * print_last_digit - This function prints the last digit of a number
 * @x: The number to be printed
 * Return: 0
 */
int print_last_digit(int x)
{
int d = x % 10;
if (d < 0)
d *= -1;
_putchar(d + '0');
return (0);
}
