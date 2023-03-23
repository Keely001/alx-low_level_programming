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
		n *= 1;
		b = n;
		_putchar('_');

	}
	k /= 10;
	if (k != 0)
	print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
