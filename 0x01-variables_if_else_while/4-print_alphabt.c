#include <stdio.h>
/** 
 * main - This program prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char ch;
ch = 'a';
while 
(ch <= 'z')
{
if ((ch != 'q' &&  ch != 'e') && ch <= 'z')
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
