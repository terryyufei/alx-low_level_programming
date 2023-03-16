#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: unsigned interger
 * Return: NULL if fail else pointer to a new allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_cat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	str_cat = malloc(sizeof(char) * (len + 1));

	if (str_cat == NULL)
		return (NULL);
	len = 0;

	for (i = 0; s1[i]; i++)
		str_cat[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str_cat[len++] = s2[i];

	str_cat[len] = '\0';

	return (str_cat);
}
