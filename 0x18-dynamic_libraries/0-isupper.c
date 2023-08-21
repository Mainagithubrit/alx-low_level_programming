#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: char to check
 * Return: 0 if c is not an uppercase if not 1
 */

int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}

