#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function
 * @grid: the 2 dimesion
 * @height: height dimension
 * Return: 0
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
