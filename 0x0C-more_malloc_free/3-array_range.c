#include "main.h"
/**
 * array_range - print a range
 * @min: min number
 * @max: max number
 * Return: Null or pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	i = 0;
	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
