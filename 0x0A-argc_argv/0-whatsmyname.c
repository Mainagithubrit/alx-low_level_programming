#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array containing elements
 * Retun: 0
 */
int main(int argc, char **argv)
{
puts(argv[argc - 1]);
return (0);
}
