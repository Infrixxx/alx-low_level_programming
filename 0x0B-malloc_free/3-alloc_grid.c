#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function to return a pointer of a 2d array
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL for failure or 0/ neg height/ width
 */
int **alloc_grid(int width, int height)
{

	int **m;
	int a, b;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	m = malloc(height * sizeof(int *));
	if (m == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		m[a] = malloc(width * sizeof(int));
		if (m[a] == 0)
		{
			for (b = 0; b < a; b++)
				free(m[b]);
			free(m);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			m[a][b] = 0;
	}
	return (m);
}
