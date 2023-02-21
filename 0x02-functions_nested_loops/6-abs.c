#include "main.h"

/**
 * _abs - computes tha absolute value of an interger.
 * @c: the number to be computed.
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
