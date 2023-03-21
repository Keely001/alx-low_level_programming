#include "main.h"

/**
 * print_sign - determine the sign
 * @n: number to be checked.
 * Return: 0,1 or -1 depending on the results
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
}
