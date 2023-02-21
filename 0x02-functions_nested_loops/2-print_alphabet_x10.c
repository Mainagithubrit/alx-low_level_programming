#include "main.h"


/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
char letter;
int i;

for (letter = 'a'; letter <= 'z' ; letter++)
{
_putchar(letter);

for (i = 0; i <= 10; i++)
{
_putchar('\n');
}
}
}
