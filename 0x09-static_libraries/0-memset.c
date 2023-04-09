#include "main.h"

/**
 * _memset - memset method
 * @s: memory to be set
 * @b: location to be set
 * @n : from the beginning, no of memory o be set
 * Return: new memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
