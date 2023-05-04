#include "main.h"

/**
 * set_bit - sets a specific bit to 1.
 * @n: pointer to the value
 * @index: position to check.
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position;

	if (index > 63)
		return (-1);
	position = ((*n >> index) | 1);
	position = position << index;
	*n = position;
	return (1);
}
