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
	unsigned int length, i;

	if (str == 0)
	{
		return (NULL);
	}
	for (length = 0; str[length]; length++)

	str2 = malloc(sizeof(char) * (length + 1));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
		str2[i] = str[i];
	{
		return (str2);
	}
}

