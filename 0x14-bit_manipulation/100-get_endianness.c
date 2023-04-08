#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 | 1
 */

int get_endianness(void)
{
	int x = 2;

	if (x & 1)
		return (0);
	else
		return (1);
}
