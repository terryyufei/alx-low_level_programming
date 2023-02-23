#include "main.h"

/**
 *  more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *  Description: print 1-14 ten times
 *
 *  Return: void
 */

void more_numbers(void)
{
	int counter;
	int number;

	for (counter = 0; counter <= 9; counter++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');

			}
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}
