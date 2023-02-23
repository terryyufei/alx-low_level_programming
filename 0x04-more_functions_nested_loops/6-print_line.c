#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number of dashes to print
 * Return: has no return value
 */

void print_line(int n)
{
	int counter = 0;

	while (n > 0 && counter < n)
	{
		_putchar('_');
		counter++;
	}
	_putchar('\n');
}
