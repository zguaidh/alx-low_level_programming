#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: first dimensional array of integers
 *@height: second dimensional array of integrs
 *
 *Return: a pointer or NULL onf ailure or one of the strings is 0
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	ptr = malloc(sizeof(*ptr) * height);

	if (width <= 0 || height <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(sizeof(**ptr) * width);
			if (ptr[i] == 0)
			{
				/* Everything is freed if malloc fails*/
				while (i--)
					free(ptr[i]);
				free(ptr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
		return (ptr);
	}
}
