#include "main.h"
/**
 * _strdup -  a function that returns a pointer to a newly allocated space.
 * @str: pointer to string
 * Return: 0 or 1
 */
char *_strdup(char *str)
{
	char *a;
	int i = 0;
	int j;


	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	a = malloc(i * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}
	return (a);
}
