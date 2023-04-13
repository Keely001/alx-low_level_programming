#include "main.h"
/**
 * _calloc - calloc function working
 * @nmemb: no. of members
 * @size: size of each
 * Return: char pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}
	return (a);
}
