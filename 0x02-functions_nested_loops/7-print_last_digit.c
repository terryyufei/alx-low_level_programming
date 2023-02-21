#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: the last digit
 *
 * Return: value of the last digit
 */

int print_last_digit(int x)
{
	int last;

	last = x % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
