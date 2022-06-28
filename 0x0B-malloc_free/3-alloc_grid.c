#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: int
 * @height: int
 * Return: int pointer
 */
int **alloc_grid(int width, int height)
{
	int **N, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	N = malloc(height * sizeof(int *));
	if (N == NULL)
	{
		free(N);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		N[i] = malloc(width * sizeof(int));
		if (N[i] == NULL)
		{
			for (j = i; j > 0; j++)
				free(N[j]);
			free(N);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			N[i][j] = 0;
			if (N[i] + j == NULL)
				free(N[i] + j);
		}
	}
	return (N);
}
