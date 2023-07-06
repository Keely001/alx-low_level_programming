#include "main.h"
/**
 * get_bit - checks bit at a position
 * @n: num to check
 * @index: index
 * Return:value at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int pos;

	if (index > 63)
		return (-1);
	pos = n >> index;
	if (pos & 1)
		return (1);
	else
		return (0);
	return (-1);
}
