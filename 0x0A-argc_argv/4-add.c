#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * Num - checks if a string is a number or not
 * @s: sting to be checked
 * Return: Always 0 (success)
 */
int Num(const char *s)
{
while (*s != '\0')
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
/**
 * main - a program that adds positive numbers.
 * @argc: number of arguements
 * @argv: array arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
int count = 1, sum = 0;
while (count < argc)
{
if (Num(argv[count]) == 0)
{
puts("Error");
return (1);
}
sum = sum + atoi(argv[count]);
count++;
}
printf("%d\n", sum);
return (0);
}
