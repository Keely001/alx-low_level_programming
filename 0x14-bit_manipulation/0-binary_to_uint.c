#include "main.h"
/**
 * binary_to_uint - binary convertor to decimal
 * @b: pointer to the binary string
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (2 * num + (*b - '0'));
		b++;
	}
	return(num)
}
