#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: the string to be half printed
 */
void puts_half(char *str)
{
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
str -= (length / 2);
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
