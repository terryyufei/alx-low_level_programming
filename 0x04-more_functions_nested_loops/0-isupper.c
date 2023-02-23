#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c: character to check
 *
 * Return: 1 for true and 0 for false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
