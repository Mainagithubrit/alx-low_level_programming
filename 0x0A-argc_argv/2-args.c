#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: count argument
 * @argv: array argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
int c = 0;
while (c < argc)
{
puts(argv[c]);
c++;
}
return (0);
}
