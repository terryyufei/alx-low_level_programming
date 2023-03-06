#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: constant byte that will be used to fill the memory
 * @n: number of bytes to be filled with the constant b
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

