#include "main.h"
/**
 * reverse_array - a function that reverses an array of integers.
 * @a: the array
 * @n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
n--;
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
