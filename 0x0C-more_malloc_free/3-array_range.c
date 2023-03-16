#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < (max - min + 1);i++)
		ptr[i] = min + 1;
	return (ptr);
}

