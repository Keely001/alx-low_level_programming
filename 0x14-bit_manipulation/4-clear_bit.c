#include "main.h"
/**
 * clear_bit - set value to 0
 * @n: pointer to the number
 * @index:index to be set
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pos;

	pos = *n;
	if (index > 63)
		return (-1);
	pos = (~(1UL << index) & pos);
	*n = pos;
	return (1);
}
