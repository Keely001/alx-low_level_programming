#include "main.h"

/**
 * clear_bit - set value to 0
 * @n: pointer to the number
 * @index: index to be set
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position;

	position = *n;
	if (index > 63)
		return (-1);
	position = (~(1UL << index) & position);
	*n = position;
	return (1);
}
