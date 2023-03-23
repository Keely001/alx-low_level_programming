#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	}
	_putchar('\n');
}
