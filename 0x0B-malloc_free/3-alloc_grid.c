#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int a, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(sizeof(int) * width);

		if (arr[a] == NULL)
		{
			for (; a >= 0; a--)
				free(arr[a]);

			free(arr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (c = 0; c < width; c++)
			mee[a][c] = 0;
	}

	return (arr);
}
