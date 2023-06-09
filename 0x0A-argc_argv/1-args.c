#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: count arguments
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv;

printf("%i\n", argc - 1);
return (0);
}
