#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the sign to be checked
 *
 * Return:1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
