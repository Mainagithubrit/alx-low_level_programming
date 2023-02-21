#include "main.h"


/**
 * print_sign - This function prints the sign of a number
 * @n: the number of the sign to print
 * Return: 1 if greater than n
 * 0 if equal to 0
 * -1 if less than n
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
