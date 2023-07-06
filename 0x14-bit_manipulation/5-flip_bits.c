#include "main.h"
/**
 * flip_bits - determines no. of unique binary values
 * @n: first number
 * @m: second number
 * Return: the number of unique binary
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pos, diff;
	unsigned int count = 0;
	int i = 63;

	diff = (m ^ n);
	while (i >= 0)
	{
		pos = diff >> i;
		if (pos & 1)
			count++;
		i--;
	}
	return (count);
}
