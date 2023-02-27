#include "main.h"
/**
 * print_rev -  a function that prints a string,
 * in reverse, followed by a new line.
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int length = 0;
int a;
while (*s != '\0')
{
length++;
s++;
}
s--;
for (a = length; a < 0; a--)
{
putchar(*s);
s--;
}
putchar('\n');
}
