#include "shell.h"
#include <stdlib.h>

/**
* free_grid - frees a two dimensional grid
* @grid: memory to free
* @len: distande to free
*/

void free_grid(char **grid, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
