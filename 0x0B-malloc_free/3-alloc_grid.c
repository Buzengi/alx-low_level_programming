#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function to allocate memory to grid
 * @width: integer
 * @height: integer
 * Return: return a pointer to the array otherwise return NULL
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(width * sizeof(int));
		if (ptr[x] == NULL)
		{
			for (y = 0; y < x;  y++)
				free(ptr[y]);
			free(ptr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	}
	return (ptr);
}
