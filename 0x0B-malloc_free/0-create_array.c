#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: number of array
 * @c: character
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int count = 0;

if (size == 0)
return (NULL);

arr = (char *)(malloc(size * sizeof(char)));

if (!arr)
return (NULL);
while  (count < size)
{
arr[count] = c;
count++;
}
return (arr);
}
