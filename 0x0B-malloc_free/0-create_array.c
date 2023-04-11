#include "main.h"
/**
 * create_array - creates an initialized array
 * @size: size of array
 * @c: initialization character
 * Return: 0 or 1
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * (sizeof(char)));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
