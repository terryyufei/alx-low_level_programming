#include "main.h"
#include <stdio.h>
/**
 * rev_string - A program that reverses string
 * @s: pointer to string
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	char temp;

	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
