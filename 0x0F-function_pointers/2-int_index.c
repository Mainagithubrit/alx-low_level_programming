#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer.
 * @array: the array
 * @size: size of elements in array
 * @cmp: a pointer to the function to be used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
