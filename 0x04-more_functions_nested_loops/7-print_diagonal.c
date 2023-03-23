#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\');
		_putchar('\n');
	}
	}
	_putchar('\n');
}
