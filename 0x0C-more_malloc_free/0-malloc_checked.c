#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: 98 or 0
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
