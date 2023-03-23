#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: parameter
 * Return: void
 */
void print_number(int n)
{
	unsigned int b = n;

	if (n < 0)
	{
		b  = -n;
		_putchar('-');
	}
	else
		b = n;
	if (b / 10)
		print_number(b / 10);
	_putchar((b % 10) + '0');
}
