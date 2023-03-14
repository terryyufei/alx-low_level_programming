#include "main.h"

/**
 * str_concat -  a function that concatenates two strings
 * @s1: contains contents of string 1
 * @s2: contains contents of string 2
 * Return: NULL on failure, pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int index = 0;
	int length = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	new_str = malloc(sizeof(char) * length);
	if (new_str == NULL)

		return (NULL);
	for (i = 0; s1[i] || s2[i]; i++)
		new_str[index++] = s1[i];

	for (i = 0; s1[i] || s2[i]; i++)
		new_str[index++] = s2[i];
	return (new_str);
}
