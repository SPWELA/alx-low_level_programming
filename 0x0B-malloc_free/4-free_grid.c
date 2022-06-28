#include "main.h"
#include <stdlib.h>
/**
* free_grid - Entry point
* Description - A function that frees a 2 dimensional grid
* previously created by your alloc_grid function
* *@height: the function accepts an input saved into height
* *@grid: the function accepts an input saved into grid
* Return: Success (0)
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
