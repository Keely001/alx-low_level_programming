#include "main.h"
/**
 * _strlen_recursion - print strings length
 * @s: string
 * Return: string count.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
