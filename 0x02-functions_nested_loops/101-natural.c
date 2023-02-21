#include <stdio.h>

/**
  * main - Prints the sum of all mutiples of 3 0r 5 upto 1042
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i, x = 0;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			x += i;
	printf("%d\n", x);
	return (0);
}
