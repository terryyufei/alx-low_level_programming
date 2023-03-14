#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated memory
 * @str: the original string
 * Return: NULL if str = NULL, else pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	str2 = malloc(strlen(str) + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}
	strcpy(str2, str);
	return (str2);
}

