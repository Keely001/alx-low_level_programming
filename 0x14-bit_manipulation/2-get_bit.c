#include "main.h"
/**
 * get_bit - checks bit at a specific position
 * @n: the number to be checked
 * @index: the index to check.
 * Return: value at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int position;

	if (index > 63)
		return (-1);
	position = n >> index;
	if (position & 1)
		return (1);
	else
		return (0);
	return (-1);
}
