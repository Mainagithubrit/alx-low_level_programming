#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line
 * @size: the size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
int x, y, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (y = 0; y <= (size - 1); y++)
{
for (x = 0; x <= (size - 1) - y; x++)
{
_putchar(' ');
}
for (z = 0; z <= y; z++)
{
_putchar('#');
}
}
}
}
