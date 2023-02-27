#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string
 * Return:(void)
 */

void puts_half(char *str)
{
	int r = 0;
	int d;

	while (str[r] != '\0')
	{
		r++;
	}
	if (r % 2 == 1)
	{
		d = (r - 1) / 2;
		d += 1;

	}
	else
	{
		d = r / 2;
	}
	for (; d < r; d++)
	{
		putchar(str[d]);
	}
	putchar('\n');
}
