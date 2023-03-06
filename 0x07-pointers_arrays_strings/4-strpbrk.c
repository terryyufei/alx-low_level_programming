#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - a function that searches a string for any set of bytes
 * @s: string to be searched
 * @accept: bytes to search for
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
			return (s + x);
			}
		}
	}
	return (NULL);
}
