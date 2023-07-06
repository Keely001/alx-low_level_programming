#include "main.h"
/**
 * print_binary - prints a binary number
 * @n: the number to be printed
 * Return: None
 */

void print_binary(unsigned long int n)
{
	unsigned int count = 0;
	int i;
	unsigned long int pos;

	i = 63;
	while (i >= 0)
	{
		pos = n >> i;

		if (pos & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count > 0)
			_putchar('0');
		i--;
	}
	if (count == 0)
		_putchar(0);
}
