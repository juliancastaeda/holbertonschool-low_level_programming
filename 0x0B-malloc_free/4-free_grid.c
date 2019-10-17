#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid- free memory
 * @grid: free memory
 * @height: array
 * Return: (0).
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);
}
