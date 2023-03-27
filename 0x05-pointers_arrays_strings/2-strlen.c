#include "main.h"
/**
 * _strlen - determine the length
 * @s: length
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	while (*s[i] != '\0')
		i++;
	return (i + 1);
}
