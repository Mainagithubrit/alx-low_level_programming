#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: the grid array
 * @height: height of array
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int index;
for (index = 0; index < height; index++)
free(grid[index]);
free(grid);
}
