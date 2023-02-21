#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 * Return: 0
 */
void times_table(void)
{
int num, times, prod;
for (num = 0; num <= 9; num++)
{
for (times = 1; times <= 9; times++)
{
prod = times * num;

if (times == 0)
{
_putchar(prod + '0');
}

if (prod <= 9 && times != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
}

else if (prod >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
}
_putchar('\n');
}
}
