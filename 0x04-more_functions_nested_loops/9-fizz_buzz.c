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
char a[] = "Fizz";
char b[] = "Buzz";
char ab[] = "FizzBuzz";

for (x = 1; x <= 100; x++)
{
if (x == 100)
printf("%s ", b);
else if ((x % 3 == 0) && (x % 5 == 0))
printf("%s ", ab);
else if (x % 3 == 0)
printf("%s ", a);
else if (x % 5 == 0)
printf("%s ", b);
else
printf("%d ", x);
}
printf("\n");
return (0);
}
