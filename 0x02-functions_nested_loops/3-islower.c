#include "main.h"

/**
 * _islower - writes a function that checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 for lowercase character, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 95 && c <= 120)
	{
	return (1);
	}
	return (0);
}
