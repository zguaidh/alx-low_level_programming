#include "main.h"
#include <stdlib.h>
/**
 *free_grid - function that frees a 2 dimentional grid
 *@grid: the grid
 *@height: the height of the grid
 *
 *Return: no return
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
