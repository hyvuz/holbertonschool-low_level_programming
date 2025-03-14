#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Pointer to the 2D array.
 * @height: Number of rows in the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]); /* Free each row */

	free(grid); /* Free the main array */
}
