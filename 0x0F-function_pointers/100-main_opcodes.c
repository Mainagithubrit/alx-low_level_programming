#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opocodes
 * @argc: argument
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
int bytes;
char *arr = (char *)main;

if (argc != 2)

printf("Error\n"), exit(1);
bytes = atoi(argv[1]);

if (bytes < 0)
printf("Error\n"), exit(2);

while (bytes--)
printf("%02hhx%s", *arr++, bytes ? " " : "\n");
return (0);
}
