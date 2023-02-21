#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: The alphabet to be found
 *
 * Return: 1 if c is a letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
