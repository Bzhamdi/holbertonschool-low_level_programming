#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - frees a 2 dimensional.
 *@grid: param
 *@height:param
 *
 *
 */
void free_grid(int **grid, int height)
{
if (grid == NULL)
return;
while (height > 0)
{
height--;
free(grid[height]);
}
free(grid);
}
