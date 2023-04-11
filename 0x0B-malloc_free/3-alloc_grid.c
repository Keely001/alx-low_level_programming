#include "main.h"
/**
 * alloc_grid - print a grid
 * @width: its width
 * @height: its height
 * Return: Null or 1
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;

	}
	return (a);
}
