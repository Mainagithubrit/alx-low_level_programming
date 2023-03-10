#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * @argc: number of aguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
int i = 0;
while (i < argc)
{
puts(argv[i]);
i++;
}
return (0);
}
