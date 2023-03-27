#include "main.h"
/**
 * _strlen - determine the length
 * @s: length
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
