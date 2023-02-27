#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the string pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}

