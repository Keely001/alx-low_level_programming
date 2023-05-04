#include "main.h"

/**
 * get_endianness - faction to determine endianness.
 * Return: 0 r 1
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *p = (char *)&num;

	if (*p == 1)
		return (1);
	else
		return (0);
}
