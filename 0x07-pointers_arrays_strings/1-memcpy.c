#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: pointer to the memory area where data will be copied
 * @src: pointer to the memory area from which data will be copied
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
