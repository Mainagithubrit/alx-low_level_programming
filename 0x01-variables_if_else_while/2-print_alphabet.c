#include <stdio.h>
/**
 * main - This program print the alphabetical order in lower case
 * Return: 0
 */
int main(void)
{
char lc;

for (lc = 'a'; lc <= 'z'; lc++);
{
	putchar(lc);
}
putchar('\n');
return (0);
}
