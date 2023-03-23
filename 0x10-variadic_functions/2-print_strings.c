#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - a function that prints a string
  * @separator: the string to be printed btwn the strings
  * @n: number of strings passed to the function
  * Return: if separator is NULL don't print, if one string is NULL print nil
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		printf("%s", string != NULL ? string : "(nil)");

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
