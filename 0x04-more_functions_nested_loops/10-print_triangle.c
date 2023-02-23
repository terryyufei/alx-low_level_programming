#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: triangle height
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int range;
	int space;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (range = 1; range <= size; range++)
		{
			for (space = size - range; space > 0; space--)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < range; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

