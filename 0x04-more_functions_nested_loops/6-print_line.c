#include "main.h"

/**
 * print_line - prints a horizontal line.
 * @n: length
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
