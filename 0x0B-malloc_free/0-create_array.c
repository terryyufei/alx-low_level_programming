#include <stdlib.h>
#include "main.h"

/**
 * create_array -  create array of chars,initializes it with a specific char
 * @size: size of the array
 * @c: character to be initialized.
 * Return: NULL if it fails else a pointer to an array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
