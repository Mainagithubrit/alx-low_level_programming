#include "main.h"
#include <stdio.h>

/**
 *  main - a program that prints the numbers from 1 to 100
 *  followed by a new line
 *  But for multiples of three print Fizz instead of the number
 *  for the multiples of five print Buzz.
 *  Return: 0
 */
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 != 0)
{
printf("Fizz");
}
else if (x % 5 == 0 && x % 3 != 0)
{
printf("Buzz");
}
else if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz");
}
else if  (x == 1)
{
printf("%d ", x);
}
else
{
printf("%d ", x);
}
}
printf("%d ", x);
return (0);
}
