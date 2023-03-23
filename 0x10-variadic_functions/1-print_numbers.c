#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - a function that prints numbers
  * @separator: points to the string to be printed btwn numbers
  * @n: number of intergers passed to the function
  * Return: if separator is NULL do not print
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
