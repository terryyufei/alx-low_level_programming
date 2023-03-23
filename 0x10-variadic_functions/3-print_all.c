#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char c;
int n;
float f;
char *s;

va_start(args, format);
while (format != NULL && format[i] != '\0')
{
	switch (format[i])
	{
		case 'c':
			c = va_arg(args, int), printf("%c", c);
			break;
		case 'i':
			n = va_arg(args, int), printf("%d", n);
			break;
		case 'f':
			f = (float) va_arg(args, double), printf("%f", f);
			break;
		case 's':
			s = va_arg(args, char *), printf("%s", s != NULL ? s : "(nil)");
			break;
		default:
			i++;
			continue;
	}

	if (format[i + 1] != '\0')
	{
		char *sep = ", ";

		printf("%s", sep);
	}
	i++;
}
va_end(args), printf("\n");
}
