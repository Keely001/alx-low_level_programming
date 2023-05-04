#include "main.h"

/**
 * flip_bits - determines no of unique binaary values.
 * @n: first number
 * @m: second number
 * Return: the number of uniwue binary values.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int position;
	unsigned long int diff;
	unsigned int count = 0;
	int i = 63;

	diff = (m ^ n);
	while (i >= 0)
	{
		position = diff >> i;
		if (position & 1)
			count++;
		i--;
	}
	return (count);
}
