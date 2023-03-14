#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
int i, j, **ptr;
if (width <= 0 || height <= 0)
return (NULL);
ptr = (int **)malloc(height * sizeof(int *));
if (ptr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
ptr[i] = (int *)malloc(width * sizeof(int));
if (ptr[i] == NULL)
{
for (; i >= 0; i--)
free(ptr[i]);
free(ptr);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
ptr[i][j] = 0;
return (ptr);
}
