#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print to
 * @n: number
 * Return: Always a 0
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			printf("%d", i);
			else
			printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			printf("%d", i);
			else
			printf("%d, ", i);
		}
		printf("\n");
	}
	else
	{
	printf("98");
	printf("\n");
	}
}
