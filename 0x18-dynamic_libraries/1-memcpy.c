#include "main.h"
/**
 * _memcpy - memcpy function
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: array with copied addresses.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
