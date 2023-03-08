#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised by power y
 * @x: integer to power
 * @y: power integer
 * Return: integer value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

