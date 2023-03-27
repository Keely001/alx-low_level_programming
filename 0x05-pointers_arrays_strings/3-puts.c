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
	while (*(str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
