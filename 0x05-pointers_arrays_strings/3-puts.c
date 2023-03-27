#include "main.h"

/**
 * _puts - prints to stdout
 * @str: string
 * Return: Always non
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
