#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @a: parameter
 *
 * Return: returns the number.
 *
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
		last = -(last);
	_putchar(last +'0');
	return (last);
}
