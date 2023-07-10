#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2d array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL or a pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	s = (int **)malloc(sizeof(int *) * height);
	if (width <= 0 || height <= 0 || s == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			while (i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
