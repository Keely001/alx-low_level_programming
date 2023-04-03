#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print sum of diagonals
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;
	int *b = a;

	for (i = 0; i < size; i++)
	{
		sum1 += b[i * size + i];
	}
	for (j = (size - 1); j >= 0; j--)
	{
		sum2 += b[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
