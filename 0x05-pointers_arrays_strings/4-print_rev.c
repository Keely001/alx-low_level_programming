#include "main.h"

/**
 * print_rev - print in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\n')
	{
		i++;
		s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
