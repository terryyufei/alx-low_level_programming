#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - a function that prints the sum of the two diagonals
  * of a square matrix of integers.
  * @a: input
  * @size: input
  * Return: Always 0 (success)
  */

void print_diagsums(int *a, int size)
{
	int m, n, sum1 = 0, sum2 = 0;

	for (m = 0; m <= (size * size); m = m + size + 1)
	{
		sum1 = sum1 + a[m];
	}
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	{
		sum2 = sum2 + a[n];
	}
	printf("%d, %d\n", sum1, sum2);
}
