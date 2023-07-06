#include "main.h"
/**
 * set_bit -sets a specific bit to 1
 * @n:pointer to the value
 * @index:position
 * Return:1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pos;

	if (index > 63)
		return (-1);
	pos = ((*n >> index) | 1);
	pos = pos << index;
	*n = pos;
	return (1);
}
