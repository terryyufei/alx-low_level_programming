#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string
 * @str: A pointer
 * Return: 0
 */
void puts2(char *str)
{
	int len = 0;
	int z = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	z = len - 1;
	for (i = 0; i <= z; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
