#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array in order
 * @a: array
 * @n: no. of elements
 * Return: returns nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
